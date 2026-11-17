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
#include "org/allbinary/media/image/analysis/ColorRangeInterface.h"

typedef struct ColorRange ColorRange;
struct ColorRange {
    ColorRangeInterface ColorRangeInterface_interface;
    int32_t minRed;
    int32_t maxRed;
    int32_t minGreen;
    int32_t maxGreen;
    int32_t minBlue;
    int32_t maxBlue;
};


ColorRange* ColorRange_new(void);

void ColorRange_init(ColorRange* this);
int32_t ColorRange_getMinRed(ColorRange* this);
void ColorRange_setMinRed(ColorRange* this, int32_t minRed);
int32_t ColorRange_getMaxRed(ColorRange* this);
void ColorRange_setMaxRed(ColorRange* this, int32_t maxRed);
int32_t ColorRange_getMinGreen(ColorRange* this);
void ColorRange_setMinGreen(ColorRange* this, int32_t minGreen);
int32_t ColorRange_getMaxGreen(ColorRange* this);
void ColorRange_setMaxGreen(ColorRange* this, int32_t maxGreen);
int32_t ColorRange_getMinBlue(ColorRange* this);
void ColorRange_setMinBlue(ColorRange* this, int32_t minBlue);
int32_t ColorRange_getMaxBlue(ColorRange* this);
void ColorRange_setMaxBlue(ColorRange* this, int32_t maxBlue);
bool ColorRange_isInRange(ColorRange* this, Color* color);
const char* ColorRange_toString(ColorRange* this);

static void ColorRange_initFields(ColorRange* this) {
    
    
    
    
    
    
}


void ColorRange_init(ColorRange* this) {
    ColorRange_initFields(this);
        this->minRed = 0;
        this->maxRed = 0;
        this->minGreen = 0;
        this->maxGreen = 0;
        this->minBlue = 0;
        this->maxBlue = 0;
}

ColorRange* ColorRange_new(void) {
    ColorRange* this = calloc(1, sizeof(ColorRange));
    ColorRange_init(this);
    return this;
}


int32_t ColorRange_getMinRed(ColorRange* this) {
        return this->minRed;
}


void ColorRange_setMinRed(ColorRange* this, int32_t minRed) {
        this->minRed = minRed;
}


int32_t ColorRange_getMaxRed(ColorRange* this) {
        return this->maxRed;
}


void ColorRange_setMaxRed(ColorRange* this, int32_t maxRed) {
        this->maxRed = maxRed;
}


int32_t ColorRange_getMinGreen(ColorRange* this) {
        return this->minGreen;
}


void ColorRange_setMinGreen(ColorRange* this, int32_t minGreen) {
        this->minGreen = minGreen;
}


int32_t ColorRange_getMaxGreen(ColorRange* this) {
        return this->maxGreen;
}


void ColorRange_setMaxGreen(ColorRange* this, int32_t maxGreen) {
        this->maxGreen = maxGreen;
}


int32_t ColorRange_getMinBlue(ColorRange* this) {
        return this->minBlue;
}


void ColorRange_setMinBlue(ColorRange* this, int32_t minBlue) {
        this->minBlue = minBlue;
}


int32_t ColorRange_getMaxBlue(ColorRange* this) {
        return this->maxBlue;
}


void ColorRange_setMaxBlue(ColorRange* this, int32_t maxBlue) {
        this->maxBlue = maxBlue;
}


bool ColorRange_isInRange(ColorRange* this, Color* color) {
        if (Color_getRed(color) >= ColorRange_getMinRed(this) && Color_getRed(color) <= ColorRange_getMaxRed(this) && Color_getGreen(color) >= ColorRange_getMinGreen(this) && Color_getGreen(color) <= ColorRange_getMaxGreen(this) && Color_getBlue(color) >= ColorRange_getMinBlue(this) && Color_getBlue(color) <= ColorRange_getMaxBlue(this)) {
            return true;
        } else {
            return false;
        }
}


const char* ColorRange_toString(ColorRange* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "getMinRed(): ");
        StringMaker_appendint(stringBuffer, ColorRange_getMinRed(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getMaxRed(): ");
        StringMaker_appendint(stringBuffer, ColorRange_getMaxRed(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getMinGreen(): ");
        StringMaker_appendint(stringBuffer, ColorRange_getMinGreen(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getMaxGreen(): ");
        StringMaker_appendint(stringBuffer, ColorRange_getMaxGreen(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getMinBlue(): ");
        StringMaker_appendint(stringBuffer, ColorRange_getMinGreen(this));
        StringMaker_append(stringBuffer, CommonSeps_getInstance()->NEW_LINE);
        StringMaker_append(stringBuffer, "getMaxBlue(): ");
        StringMaker_appendint(stringBuffer, ColorRange_getMaxBlue(this));
        return StringMaker_toString(stringBuffer);
}

