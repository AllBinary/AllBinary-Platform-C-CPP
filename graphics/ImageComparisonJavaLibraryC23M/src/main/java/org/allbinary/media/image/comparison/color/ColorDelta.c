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
// package org.allbinary.media.image.comparison.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct ColorDelta ColorDelta;
struct ColorDelta {
    CacheableInterface CacheableInterface_interface;
    int32_t rgb1;
    int32_t rgb2;
    Any* key;
};


ColorDelta* ColorDelta_new(int32_t rgb1, int32_t rgb2);

void ColorDelta_init(ColorDelta* this, int32_t rgb1, int32_t rgb2);
Any* ColorDelta_getKey(ColorDelta* this);
Any* ColorDelta_getKey(int32_t rgb1, int32_t rgb2);
int32_t ColorDelta_getRgb1(ColorDelta* this);
void ColorDelta_setRgb1(ColorDelta* this, int32_t rgb1);
int32_t ColorDelta_getRgb2(ColorDelta* this);
void ColorDelta_setRgb2(ColorDelta* this, int32_t rgb2);
const char* ColorDelta_toString(ColorDelta* this);

static void ColorDelta_initFields(ColorDelta* this) {
    this->rgb1 = 0;
    this->rgb2 = 0;
    
}


void ColorDelta_init(ColorDelta* this, int32_t rgb1, int32_t rgb2) {
    ColorDelta_initFields(this);
        ColorDelta_setRgb1(this, rgb1);
        ColorDelta_setRgb2(this, rgb2);
        this->key = ColorDelta_getKey(rgb1, rgb2);
}

ColorDelta* ColorDelta_new(int32_t rgb1, int32_t rgb2) {
    ColorDelta* this = calloc(1, sizeof(ColorDelta));
    ColorDelta_init(this, rgb1, rgb2);
    return this;
}


Any* ColorDelta_getKey(ColorDelta* this) {
        return this->key;
}


// Java overloaded method: C needs a different name
Any* ColorDelta_getKey(int32_t rgb1, int32_t rgb2) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), java_string_of(rgb1)), append, CommonSeps_getInstance()->UNDERSCORE), append, java_string_of(rgb2)), toString);
}


int32_t ColorDelta_getRgb1(ColorDelta* this) {
        return this->rgb1;
}


void ColorDelta_setRgb1(ColorDelta* this, int32_t rgb1) {
        this->rgb1 = rgb1;
}


int32_t ColorDelta_getRgb2(ColorDelta* this) {
        return this->rgb2;
}


void ColorDelta_setRgb2(ColorDelta* this, int32_t rgb2) {
        this->rgb2 = rgb2;
}


const char* ColorDelta_toString(ColorDelta* this) {
        return JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "ColorDelta: "), append, StringUtil_toString(StringUtil_getInstance(), ColorDelta_getKey(this))), append, " RGB1: "), appendint, ColorDelta_getRgb1(this)), append, " RGB2: "), appendint, ColorDelta_getRgb2(this)), toString);
}

