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

typedef struct ImageAnalysisResults ImageAnalysisResults;
struct ImageAnalysisResults {
    ImageColorRangeResults* imageColorRangeResults;
    ImageColorResults* imageColorResults;
    float averageAmbientLevel;
};


ImageAnalysisResults* ImageAnalysisResults_new(void);

void ImageAnalysisResults_init(ImageAnalysisResults* this);
ImageColorRangeResults* ImageAnalysisResults_getImageColorRangeResults(ImageAnalysisResults* this);
void ImageAnalysisResults_setImageColorRangeResults(ImageAnalysisResults* this, ImageColorRangeResults* imageColorRangeResults);
float ImageAnalysisResults_getAverageAmbientLevel(ImageAnalysisResults* this);
void ImageAnalysisResults_setAverageAmbientLevel(ImageAnalysisResults* this, float averageAmbientLevel);
ImageColorResults* ImageAnalysisResults_getImageColorResults(ImageAnalysisResults* this);
void ImageAnalysisResults_setImageColorResults(ImageAnalysisResults* this, ImageColorResults* imageColorResults);

static void ImageAnalysisResults_initFields(ImageAnalysisResults* this) {
    
    
    this->averageAmbientLevel = 0.0f;
}


void ImageAnalysisResults_init(ImageAnalysisResults* this) {
    ImageAnalysisResults_initFields(this);
        this->imageColorRangeResults = ImageColorRangeResults_new();
        this->imageColorResults = ImageColorResults_new();
}

ImageAnalysisResults* ImageAnalysisResults_new(void) {
    ImageAnalysisResults* this = calloc(1, sizeof(ImageAnalysisResults));
    ImageAnalysisResults_init(this);
    return this;
}


ImageColorRangeResults* ImageAnalysisResults_getImageColorRangeResults(ImageAnalysisResults* this) {
        return this->imageColorRangeResults;
}


void ImageAnalysisResults_setImageColorRangeResults(ImageAnalysisResults* this, ImageColorRangeResults* imageColorRangeResults) {
        this->imageColorRangeResults = imageColorRangeResults;
}


float ImageAnalysisResults_getAverageAmbientLevel(ImageAnalysisResults* this) {
        return this->averageAmbientLevel;
}


void ImageAnalysisResults_setAverageAmbientLevel(ImageAnalysisResults* this, float averageAmbientLevel) {
        this->averageAmbientLevel = averageAmbientLevel;
}


ImageColorResults* ImageAnalysisResults_getImageColorResults(ImageAnalysisResults* this) {
        return this->imageColorResults;
}


void ImageAnalysisResults_setImageColorResults(ImageAnalysisResults* this, ImageColorResults* imageColorResults) {
        this->imageColorResults = imageColorResults;
}

