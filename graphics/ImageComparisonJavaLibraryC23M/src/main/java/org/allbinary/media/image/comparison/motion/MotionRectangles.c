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

typedef struct MotionRectangles MotionRectangles;
struct MotionRectangles {
    const char* name;
    BasicArrayList* rectangleVector;
    ImageComparisonResult* imageComparisonResult;
    int32_t MAX_PIXEL_DISTANCE_THRESHOLD;
};


MotionRectangles* MotionRectangles_new(const char* name, ImageComparisonResult* imageComparisonResult);

void MotionRectangles_init(MotionRectangles* this, const char* name, ImageComparisonResult* imageComparisonResult);
BasicArrayList* MotionRectangles_getVector(MotionRectangles* this);
void MotionRectangles_setVector(MotionRectangles* this, BasicArrayList* rectangleVector);
const char* MotionRectangles_getName(MotionRectangles* this);
ImageComparisonResult* MotionRectangles_getImageComparisonResult(MotionRectangles* this);
void MotionRectangles_setImageComparisonResult(MotionRectangles* this, ImageComparisonResult* imageComparisonResult);

static void MotionRectangles_initFields(MotionRectangles* this) {
    
    this->rectangleVector = nullptr;
    this->imageComparisonResult = nullptr;
    this->MAX_PIXEL_DISTANCE_THRESHOLD = 2;
}


void MotionRectangles_init(MotionRectangles* this, const char* name, ImageComparisonResult* imageComparisonResult) {
    MotionRectangles_initFields(this);
        this->name = name;
        MotionRectangles_setImageComparisonResult(this, imageComparisonResult);
        MotionRectangles_setVector(this, BasicArrayListD_new());
}

MotionRectangles* MotionRectangles_new(const char* name, ImageComparisonResult* imageComparisonResult) {
    MotionRectangles* this = calloc(1, sizeof(MotionRectangles));
    MotionRectangles_init(this, name, imageComparisonResult);
    return this;
}


BasicArrayList* MotionRectangles_getVector(MotionRectangles* this) {
        return this->rectangleVector;
}


void MotionRectangles_setVector(MotionRectangles* this, BasicArrayList* rectangleVector) {
        this->rectangleVector = rectangleVector;
}


const char* MotionRectangles_getName(MotionRectangles* this) {
        return this->name;
}


ImageComparisonResult* MotionRectangles_getImageComparisonResult(MotionRectangles* this) {
        return this->imageComparisonResult;
}


void MotionRectangles_setImageComparisonResult(MotionRectangles* this, ImageComparisonResult* imageComparisonResult) {
        this->imageComparisonResult = imageComparisonResult;
}

