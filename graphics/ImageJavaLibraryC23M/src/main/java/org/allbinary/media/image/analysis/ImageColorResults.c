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

typedef struct ImageColorResults ImageColorResults;
struct ImageColorResults {
    ColorRange* colorRange;
    ColorAverage* colorAverage;
};


ImageColorResults* ImageColorResults_new(void);

void ImageColorResults_init(ImageColorResults* this);
ColorRange* ImageColorResults_getColorRange(ImageColorResults* this);
void ImageColorResults_setColorRange(ImageColorResults* this, ColorRange* colorRange);
ColorAverage* ImageColorResults_getColorAverage(ImageColorResults* this);
void ImageColorResults_setColorAverage(ImageColorResults* this, ColorAverage* colorAverage);

static void ImageColorResults_initFields(ImageColorResults* this) {
    this->colorRange = nullptr;
    this->colorAverage = nullptr;
}


void ImageColorResults_init(ImageColorResults* this) {
    ImageColorResults_initFields(this);
        ImageColorResults_setColorRange(this, ColorRange_new());
        JAVA_CALL(ImageColorResults_getColorRange(this), setMaxRed, -1);
        JAVA_CALL(ImageColorResults_getColorRange(this), setMaxGreen, -1);
        JAVA_CALL(ImageColorResults_getColorRange(this), setMaxBlue, -1);
        JAVA_CALL(ImageColorResults_getColorRange(this), setMinRed, 256);
        JAVA_CALL(ImageColorResults_getColorRange(this), setMinGreen, 256);
        JAVA_CALL(ImageColorResults_getColorRange(this), setMinBlue, 256);
        ImageColorResults_setColorAverage(this, ColorAverage_new());
}

ImageColorResults* ImageColorResults_new(void) {
    ImageColorResults* this = calloc(1, sizeof(ImageColorResults));
    ImageColorResults_init(this);
    return this;
}


ColorRange* ImageColorResults_getColorRange(ImageColorResults* this) {
        return this->colorRange;
}


void ImageColorResults_setColorRange(ImageColorResults* this, ColorRange* colorRange) {
        this->colorRange = colorRange;
}


ColorAverage* ImageColorResults_getColorAverage(ImageColorResults* this) {
        return this->colorAverage;
}


void ImageColorResults_setColorAverage(ImageColorResults* this, ColorAverage* colorAverage) {
        this->colorAverage = colorAverage;
}

