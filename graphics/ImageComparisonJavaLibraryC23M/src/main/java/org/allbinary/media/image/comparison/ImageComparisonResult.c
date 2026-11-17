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
// package org.allbinary.media.image.comparison

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/comparison/pixel/PixelDelta.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageComparisonResult ImageComparisonResult;
struct ImageComparisonResult {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BufferedImage** bufferedImages;
    const char* name;
    bool isSameHeight;
    bool isSameWidth;
    int32_t imageHeight;
    int32_t imageWidth;
    BasicArrayList* nonMatchingPixelVector;
    int64_t frameOne;
    int64_t frameTwo;
    int32_t pixelsThatMatch;
    int32_t pixelsIgnored;
    int32_t tolerance;
    float matchingPercent;
};


ImageComparisonResult* ImageComparisonResult_new(const char* name, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance);

void ImageComparisonResult_init(ImageComparisonResult* this, const char* name, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance);
float ImageComparisonResult_getMatchingPercent(ImageComparisonResult* this);
void ImageComparisonResult_add(ImageComparisonResult* this, PixelDelta* pixel);
BasicArrayList* ImageComparisonResult_getNonMatchingPixelVector(ImageComparisonResult* this);
const char* ImageComparisonResult_toString(ImageComparisonResult* this);
BufferedImage** ImageComparisonResult_getBufferedImages(ImageComparisonResult* this);
int32_t ImageComparisonResult_getTolerance(ImageComparisonResult* this);
static void ImageComparisonResult_setTolerance(ImageComparisonResult* this, int32_t tolerance);
int64_t ImageComparisonResult_getFrameOne(ImageComparisonResult* this);
int64_t ImageComparisonResult_getFrameTwo(ImageComparisonResult* this);

static void ImageComparisonResult_initFields(ImageComparisonResult* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->bufferedImages = ((BufferedImage**) java_array_new(sizeof(BufferedImage*), 2));
    
    this->isSameHeight = false;
    this->isSameWidth = false;
    
    
    
    
    
    this->pixelsThatMatch = 0;
    this->pixelsIgnored = 0;
    this->tolerance = 0;
    this->matchingPercent = ((float) (-1));
}


void ImageComparisonResult_init(ImageComparisonResult* this, const char* name, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance) {
    ImageComparisonResult_initFields(this);
        this->name = name;
        this->nonMatchingPixelVector = BasicArrayListD_new();
        this->bufferedImages[0] = bufferedImage;
        this->bufferedImages[1] = bufferedImage2;
        this->frameOne = frameOne;
        this->frameTwo = frameTwo;
        ImageComparisonResult_setTolerance(this, 0);
        int32_t imageHeight = BufferedImage_getHeight(bufferedImage);
        int32_t imageWidth = BufferedImage_getWidth(bufferedImage);
        if (BufferedImage_getHeight(bufferedImage) != BufferedImage_getHeight(bufferedImage2)) {
            this->isSameHeight = false;
            if (imageHeight > BufferedImage_getHeight(bufferedImage2)) {
                imageHeight = BufferedImage_getHeight(bufferedImage2);
            }
        } else {
            this->isSameHeight = true;
        }
        if (BufferedImage_getWidth(bufferedImage) != BufferedImage_getWidth(bufferedImage2)) {
            this->isSameWidth = false;
            if (imageWidth > BufferedImage_getWidth(bufferedImage2)) {
                imageWidth = BufferedImage_getWidth(bufferedImage2);
            }
        } else {
            this->isSameWidth = true;
        }
        this->imageWidth = imageWidth;
        this->imageHeight = imageHeight;
        if (!this->isSameWidth || !this->isSameHeight) {
            ImageUtil* imageUtil = ImageUtil_getInstance();
            LogUtil_putF(this->logUtil, "Images were not the same size? Most likely a resolution change.", this, this->commonStrings->CONSTRUCTOR);
            LogUtil_putF(this->logUtil, java_concat("1: ", ImageUtil_toString(imageUtil, bufferedImage)), this, this->commonStrings->CONSTRUCTOR);
            LogUtil_putF(this->logUtil, java_concat("2: ", ImageUtil_toString(imageUtil, bufferedImage2)), this, this->commonStrings->CONSTRUCTOR);
        }
}

ImageComparisonResult* ImageComparisonResult_new(const char* name, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int64_t frameOne, int64_t frameTwo, int32_t tolerance) {
    ImageComparisonResult* this = calloc(1, sizeof(ImageComparisonResult));
    ImageComparisonResult_init(this, name, bufferedImage, bufferedImage2, frameOne, frameTwo, tolerance);
    return this;
}


float ImageComparisonResult_getMatchingPercent(ImageComparisonResult* this) {
        if (this->matchingPercent == ((float) (-1))) {
            this->matchingPercent = ((float) this->pixelsThatMatch) / ((float) (this->imageWidth * this->imageHeight));
        }
        return this->matchingPercent;
}


void ImageComparisonResult_add(ImageComparisonResult* this, PixelDelta* pixel) {
        BasicArrayList_add(this->nonMatchingPixelVector, pixel);
}


BasicArrayList* ImageComparisonResult_getNonMatchingPixelVector(ImageComparisonResult* this) {
        return this->nonMatchingPixelVector;
}


const char* ImageComparisonResult_toString(ImageComparisonResult* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "ImageComparisonInfo: "), append, this->name), append, " Number Of Matching Pixels: "), appendint, this->pixelsThatMatch), append, "\nNumber Of Non-Matching Pixels: "), appendint, JAVA_CALL(ImageComparisonResult_getNonMatchingPixelVector(this), size)), append, "\nNumber Of Pixels Ignored: "), appendint, this->pixelsIgnored), append, "\nMatching Percentage: "), appendfloat, ImageComparisonResult_getMatchingPercent(this)), toString);
}


BufferedImage** ImageComparisonResult_getBufferedImages(ImageComparisonResult* this) {
        return this->bufferedImages;
}


int32_t ImageComparisonResult_getTolerance(ImageComparisonResult* this) {
        return this->tolerance;
}


static void ImageComparisonResult_setTolerance(ImageComparisonResult* this, int32_t tolerance) {
        this->tolerance = tolerance;
}


int64_t ImageComparisonResult_getFrameOne(ImageComparisonResult* this) {
        return this->frameOne;
}


int64_t ImageComparisonResult_getFrameTwo(ImageComparisonResult* this) {
        return this->frameTwo;
}

