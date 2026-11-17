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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"

typedef struct ImageComparisonResultFrameCacheable ImageComparisonResultFrameCacheable;
struct ImageComparisonResultFrameCacheable {
    CacheableInterface CacheableInterface_interface;
    int64_t frame;
    ImageComparisonResult* imageComparisonResult;
};


ImageComparisonResultFrameCacheable* ImageComparisonResultFrameCacheable_new(ImageComparisonResult* imageComparisonResult, int64_t frame);

void ImageComparisonResultFrameCacheable_init(ImageComparisonResultFrameCacheable* this, ImageComparisonResult* imageComparisonResult, int64_t frame);
Any* ImageComparisonResultFrameCacheable_getKey(ImageComparisonResultFrameCacheable* this);
int64_t ImageComparisonResultFrameCacheable_getFrame(ImageComparisonResultFrameCacheable* this);
void ImageComparisonResultFrameCacheable_setFrame(ImageComparisonResultFrameCacheable* this, int64_t frame);
ImageComparisonResult* ImageComparisonResultFrameCacheable_getImageComparisonResult(ImageComparisonResultFrameCacheable* this);
void ImageComparisonResultFrameCacheable_setImageComparisonResult(ImageComparisonResultFrameCacheable* this, ImageComparisonResult* imageComparisonResult);
const char* ImageComparisonResultFrameCacheable_toString(ImageComparisonResultFrameCacheable* this);

static void ImageComparisonResultFrameCacheable_initFields(ImageComparisonResultFrameCacheable* this) {
    
    this->imageComparisonResult = nullptr;
}


void ImageComparisonResultFrameCacheable_init(ImageComparisonResultFrameCacheable* this, ImageComparisonResult* imageComparisonResult, int64_t frame) {
    ImageComparisonResultFrameCacheable_initFields(this);
        ImageComparisonResultFrameCacheable_setImageComparisonResult(this, imageComparisonResult);
        this->frame = frame;
}

ImageComparisonResultFrameCacheable* ImageComparisonResultFrameCacheable_new(ImageComparisonResult* imageComparisonResult, int64_t frame) {
    ImageComparisonResultFrameCacheable* this = calloc(1, sizeof(ImageComparisonResultFrameCacheable));
    ImageComparisonResultFrameCacheable_init(this, imageComparisonResult, frame);
    return this;
}


Any* ImageComparisonResultFrameCacheable_getKey(ImageComparisonResultFrameCacheable* this) {
        return this->frame;
}


int64_t ImageComparisonResultFrameCacheable_getFrame(ImageComparisonResultFrameCacheable* this) {
        return this->frame;
}


void ImageComparisonResultFrameCacheable_setFrame(ImageComparisonResultFrameCacheable* this, int64_t frame) {
        this->frame = frame;
}


ImageComparisonResult* ImageComparisonResultFrameCacheable_getImageComparisonResult(ImageComparisonResultFrameCacheable* this) {
        return this->imageComparisonResult;
}


void ImageComparisonResultFrameCacheable_setImageComparisonResult(ImageComparisonResultFrameCacheable* this, ImageComparisonResult* imageComparisonResult) {
        this->imageComparisonResult = imageComparisonResult;
}


const char* ImageComparisonResultFrameCacheable_toString(ImageComparisonResultFrameCacheable* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, java_class_of(this));
        StringMaker_append(stringBuffer, " Frame: ");
        StringMaker_appendlong(stringBuffer, ImageComparisonResultFrameCacheable_getFrame(this));
        return StringMaker_toString(stringBuffer);
}

