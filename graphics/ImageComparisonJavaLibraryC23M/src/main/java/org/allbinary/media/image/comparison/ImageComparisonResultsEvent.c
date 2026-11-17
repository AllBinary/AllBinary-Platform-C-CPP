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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct ImageComparisonResultsEvent ImageComparisonResultsEvent;
struct ImageComparisonResultsEvent {
    AllBinaryEventObject base;
    ImageComparisonResult* imageComparisonResult;
};


ImageComparisonResultsEvent* ImageComparisonResultsEvent_new(Any* anyType, ImageComparisonResult* imageComparisonInfo);

void ImageComparisonResultsEvent_init(ImageComparisonResultsEvent* this, Any* anyType, ImageComparisonResult* imageComparisonInfo);
ImageComparisonResult* ImageComparisonResultsEvent_getImageComparisonResult(ImageComparisonResultsEvent* this);
void ImageComparisonResultsEvent_setImageComparisonResult(ImageComparisonResultsEvent* this, ImageComparisonResult* imageComparisonResult);

static void ImageComparisonResultsEvent_initFields(ImageComparisonResultsEvent* this) {
    this->imageComparisonResult = nullptr;
}


void ImageComparisonResultsEvent_init(ImageComparisonResultsEvent* this, Any* anyType, ImageComparisonResult* imageComparisonInfo) {
        AllBinaryEventObject_init(&this->base, anyType);
        ImageComparisonResultsEvent_initFields(this);
        ImageComparisonResultsEvent_setImageComparisonResult(this, imageComparisonInfo);
}

ImageComparisonResultsEvent* ImageComparisonResultsEvent_new(Any* anyType, ImageComparisonResult* imageComparisonInfo) {
    ImageComparisonResultsEvent* this = calloc(1, sizeof(ImageComparisonResultsEvent));
    ImageComparisonResultsEvent_init(this, anyType, imageComparisonInfo);
    return this;
}


ImageComparisonResult* ImageComparisonResultsEvent_getImageComparisonResult(ImageComparisonResultsEvent* this) {
        return this->imageComparisonResult;
}


void ImageComparisonResultsEvent_setImageComparisonResult(ImageComparisonResultsEvent* this, ImageComparisonResult* imageComparisonResult) {
        this->imageComparisonResult = imageComparisonResult;
}

