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
// package org.allbinary.media.image.analysis

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ImageColorRangeResults ImageColorRangeResults;
struct ImageColorRangeResults {
    ColorRangeInterface* colorRangeInterface;
    int64_t matchingPixelsChecked;
    int64_t totalPixelsChecked;
};


ImageColorRangeResults* ImageColorRangeResults_new(void);

void ImageColorRangeResults_init(ImageColorRangeResults* this);
ColorRangeInterface* ImageColorRangeResults_getColorRangeInterface(ImageColorRangeResults* this);
void ImageColorRangeResults_setColorRangeInterface(ImageColorRangeResults* this, ColorRangeInterface* colorRangeInterface);
int64_t ImageColorRangeResults_getMatchingPixelsChecked(ImageColorRangeResults* this);
void ImageColorRangeResults_setMatchingPixelsChecked(ImageColorRangeResults* this, int64_t matchingPixelsChecked);
void ImageColorRangeResults_addMatchingPixelsChecked(ImageColorRangeResults* this);
int64_t ImageColorRangeResults_getTotalPixelsChecked(ImageColorRangeResults* this);
void ImageColorRangeResults_addTotalPixelsChecked(ImageColorRangeResults* this);
void ImageColorRangeResults_setTotalPixelsChecked(ImageColorRangeResults* this, int64_t totalPixelsChecked);
float ImageColorRangeResults_getPercent(ImageColorRangeResults* this);

static void ImageColorRangeResults_initFields(ImageColorRangeResults* this) {
    this->colorRangeInterface = nullptr;
    this->matchingPixelsChecked = 0;
    this->totalPixelsChecked = 0;
}


void ImageColorRangeResults_init(ImageColorRangeResults* this) {
    ImageColorRangeResults_initFields(this);
        ImageColorRangeResults_setColorRangeInterface(this, ((ColorRangeInterface*) ColorRange_new()));
}

ImageColorRangeResults* ImageColorRangeResults_new(void) {
    ImageColorRangeResults* this = calloc(1, sizeof(ImageColorRangeResults));
    ImageColorRangeResults_init(this);
    return this;
}


ColorRangeInterface* ImageColorRangeResults_getColorRangeInterface(ImageColorRangeResults* this) {
        return this->colorRangeInterface;
}


void ImageColorRangeResults_setColorRangeInterface(ImageColorRangeResults* this, ColorRangeInterface* colorRangeInterface) {
        this->colorRangeInterface = colorRangeInterface;
}


int64_t ImageColorRangeResults_getMatchingPixelsChecked(ImageColorRangeResults* this) {
        return this->matchingPixelsChecked;
}


void ImageColorRangeResults_setMatchingPixelsChecked(ImageColorRangeResults* this, int64_t matchingPixelsChecked) {
        this->matchingPixelsChecked = matchingPixelsChecked;
}


void ImageColorRangeResults_addMatchingPixelsChecked(ImageColorRangeResults* this) {
        this->matchingPixelsChecked++;
}


int64_t ImageColorRangeResults_getTotalPixelsChecked(ImageColorRangeResults* this) {
        return this->totalPixelsChecked;
}


void ImageColorRangeResults_addTotalPixelsChecked(ImageColorRangeResults* this) {
        this->totalPixelsChecked++;
}


void ImageColorRangeResults_setTotalPixelsChecked(ImageColorRangeResults* this, int64_t totalPixelsChecked) {
        this->totalPixelsChecked = totalPixelsChecked;
}


float ImageColorRangeResults_getPercent(ImageColorRangeResults* this) {
        return (((float) ImageColorRangeResults_getMatchingPixelsChecked(this)) / ((float) ImageColorRangeResults_getTotalPixelsChecked(this)));
}

