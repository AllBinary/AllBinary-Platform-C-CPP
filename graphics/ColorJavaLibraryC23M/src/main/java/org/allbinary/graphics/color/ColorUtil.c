/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct ColorUtil ColorUtil;
struct ColorUtil {
    char unused;
};

static ColorUtil* ColorUtil_instance;

ColorUtil* ColorUtil_new(void);
ColorUtil* ColorUtil_getInstance(void);
bool ColorUtil_isGreyishOrWhiteLike(ColorUtil* this, Color* color);
bool ColorUtil_isDark(ColorUtil* this, Color* color);

// Static fields with runtime initializers: call this once at startup
void ColorUtil_staticInit(void) {
    ColorUtil_instance = ColorUtil_new();
}

void ColorUtil_init(ColorUtil* this) {
}

ColorUtil* ColorUtil_new(void) {
    ColorUtil* this = calloc(1, sizeof(ColorUtil));
    ColorUtil_init(this);
    return this;
}


ColorUtil* ColorUtil_getInstance(void) {
        return ColorUtil_instance;
}


bool ColorUtil_isGreyishOrWhiteLike(ColorUtil* this, Color* color) {
        if (((Color_getRed(color) - Color_getGreen(color)) < 0 ? -(Color_getRed(color) - Color_getGreen(color)) : (Color_getRed(color) - Color_getGreen(color))) > 20 || ((Color_getRed(color) - Color_getBlue(color)) < 0 ? -(Color_getRed(color) - Color_getBlue(color)) : (Color_getRed(color) - Color_getBlue(color))) > 20 || ((Color_getGreen(color) - Color_getBlue(color)) < 0 ? -(Color_getGreen(color) - Color_getBlue(color)) : (Color_getGreen(color) - Color_getBlue(color))) > 20) {
            return false;
        }
        return true;
}


bool ColorUtil_isDark(ColorUtil* this, Color* color) {
        if (Color_getRed(color) < 0x77 && Color_getRed(color) < 0x77 && Color_getRed(color) < 0x77) {
            return true;
        }
        return false;
}

