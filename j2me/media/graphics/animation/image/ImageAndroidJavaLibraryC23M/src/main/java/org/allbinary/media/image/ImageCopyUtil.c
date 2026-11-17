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
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/graphics/Anchor.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct ImageCopyUtil ImageCopyUtil;
struct ImageCopyUtil {
    LogUtil* logUtil;
    ImageCreationUtil* imageCreationUtil;
    int32_t anchor;
};

static ImageCopyUtil* ImageCopyUtil_instance;

ImageCopyUtil* ImageCopyUtil_new(void);
ImageCopyUtil* ImageCopyUtil_getInstance(void);

void ImageCopyUtil_init(ImageCopyUtil* this);
Image* ImageCopyUtil_createImageForRotation(ImageCopyUtil* this, Image* originalImage);
Image* ImageCopyUtil_createImage(ImageCopyUtil* this, Image* originalImage);
Image* ImageCopyUtil_createImageScale(ImageCopyUtil* this, Image* originalImage, float canvasScale, bool resize);

// Static fields with runtime initializers: call this once at startup
void ImageCopyUtil_staticInit(void) {
    ImageCopyUtil_instance = ImageCopyUtil_new();
}

static void ImageCopyUtil_initFields(ImageCopyUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageCreationUtil = ImageCreationUtil_getInstance();
    this->anchor = Anchor_TOP_LEFT;
}


ImageCopyUtil* ImageCopyUtil_getInstance(void) {
        return ImageCopyUtil_instance;
}


void ImageCopyUtil_init(ImageCopyUtil* this) {
    ImageCopyUtil_initFields(this);
}

ImageCopyUtil* ImageCopyUtil_new(void) {
    ImageCopyUtil* this = calloc(1, sizeof(ImageCopyUtil));
    ImageCopyUtil_init(this);
    return this;
}


// throws Exception
Image* ImageCopyUtil_createImageForRotation(ImageCopyUtil* this, Image* originalImage) {
        return ImageCopyUtil_createImage(this, originalImage);
}


// throws Exception
Image* ImageCopyUtil_createImage(ImageCopyUtil* this, Image* originalImage) {
        Image* image = ImageCreationUtil_createImageWH(this->imageCreationUtil, Image_getWidth(originalImage), Image_getHeight(originalImage));
        if (Image_isMutable(image)) {
            JAVA_CALL(Image_getGraphics(image), drawImage, originalImage, 0, 0, this->anchor);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}


// throws Exception
Image* ImageCopyUtil_createImageScale(ImageCopyUtil* this, Image* originalImage, float canvasScale, bool resize) {
        int32_t newWidth = ((int32_t) (Image_getWidth(originalImage) * canvasScale));
        int32_t newHeight = ((int32_t) (Image_getHeight(originalImage) * canvasScale));
        if (resize) {
            if (newWidth < newHeight) {
                newWidth = newHeight;
            }
            if (newHeight < newWidth) {
                newHeight = newWidth;
            }
        }
        Image* image = ImageCreationUtil_createImageWH(this->imageCreationUtil, newWidth, newHeight);
        if (Image_isMutable(image)) {
            int32_t halfWidthDelta = (newWidth - Image_getWidth(originalImage)) / 2;
            int32_t halfHeightDelta = (newHeight - Image_getHeight(originalImage)) / 2;
            Graphics* graphics = Image_getGraphics(image);
            Graphics_drawImage(graphics, originalImage, halfWidthDelta, halfHeightDelta, this->anchor);
            return image;
        } else {
            java_throw(java_exception_new("Exception", "Not Mutable"));
        }
}

