/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *  
 */
// Generated Code Do Not Modify
// package org.allbinary.media.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonLabels.h"

typedef struct ImageUnifierUtil ImageUnifierUtil;
struct ImageUnifierUtil {
    LogUtil* logUtil;
    ImageUtil* imageUtil;
};

static ImageUnifierUtil* ImageUnifierUtil_instance;

ImageUnifierUtil* ImageUnifierUtil_new(void);
ImageUnifierUtil* ImageUnifierUtil_getInstance(void);

void ImageUnifierUtil_init(ImageUnifierUtil* this);
GraphicsConfiguration* ImageUnifierUtil_getDefaultConfiguration(ImageUnifierUtil* this);
BufferedImage* ImageUnifierUtil_getImage(ImageUnifierUtil* this, BufferedImage** bufferedImageArray, ImageUnifierProperties* imageUnifierProperties);

// Static fields with runtime initializers: call this once at startup
void ImageUnifierUtil_staticInit(void) {
    ImageUnifierUtil_instance = ImageUnifierUtil_new();
}

static void ImageUnifierUtil_initFields(ImageUnifierUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageUtil = ImageUtil_getInstance();
}


ImageUnifierUtil* ImageUnifierUtil_getInstance(void) {
        return ImageUnifierUtil_instance;
}


void ImageUnifierUtil_init(ImageUnifierUtil* this) {
    ImageUnifierUtil_initFields(this);
}

ImageUnifierUtil* ImageUnifierUtil_new(void) {
    ImageUnifierUtil* this = calloc(1, sizeof(ImageUnifierUtil));
    ImageUnifierUtil_init(this);
    return this;
}


GraphicsConfiguration* ImageUnifierUtil_getDefaultConfiguration(ImageUnifierUtil* this) {
        GraphicsEnvironment* ge = GraphicsEnvironment_getLocalGraphicsEnvironment();
        GraphicsDevice* gd = GraphicsEnvironment_getDefaultScreenDevice(ge);
        return GraphicsDevice_getDefaultConfiguration(gd);
}


BufferedImage* ImageUnifierUtil_getImage(ImageUnifierUtil* this, BufferedImage** bufferedImageArray, ImageUnifierProperties* imageUnifierProperties) {
        BufferedImage* newBufferedImage = ImageUtil_create(this->imageUtil, ImageUnifierProperties_getWidth(imageUnifierProperties), ImageUnifierProperties_getHeight(imageUnifierProperties));
        CommonLabels* commonLabels = CommonLabels_getInstance();
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat("Setting Image - ", java_string_of(commonLabels->WIDTH_LABEL)), java_string_of(BufferedImage_getWidth(newBufferedImage))), java_string_of(commonLabels->HEIGHT_LABEL)), java_string_of(BufferedImage_getHeight(newBufferedImage))), this, "getImage");
        Graphics2D* g = BufferedImage_createGraphics(newBufferedImage);
        int32_t columnIndex = 0;
        int32_t rowIndex = 0;
        for (int32_t index = 0; index < java_array_length(bufferedImageArray); index++) {
            int32_t x = JAVA_CALL(JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(imageUnifierProperties), getWidth), intValue) * columnIndex++;
            int32_t y = JAVA_CALL(JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(imageUnifierProperties), getHeight), intValue) * rowIndex;
            LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat("Adding Image: ", java_string_of(index)), " x: "), java_string_of(x)), " y: "), java_string_of(y)), this, "getImage");
            Graphics2D_drawImage(g, bufferedImageArray[index], x, y, JAVA_CALL(JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(imageUnifierProperties), getWidth), intValue), JAVA_CALL(JAVA_CALL(ImageUnifierProperties_getImageUnifierCell(imageUnifierProperties), getHeight), intValue), nullptr);
            int32_t totalColumnsMinusOne = (JAVA_CALL(ImageUnifierProperties_getColumns(imageUnifierProperties), intValue) - 1);
            if (columnIndex > totalColumnsMinusOne) {
                rowIndex++;
                columnIndex = 0;
            }
        }
        Graphics2D_dispose(g);
        return newBufferedImage;
}

