#ifndef ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
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
// package org.allbinary.game.paint

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
typedef struct Anchor Anchor;
typedef struct CanvasStrings CanvasStrings;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct Paintable Paintable;
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"

//J2MEForJ2ME
typedef struct AboutPaintable AboutPaintable;
struct AboutPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    const char* ABOUT;
    const char** info;
    const char** developers;
    Paintable** paintableArray;
    MyFontProcessor* myFontProcessor;
    int32_t charHeight;
    int32_t aboutBeginWidth;
    int32_t* infoBeginWidth;
    int32_t* developersBeginWidth;
    int32_t anchor;
};


AboutPaintable* AboutPaintable_new(const char** info, const char** developers);

AboutPaintable* AboutPaintable_getInstance(const char** info, const char** developers);

void AboutPaintable_init(AboutPaintable* this, const char** info, const char** developers);

void AboutPaintable_updateMeasurement(AboutPaintable* this, Graphics* graphics);

Paintable** AboutPaintable_getPaintableArrayInstance(AboutPaintable* this);

void AboutPaintable_paint(AboutPaintable* this, Graphics* graphics);
#define AboutPaintable_new2 AboutPaintable_new
#define AboutPaintable_init2 AboutPaintable_init
#ifndef AboutPaintable_setBasicColorP
#define AboutPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef AboutPaintable_paintThreed
#define AboutPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AboutPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AboutPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_ABOUTPAINTABLE_H
