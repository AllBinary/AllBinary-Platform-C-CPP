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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct ColorAverage ColorAverage;
struct ColorAverage {
    float avgRed;
    float avgGreen;
    float avgBlue;
};


ColorAverage* ColorAverage_new(void);

void ColorAverage_init(ColorAverage* this);
const char* ColorAverage_toString(ColorAverage* this);
float ColorAverage_getAvgRed(ColorAverage* this);
void ColorAverage_setAvgRed(ColorAverage* this, float avgRed);
float ColorAverage_getAvgGreen(ColorAverage* this);
void ColorAverage_setAvgGreen(ColorAverage* this, float avgGreen);
float ColorAverage_getAvgBlue(ColorAverage* this);
void ColorAverage_setAvgBlue(ColorAverage* this, float avgBlue);

static void ColorAverage_initFields(ColorAverage* this) {
    this->avgRed = 0.0f;
    this->avgGreen = 0.0f;
    this->avgBlue = 0.0f;
}


void ColorAverage_init(ColorAverage* this) {
    ColorAverage_initFields(this);
        ColorAverage_setAvgRed(this, 0);
        ColorAverage_setAvgGreen(this, 0);
        ColorAverage_setAvgBlue(this, 0);
}

ColorAverage* ColorAverage_new(void) {
    ColorAverage* this = calloc(1, sizeof(ColorAverage));
    ColorAverage_init(this);
    return this;
}


const char* ColorAverage_toString(ColorAverage* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "getAvgRed(): ");
        StringMaker_appendfloat(stringBuffer, ColorAverage_getAvgRed(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getAvgRed(): ");
        StringMaker_appendfloat(stringBuffer, ColorAverage_getAvgRed(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getAvgGreen(): ");
        StringMaker_appendfloat(stringBuffer, ColorAverage_getAvgGreen(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        return StringMaker_toString(stringBuffer);
}


float ColorAverage_getAvgRed(ColorAverage* this) {
        return this->avgRed;
}


void ColorAverage_setAvgRed(ColorAverage* this, float avgRed) {
        this->avgRed = avgRed;
}


float ColorAverage_getAvgGreen(ColorAverage* this) {
        return this->avgGreen;
}


void ColorAverage_setAvgGreen(ColorAverage* this, float avgGreen) {
        this->avgGreen = avgGreen;
}


float ColorAverage_getAvgBlue(ColorAverage* this) {
        return this->avgBlue;
}


void ColorAverage_setAvgBlue(ColorAverage* this, float avgBlue) {
        this->avgBlue = avgBlue;
}

