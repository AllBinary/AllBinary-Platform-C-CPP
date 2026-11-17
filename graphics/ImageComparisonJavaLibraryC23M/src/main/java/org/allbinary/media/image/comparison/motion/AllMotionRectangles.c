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
// package org.allbinary.media.image.comparison.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/media/image/comparison/ImageComparisonResult.h"
#include "org/allbinary/media/image/comparison/pixel/PixelDelta.h"
#include "org/allbinary/media/image/comparison/motion/MotionRectangles.h"

typedef struct AllMotionRectangles AllMotionRectangles;
struct AllMotionRectangles {
    MotionRectangles base;
};

static const char* AllMotionRectangles_NAME = "allMotionRectangles_";

AllMotionRectangles* AllMotionRectangles_new(ImageComparisonResult* imageComparisonResult);

void AllMotionRectangles_init(AllMotionRectangles* this, ImageComparisonResult* imageComparisonResult);
static void AllMotionRectangles_createMotionRectangles(AllMotionRectangles* this, ImageComparisonResult* imageComparisonInfo);
static bool AllMotionRectangles_addPixelDeltaToExistingMotionRectangle(AllMotionRectangles* this, PixelDelta* pixelDelta);
static void AllMotionRectangles_addPixelDeltaToAMotionRectangle(AllMotionRectangles* this, PixelDelta* pixelDelta);
static bool AllMotionRectangles_shouldPixelDeltaPartOfMotionRectangle(AllMotionRectangles* this, MotionRectangle* motionRectangle, PixelDelta* pixelDelta);
static bool AllMotionRectangles_isPixelDeltaLikelyPartOfMotionRectangle(AllMotionRectangles* this, MotionRectangle* motionRectangle, PixelDelta* pixelDelta);


void AllMotionRectangles_init(AllMotionRectangles* this, ImageComparisonResult* imageComparisonResult) {
        MotionRectangles_init(&this->base, AllMotionRectangles_NAME, imageComparisonResult);
        AllMotionRectangles_createMotionRectangles(this, imageComparisonResult);
}

AllMotionRectangles* AllMotionRectangles_new(ImageComparisonResult* imageComparisonResult) {
    AllMotionRectangles* this = calloc(1, sizeof(AllMotionRectangles));
    AllMotionRectangles_init(this, imageComparisonResult);
    return this;
}


// throws Exception
static void AllMotionRectangles_createMotionRectangles(AllMotionRectangles* this, ImageComparisonResult* imageComparisonInfo) {
        BasicArrayList* vector = ImageComparisonResult_getNonMatchingPixelVector(imageComparisonInfo);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            PixelDelta* pixelDelta = ((PixelDelta*) BasicArrayList_get(vector, index));
            AllMotionRectangles_addPixelDeltaToAMotionRectangle(this, pixelDelta);
        }
}


// throws Exception
static bool AllMotionRectangles_addPixelDeltaToExistingMotionRectangle(AllMotionRectangles* this, PixelDelta* pixelDelta) {
        BasicArrayList* vector = AllMotionRectangles_getVector(this);
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            MotionRectangle* motionRectangle = ((MotionRectangle*) BasicArrayList_get(vector, index));
            if (AllMotionRectangles_shouldPixelDeltaPartOfMotionRectangle(this, motionRectangle, pixelDelta)) {
                int32_t newWidth = JAVA_CALL(PixelDelta_getPoint(pixelDelta), getX) - MotionRectangle_getRectangle(motionRectangle)->x;
                int32_t newHeight = JAVA_CALL(PixelDelta_getPoint(pixelDelta), getY) - MotionRectangle_getRectangle(motionRectangle)->y;
                if (newWidth < MotionRectangle_getRectangle(motionRectangle)->width) {
                    newWidth = MotionRectangle_getRectangle(motionRectangle)->width;
                }
                if (newHeight < MotionRectangle_getRectangle(motionRectangle)->height) {
                    newHeight = MotionRectangle_getRectangle(motionRectangle)->height;
                }
                JAVA_CALL(MotionRectangle_getRectangle(motionRectangle), setSize, newWidth, newHeight);
                return true;
            }
        }
        return false;
}


// throws Exception
static void AllMotionRectangles_addPixelDeltaToAMotionRectangle(AllMotionRectangles* this, PixelDelta* pixelDelta) {
        if (!AllMotionRectangles_addPixelDeltaToExistingMotionRectangle(this, pixelDelta)) {
            Rectangle* newRectangle = Rectangle_new(JAVA_CALL(PixelDelta_getPoint(pixelDelta), getX), JAVA_CALL(PixelDelta_getPoint(pixelDelta), getY), 1, 1);
            MotionRectangle* motionRectangle = MotionRectangle_new(newRectangle);
            JAVA_CALL(MotionRectangle_getPixelDeltaVector(motionRectangle), add, pixelDelta);
            JAVA_CALL(AllMotionRectangles_getVector(this), add, motionRectangle);
        }
}


// throws Exception
static bool AllMotionRectangles_shouldPixelDeltaPartOfMotionRectangle(AllMotionRectangles* this, MotionRectangle* motionRectangle, PixelDelta* pixelDelta) {
        bool isPixelLeftOfTheRectangle = false;
        if (MotionRectangle_getRectangle(motionRectangle)->y > JAVA_CALL(PixelDelta_getPoint(pixelDelta), getY)) {
            java_throw(java_exception_new("Exception", "PixelAboveTheRectangle"));
        }
        if (MotionRectangle_getRectangle(motionRectangle)->x > JAVA_CALL(PixelDelta_getPoint(pixelDelta), getX)) {
            isPixelLeftOfTheRectangle = true;
        }
        if (!isPixelLeftOfTheRectangle) {
            return AllMotionRectangles_isPixelDeltaLikelyPartOfMotionRectangle(this, motionRectangle, pixelDelta);
        }
        return false;
}


// throws Exception
static bool AllMotionRectangles_isPixelDeltaLikelyPartOfMotionRectangle(AllMotionRectangles* this, MotionRectangle* motionRectangle, PixelDelta* pixelDelta) {
        int32_t maxX = MotionRectangle_getRectangle(motionRectangle)->x + MotionRectangle_getRectangle(motionRectangle)->width;
        int32_t maxY = MotionRectangle_getRectangle(motionRectangle)->y + MotionRectangle_getRectangle(motionRectangle)->height;
        int32_t horizontalDistance = JAVA_CALL(PixelDelta_getPoint(pixelDelta), getX) - maxX;
        int32_t verticalDistance = JAVA_CALL(PixelDelta_getPoint(pixelDelta), getY) - maxY;
        if (horizontalDistance < this->MAX_PIXEL_DISTANCE_THRESHOLD && verticalDistance < this->MAX_PIXEL_DISTANCE_THRESHOLD) {
            return true;
        }
        return false;
}

