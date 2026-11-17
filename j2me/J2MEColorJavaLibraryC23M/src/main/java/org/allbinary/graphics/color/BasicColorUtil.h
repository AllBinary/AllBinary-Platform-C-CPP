#ifndef ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H
#define ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H
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
typedef struct BasicColor BasicColor;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

typedef struct BasicColorUtil BasicColorUtil;
struct BasicColorUtil {
    BasicColor** ZERO_ARRAY;
    int32_t ALPHA;
    bool isAlpha;
    bool ffOpaque;
};


BasicColorUtil* BasicColorUtil_new(void);
void BasicColorUtil_init(BasicColorUtil* this);

BasicColorUtil* BasicColorUtil_getInstance(void);

int32_t BasicColorUtil_getRGB(BasicColorUtil* this, int32_t red, int32_t green, int32_t blue);

int32_t BasicColorUtil_getARGB(BasicColorUtil* this, int32_t alphaValue, int32_t r, int32_t g, int32_t b);

int32_t BasicColorUtil_get(BasicColorUtil* this, int32_t alphaValue, int32_t color);

int32_t BasicColorUtil_invert(BasicColorUtil* this, int32_t color);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicColorUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicColorUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_COLOR_BASICCOLORUTIL_H
