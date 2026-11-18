#ifndef ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
#define ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
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
// package org.allbinary.graphics.paint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Paintable Paintable;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Anchor Anchor;
typedef struct BasicColor BasicColor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"

typedef struct SimpleTextPaintable SimpleTextPaintable;
struct SimpleTextPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    const char* text;
    BasicColor* basicColor;
    int32_t topScoresWidth;
    int32_t fontHeight;
    int32_t anchor;
};


SimpleTextPaintable* SimpleTextPaintable_new(const char* text, BasicColor* basicColor);

void SimpleTextPaintable_init(SimpleTextPaintable* this, const char* text, BasicColor* basicColor);

void SimpleTextPaintable_updateMeasurement(SimpleTextPaintable* this, Graphics* graphics);

void SimpleTextPaintable_paint(SimpleTextPaintable* this, Graphics* graphics);

void SimpleTextPaintable_setBasicColorP(SimpleTextPaintable* this, BasicColor* basicColor);


void SimpleTextPaintable_setText(SimpleTextPaintable* this, const char* text);

const char* SimpleTextPaintable_getText(SimpleTextPaintable* this);
#define SimpleTextPaintable_new2 SimpleTextPaintable_new
#define SimpleTextPaintable_init2 SimpleTextPaintable_init
#ifndef SimpleTextPaintable_paintThreed
#define SimpleTextPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SimpleTextPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SimpleTextPaintable_register(void);


#endif // ORG_ALLBINARY_GRAPHICS_PAINT_SIMPLETEXTPAINTABLE_H
