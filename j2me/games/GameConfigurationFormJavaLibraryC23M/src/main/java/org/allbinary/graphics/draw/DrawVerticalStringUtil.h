#ifndef ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H
#define ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H
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
// package org.allbinary.graphics.draw

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct AndroidUtil AndroidUtil;
typedef struct J2MEUtil J2MEUtil;
typedef struct Anchor Anchor;
typedef struct OpenGLFeatureUtil OpenGLFeatureUtil;
typedef struct NullUtil NullUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;

typedef struct DrawVerticalStringUtil DrawVerticalStringUtil;
struct DrawVerticalStringUtil {
    const char* EMPTY_STRING;
    int32_t anchor;
    int32_t charHeight;
    int32_t offsetY;
    int32_t* offsetXArray;
};


DrawVerticalStringUtil* DrawVerticalStringUtil_new(void);
void DrawVerticalStringUtil_init(DrawVerticalStringUtil* this);

DrawVerticalStringUtil* DrawVerticalStringUtil_getInstance(void);

void DrawVerticalStringUtil_updateMeasurement(DrawVerticalStringUtil* this, Graphics* graphics, const char* string);

void DrawVerticalStringUtil_paintVerticle(DrawVerticalStringUtil* this, Graphics* graphics, const char* string, int32_t x, int32_t y, int32_t anchor);

void DrawVerticalStringUtil_drawCenterString(DrawVerticalStringUtil* this, Graphics* graphics, const char* string, int32_t offset, int32_t length, int32_t x, int32_t y);

void DrawVerticalStringUtil_drawCenterStrings(DrawVerticalStringUtil* this, Graphics* graphics, const char** stringArray, int32_t maxWidth, int32_t x, int32_t y);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DrawVerticalStringUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DrawVerticalStringUtil_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DRAW_DRAWVERTICALSTRINGUTIL_H
