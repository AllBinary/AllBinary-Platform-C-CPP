#ifndef ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H
#define ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H
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
typedef struct DrawStringUtil DrawStringUtil;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/graphics/draw/DrawStringUtil.h")
#include "org/allbinary/graphics/draw/DrawStringUtil.h"
#endif

typedef struct CanvasDrawLineString CanvasDrawLineString;
struct CanvasDrawLineString {
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DrawStringUtil* drawStringUtil;
    MyFontProcessor* myFontProcessor;
    int32_t x;
    int32_t y;
    int32_t fontHeight;
};

extern CanvasDrawLineString* CanvasDrawLineString_NULL_CANVAS_DRAW_LINE_STRING;

CanvasDrawLineString* CanvasDrawLineString_new(int32_t x, int32_t y);

void CanvasDrawLineString_init(CanvasDrawLineString* this, int32_t x, int32_t y);

void CanvasDrawLineString_updateMeasurement(CanvasDrawLineString* this, Graphics* graphics);

void CanvasDrawLineString_paint(CanvasDrawLineString* this, Graphics* graphics, const char* string, int32_t line);
#define CanvasDrawLineString_new2 CanvasDrawLineString_new
#define CanvasDrawLineString_init2 CanvasDrawLineString_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CanvasDrawLineString_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CanvasDrawLineString_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_DRAW_CANVASDRAWLINESTRING_H
