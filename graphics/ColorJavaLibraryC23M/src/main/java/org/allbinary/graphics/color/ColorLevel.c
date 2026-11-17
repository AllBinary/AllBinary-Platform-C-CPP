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
// package org.allbinary.graphics.color

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ColorLevel ColorLevel;
struct ColorLevel {
    char unused;
};

constexpr int32_t ColorLevel_COLOR_MASK = 0x00FFFFFF;
constexpr int32_t ColorLevel_MIN = 0x44;
constexpr int32_t ColorLevel_AVG = 0x77;
constexpr int32_t ColorLevel_LIGHT = 0xAA;
constexpr int32_t ColorLevel_HIGH = 0xEE;

ColorLevel* ColorLevel_new(void);

void ColorLevel_init(ColorLevel* this);


void ColorLevel_init(ColorLevel* this) {
}

ColorLevel* ColorLevel_new(void) {
    ColorLevel* this = calloc(1, sizeof(ColorLevel));
    ColorLevel_init(this);
    return this;
}

