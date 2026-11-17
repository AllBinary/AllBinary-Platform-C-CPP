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

typedef struct ImagesRatioUtil ImagesRatioUtil;
struct ImagesRatioUtil {
    LogUtil* logUtil;
    ImageUtil* imageUtil;
};

static ImagesRatioUtil* ImagesRatioUtil_instance;

ImagesRatioUtil* ImagesRatioUtil_new(void);
ImagesRatioUtil* ImagesRatioUtil_getInstance(void);

void ImagesRatioUtil_init(ImagesRatioUtil* this);
bool ImagesRatioUtil_isEqual(ImagesRatioUtil* this, BufferedImage** bufferedImageArray, int32_t totalImages);
double ImagesRatioUtil_getAverage(ImagesRatioUtil* this, BufferedImage** bufferedImageArray, int32_t totalImages);
BufferedImage* ImagesRatioUtil_fudge(ImagesRatioUtil* this, BufferedImage* bufferedImage, double ratio);
BufferedImage** ImagesRatioUtil_fudge(ImagesRatioUtil* this, BufferedImage** bufferedImageArray, int32_t totalImages, double ratio);

// Static fields with runtime initializers: call this once at startup
void ImagesRatioUtil_staticInit(void) {
    ImagesRatioUtil_instance = ImagesRatioUtil_new();
}

static void ImagesRatioUtil_initFields(ImagesRatioUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->imageUtil = ImageUtil_getInstance();
}


ImagesRatioUtil* ImagesRatioUtil_getInstance(void) {
        return ImagesRatioUtil_instance;
}


void ImagesRatioUtil_init(ImagesRatioUtil* this) {
    ImagesRatioUtil_initFields(this);
}

ImagesRatioUtil* ImagesRatioUtil_new(void) {
    ImagesRatioUtil* this = calloc(1, sizeof(ImagesRatioUtil));
    ImagesRatioUtil_init(this);
    return this;
}


bool ImagesRatioUtil_isEqual(ImagesRatioUtil* this, BufferedImage** bufferedImageArray, int32_t totalImages) {
        int32_t end = totalImages;
        if (java_array_length(bufferedImageArray) < totalImages) {
            end = java_array_length(bufferedImageArray);
        }
        double ratio = (((double) JAVA_CALL(bufferedImageArray[0], getWidth)) / JAVA_CALL(bufferedImageArray[0], getHeight));
        for (int32_t index = 1; index < end; index++) {
            if (ratio != (((double) JAVA_CALL(bufferedImageArray[index], getWidth)) / JAVA_CALL(bufferedImageArray[index], getHeight))) {
                return false;
            }
        }
        return true;
}


double ImagesRatioUtil_getAverage(ImagesRatioUtil* this, BufferedImage** bufferedImageArray, int32_t totalImages) {
        double ratio = 0.0;
        int32_t end = totalImages;
        if (java_array_length(bufferedImageArray) < totalImages) {
            end = java_array_length(bufferedImageArray);
        }
        for (int32_t index = 0; index < end; index++) {
            ratio += (((double) JAVA_CALL(bufferedImageArray[index], getWidth)) / JAVA_CALL(bufferedImageArray[index], getHeight));
        }
        return (ratio / ((double) end));
}


// throws Exception
BufferedImage* ImagesRatioUtil_fudge(ImagesRatioUtil* this, BufferedImage* bufferedImage, double ratio) {
        double imageRatio = (((double) BufferedImage_getWidth(bufferedImage)) / BufferedImage_getHeight(bufferedImage));
        Point* point = Point_new();
        int32_t newHeight = BufferedImage_getHeight(bufferedImage);
        int32_t newWidth = BufferedImage_getWidth(bufferedImage);
        if (ratio > imageRatio) {
            newWidth = ((int32_t) (((double) BufferedImage_getHeight(bufferedImage)) * ratio));
            point->x = (newWidth - BufferedImage_getWidth(bufferedImage)) / 2;
        } else {
            newHeight = ((int32_t) (((double) BufferedImage_getWidth(bufferedImage)) / ratio));
            point->y = (newHeight - BufferedImage_getHeight(bufferedImage)) / 2;
        }
        CommonLabels* commonLabels = CommonLabels_getInstance();
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_string_of(commonLabels->WIDTH_LABEL + BufferedImage_getWidth(bufferedImage)), " newWidth: "), java_string_of(newWidth)), java_string_of(commonLabels->HEIGHT_LABEL)), java_string_of(BufferedImage_getHeight(bufferedImage))), " newHeight: "), java_string_of(newHeight)), " needed ratio: "), java_string_of((((double) newWidth) / ((double) newHeight)))), this, "fudge");
        BufferedImage* newBufferedImage = ImageUtil_create(this->imageUtil, newWidth, newHeight);
        Graphics2D* g = BufferedImage_createGraphics(newBufferedImage);
        if (point->x > 0) {
            BufferedImage* firstColumnBufferedImage = BufferedImage_getSubimage(bufferedImage, 0, 0, 1, BufferedImage_getHeight(bufferedImage));
            BufferedImage* lastColumnBufferedImage = BufferedImage_getSubimage(bufferedImage, BufferedImage_getWidth(bufferedImage) - 1, 0, 1, BufferedImage_getHeight(bufferedImage));
            LogUtil_putF(this->logUtil, "Draw some columns to fill in gap", this, "fudge");
            for (int32_t index = 0; index < point->x; index++) {
                Graphics2D_drawImage(g, firstColumnBufferedImage, index, 0, nullptr);
                Graphics2D_drawImage(g, lastColumnBufferedImage, newWidth - index, 0, nullptr);
            }
        }
        if (point->y > 0) {
            BufferedImage* firstRowBufferedImage = BufferedImage_getSubimage(bufferedImage, 0, 0, BufferedImage_getWidth(bufferedImage), 1);
            BufferedImage* lastRowBufferedImage = BufferedImage_getSubimage(bufferedImage, 0, BufferedImage_getHeight(bufferedImage) - 1, BufferedImage_getWidth(bufferedImage), 1);
            LogUtil_putF(this->logUtil, "Draw some rows to fill in gap", this, "fudge");
            for (int32_t index = 0; index < point->y; index++) {
                Graphics2D_drawImage(g, firstRowBufferedImage, 0, index, nullptr);
                Graphics2D_drawImage(g, lastRowBufferedImage, 0, newHeight - index, nullptr);
            }
        }
        Graphics2D_drawImage(g, bufferedImage, point->x, point->y, BufferedImage_getWidth(bufferedImage), BufferedImage_getHeight(bufferedImage), nullptr);
        return newBufferedImage;
}


// throws Exception
// Java overloaded method: C needs a different name
BufferedImage** ImagesRatioUtil_fudge(ImagesRatioUtil* this, BufferedImage** bufferedImageArray, int32_t totalImages, double ratio) {
        int32_t end = totalImages;
        if (java_array_length(bufferedImageArray) < totalImages) {
            end = java_array_length(bufferedImageArray);
        }
        BufferedImage** fudgedBufferedImageArray = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), end));
        for (int32_t index = 0; index < end; index++) {
            fudgedBufferedImageArray[index] = ImagesRatioUtil_fudge(this, bufferedImageArray[index], ratio);
        }
        return fudgedBufferedImageArray;
}

