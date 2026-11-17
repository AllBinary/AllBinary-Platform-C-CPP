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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct ImageComparisonSearchResultsEvent ImageComparisonSearchResultsEvent;
struct ImageComparisonSearchResultsEvent {
    AllBinaryEventObject base;
    ImageComparisonSearch* imageComparisonSearch;
};


ImageComparisonSearchResultsEvent* ImageComparisonSearchResultsEvent_new(Any* anyType, ImageComparisonSearch* imageComparisonSearch);

void ImageComparisonSearchResultsEvent_init(ImageComparisonSearchResultsEvent* this, Any* anyType, ImageComparisonSearch* imageComparisonSearch);
ImageComparisonSearch* ImageComparisonSearchResultsEvent_getImageComparisonSearch(ImageComparisonSearchResultsEvent* this);
static void ImageComparisonSearchResultsEvent_setImageComparisonSearch(ImageComparisonSearchResultsEvent* this, ImageComparisonSearch* imageComparisonSearch);

static void ImageComparisonSearchResultsEvent_initFields(ImageComparisonSearchResultsEvent* this) {
    this->imageComparisonSearch = nullptr;
}


void ImageComparisonSearchResultsEvent_init(ImageComparisonSearchResultsEvent* this, Any* anyType, ImageComparisonSearch* imageComparisonSearch) {
        AllBinaryEventObject_init(&this->base, anyType);
        ImageComparisonSearchResultsEvent_initFields(this);
        ImageComparisonSearchResultsEvent_setImageComparisonSearch(this, imageComparisonSearch);
}

ImageComparisonSearchResultsEvent* ImageComparisonSearchResultsEvent_new(Any* anyType, ImageComparisonSearch* imageComparisonSearch) {
    ImageComparisonSearchResultsEvent* this = calloc(1, sizeof(ImageComparisonSearchResultsEvent));
    ImageComparisonSearchResultsEvent_init(this, anyType, imageComparisonSearch);
    return this;
}


ImageComparisonSearch* ImageComparisonSearchResultsEvent_getImageComparisonSearch(ImageComparisonSearchResultsEvent* this) {
        return this->imageComparisonSearch;
}


static void ImageComparisonSearchResultsEvent_setImageComparisonSearch(ImageComparisonSearchResultsEvent* this, ImageComparisonSearch* imageComparisonSearch) {
        this->imageComparisonSearch = imageComparisonSearch;
}

