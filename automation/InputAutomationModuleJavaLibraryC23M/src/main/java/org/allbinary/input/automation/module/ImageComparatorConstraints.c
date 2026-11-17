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
// package org.allbinary.input.automation.module

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/awt/Color.h"
// #include "java/awt/Rectangle.h"
// #include "java/awt/image/BufferedImage.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/collision/RectangleCollisionUtil.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/media/image/comparison/ImageComparatorConstraintsInterface.h"

typedef struct ImageComparatorConstraints ImageComparatorConstraints;
struct ImageComparatorConstraints {
    ImageComparatorConstraintsInterface ImageComparatorConstraintsInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* avoidVector;
    int32_t maxNonMatchingPixelDeltas;
    int32_t doImageComparisonEveryNthFrame;
};


ImageComparatorConstraints* ImageComparatorConstraints_new(int32_t doImageComparisonEveryNthFrame);

void ImageComparatorConstraints_init(ImageComparatorConstraints* this, int32_t doImageComparisonEveryNthFrame);
BasicArrayList* ImageComparatorConstraints_getAvoidVector(ImageComparatorConstraints* this);
bool ImageComparatorConstraints_isColorAllowed(ImageComparatorConstraints* this, int32_t frame, GPoint* point, Color* color);
bool ImageComparatorConstraints_isCollisionWithAvoidRectangles(ImageComparatorConstraints* this, Rectangle* rectangle);
bool ImageComparatorConstraints_isCollisionWithAvoidRectangles(ImageComparatorConstraints* this, GPoint* point);
void ImageComparatorConstraints_setAvoidVector(ImageComparatorConstraints* this, BasicArrayList* avoidVector);
int32_t ImageComparatorConstraints_getMaxNonMatchingPixelDeltas(ImageComparatorConstraints* this);
void ImageComparatorConstraints_setMaxNonMatchingPixelDeltas(ImageComparatorConstraints* this, int32_t maxNonMatchingPixelDeltas);
bool ImageComparatorConstraints_isFrameAllowed(ImageComparatorConstraints* this, int32_t frame);
bool ImageComparatorConstraints_isImageValid(ImageComparatorConstraints* this, BufferedImage* bufferedImage);
void ImageComparatorConstraints_log(ImageComparatorConstraints* this);

static void ImageComparatorConstraints_initFields(ImageComparatorConstraints* this) {
    this->logUtil = LogUtil_getInstance();
    this->avoidVector = nullptr;
    this->maxNonMatchingPixelDeltas = 0;
    
}


void ImageComparatorConstraints_init(ImageComparatorConstraints* this, int32_t doImageComparisonEveryNthFrame) {
    ImageComparatorConstraints_initFields(this);
        this->doImageComparisonEveryNthFrame = doImageComparisonEveryNthFrame;
        ImageComparatorConstraints_setAvoidVector(this, BasicArrayListD_new());
}

ImageComparatorConstraints* ImageComparatorConstraints_new(int32_t doImageComparisonEveryNthFrame) {
    ImageComparatorConstraints* this = calloc(1, sizeof(ImageComparatorConstraints));
    ImageComparatorConstraints_init(this, doImageComparisonEveryNthFrame);
    return this;
}


BasicArrayList* ImageComparatorConstraints_getAvoidVector(ImageComparatorConstraints* this) {
        return this->avoidVector;
}


bool ImageComparatorConstraints_isColorAllowed(ImageComparatorConstraints* this, int32_t frame, GPoint* point, Color* color) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool ImageComparatorConstraints_isCollisionWithAvoidRectangles(ImageComparatorConstraints* this, Rectangle* rectangle) {
        bool isCollsionWithAvoidRectangles = false;
        BasicArrayList* avoidVector = ImageComparatorConstraints_getAvoidVector(this);
        int32_t size = BasicArrayList_size(avoidVector);
        for (int32_t index = 0; index < size; index++) {
            Rectangle* avoidRectangle = ((Rectangle*) BasicArrayList_get(avoidVector, index));
            if (RectangleCollisionUtil_isCollision(avoidRectangle, rectangle)) {
                isCollsionWithAvoidRectangles = true;
            }
        }
        return isCollsionWithAvoidRectangles;
}


// Java overloaded method: C needs a different name
bool ImageComparatorConstraints_isCollisionWithAvoidRectangles(ImageComparatorConstraints* this, GPoint* point) {
        bool isCollsionWithAvoidRectangles = false;
        BasicArrayList* avoidVector = ImageComparatorConstraints_getAvoidVector(this);
        int32_t size = BasicArrayList_size(avoidVector);
        for (int32_t index = 0; index < size; index++) {
            Rectangle* avoidRectangle = ((Rectangle*) BasicArrayList_get(avoidVector, index));
            if (RectangleCollisionUtil_isCollision(avoidRectangle, point)) {
                isCollsionWithAvoidRectangles = true;
                break;
            }
        }
        return isCollsionWithAvoidRectangles;
}


void ImageComparatorConstraints_setAvoidVector(ImageComparatorConstraints* this, BasicArrayList* avoidVector) {
        this->avoidVector = avoidVector;
}


int32_t ImageComparatorConstraints_getMaxNonMatchingPixelDeltas(ImageComparatorConstraints* this) {
        return this->maxNonMatchingPixelDeltas;
}


void ImageComparatorConstraints_setMaxNonMatchingPixelDeltas(ImageComparatorConstraints* this, int32_t maxNonMatchingPixelDeltas) {
        this->maxNonMatchingPixelDeltas = maxNonMatchingPixelDeltas;
}


bool ImageComparatorConstraints_isFrameAllowed(ImageComparatorConstraints* this, int32_t frame) {
        int32_t remainder = ((frame + 1) % this->doImageComparisonEveryNthFrame);
        LogUtil_putF(this->logUtil, java_concat(java_concat(java_concat(java_concat(java_concat(" Frame: ", java_string_of(frame)), " remainder: "), java_string_of(remainder)), " this.doImageComparisonEveryNthFrame: "), java_string_of(this->doImageComparisonEveryNthFrame)), this, "isCollisionWithAvoidRectangles");
        if (remainder == 0) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
bool ImageComparatorConstraints_isImageValid(ImageComparatorConstraints* this, BufferedImage* bufferedImage) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void ImageComparatorConstraints_log(ImageComparatorConstraints* this) {
        BasicArrayList* avoidVector = ImageComparatorConstraints_getAvoidVector(this);
        int32_t size = BasicArrayList_size(avoidVector);
        for (int32_t index = 0; index < size; index++) {
            Rectangle* avoidRectangle = ((Rectangle*) BasicArrayList_get(avoidVector, index));
            LogUtil_putF(this->logUtil, java_concat("Avoid Rectangle: ", java_string_of(avoidRectangle)), this, "log");
        }
}

