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
// package org.allbinary.media.image.search

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
#include "org/allbinary/media/image/ImageUtil.h"
#include "org/allbinary/media/image/comparison/pixel/PixelDelta.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct ImageComparisonSearch ImageComparisonSearch;
struct ImageComparisonSearch {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    bool isSameHeight;
    bool isSameWidth;
    int32_t pixelsThatMatch;
    int32_t pixelsIgnored;
    int32_t imageHeight;
    int32_t imageWidth;
    int32_t tolerance;
    BasicArrayList* nonMatchingPixelVector;
    BufferedImage** bufferedImages;
    float matchingPercent;
};


ImageComparisonSearch* ImageComparisonSearch_new(BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int32_t tolerance);

void ImageComparisonSearch_init(ImageComparisonSearch* this, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int32_t tolerance);
static float ImageComparisonSearch_getMatchingPercent(ImageComparisonSearch* this);
void ImageComparisonSearch_add(ImageComparisonSearch* this, PixelDelta* pixel);
BasicArrayList* ImageComparisonSearch_getNonMatchingPixelVector(ImageComparisonSearch* this);
const char* ImageComparisonSearch_toString(ImageComparisonSearch* this);
BufferedImage** ImageComparisonSearch_getBufferedImages(ImageComparisonSearch* this);
static void ImageComparisonSearch_setBufferedImages(ImageComparisonSearch* this, BufferedImage** bufferedImages);
int32_t ImageComparisonSearch_getTolerance(ImageComparisonSearch* this);
void ImageComparisonSearch_setTolerance(ImageComparisonSearch* this, int32_t tolerance);

static void ImageComparisonSearch_initFields(ImageComparisonSearch* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->isSameHeight = false;
    this->isSameWidth = false;
    this->pixelsThatMatch = 0;
    this->pixelsIgnored = 0;
    
    
    this->tolerance = 0;
    
    this->bufferedImages = nullptr;
    this->matchingPercent = ((float) (-1));
}


void ImageComparisonSearch_init(ImageComparisonSearch* this, BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int32_t tolerance) {
    ImageComparisonSearch_initFields(this);
        this->nonMatchingPixelVector = BasicArrayListD_new();
        ImageComparisonSearch_setBufferedImages(this, ((BufferedImage**) java_array_new(sizeof(BufferedImage*), 2)));
        ImageComparisonSearch_getBufferedImages(this)[0] = bufferedImage;
        ImageComparisonSearch_getBufferedImages(this)[1] = bufferedImage2;
        this->imageHeight = BufferedImage_getHeight(bufferedImage);
        this->imageWidth = BufferedImage_getWidth(bufferedImage);
        if (BufferedImage_getHeight(bufferedImage) != BufferedImage_getHeight(bufferedImage2)) {
            this->isSameHeight = false;
            if (this->imageHeight > BufferedImage_getHeight(bufferedImage2)) {
                this->imageHeight = BufferedImage_getHeight(bufferedImage2);
            }
        } else {
            this->isSameHeight = true;
        }
        if (BufferedImage_getWidth(bufferedImage) != BufferedImage_getWidth(bufferedImage2)) {
            this->isSameWidth = false;
            if (this->imageWidth > BufferedImage_getWidth(bufferedImage2)) {
                this->imageWidth = BufferedImage_getWidth(bufferedImage2);
            }
        } else {
            this->isSameWidth = true;
        }
        if (!this->isSameWidth || !this->isSameHeight) {
            ImageUtil* imageUtil = ImageUtil_getInstance();
            LogUtil_putF(this->logUtil, "Images were not the same size? Most likely a resolution change.", this, this->commonStrings->CONSTRUCTOR);
            LogUtil_putF(this->logUtil, java_concat("1: ", ImageUtil_toString(imageUtil, bufferedImage)), this, this->commonStrings->CONSTRUCTOR);
            LogUtil_putF(this->logUtil, java_concat("2: ", ImageUtil_toString(imageUtil, bufferedImage2)), this, this->commonStrings->CONSTRUCTOR);
        }
}

ImageComparisonSearch* ImageComparisonSearch_new(BufferedImage* bufferedImage, BufferedImage* bufferedImage2, int32_t tolerance) {
    ImageComparisonSearch* this = calloc(1, sizeof(ImageComparisonSearch));
    ImageComparisonSearch_init(this, bufferedImage, bufferedImage2, tolerance);
    return this;
}


static float ImageComparisonSearch_getMatchingPercent(ImageComparisonSearch* this) {
        if (this->matchingPercent == ((float) (-1))) {
            this->matchingPercent = ((float) this->pixelsThatMatch) / ((float) (this->imageWidth * this->imageHeight));
        }
        return this->matchingPercent;
}


void ImageComparisonSearch_add(ImageComparisonSearch* this, PixelDelta* pixel) {
        BasicArrayList_add(this->nonMatchingPixelVector, pixel);
}


BasicArrayList* ImageComparisonSearch_getNonMatchingPixelVector(ImageComparisonSearch* this) {
        return this->nonMatchingPixelVector;
}


const char* ImageComparisonSearch_toString(ImageComparisonSearch* this) {
        return java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat(java_concat("ImageComparisonInfo: ", " Number Of Matching Pixels: "), java_string_of(this->pixelsThatMatch)), "\nNumber Of Non-Matching Pixels: "), java_string_of(JAVA_CALL(ImageComparisonSearch_getNonMatchingPixelVector(this), size))), "\nNumber Of Pixels Ignored: "), java_string_of(this->pixelsIgnored)), "\nMatching Percentage: "), java_string_of(ImageComparisonSearch_getMatchingPercent(this)));
}


BufferedImage** ImageComparisonSearch_getBufferedImages(ImageComparisonSearch* this) {
        return this->bufferedImages;
}


static void ImageComparisonSearch_setBufferedImages(ImageComparisonSearch* this, BufferedImage** bufferedImages) {
        this->bufferedImages = bufferedImages;
}


int32_t ImageComparisonSearch_getTolerance(ImageComparisonSearch* this) {
        return this->tolerance;
}


void ImageComparisonSearch_setTolerance(ImageComparisonSearch* this, int32_t tolerance) {
        this->tolerance = tolerance;
}

