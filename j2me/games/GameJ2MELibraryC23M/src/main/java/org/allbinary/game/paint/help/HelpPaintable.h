#ifndef ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H
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
// package org.allbinary.game.paint.help

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
typedef struct BasicColor BasicColor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct Paintable Paintable;
typedef struct NullUtil NullUtil;
typedef struct StringUtil StringUtil;
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

typedef struct HelpPaintable HelpPaintable;
struct HelpPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    int32_t anchor;
    const char* title;
    const char** inputInfo;
    BasicColor* basicColor;
    int32_t titleBeginWidth;
    int32_t* beginWidthArray;
    int32_t charHeight;
};


HelpPaintable* HelpPaintable_new(const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor);

void HelpPaintable_init(HelpPaintable* this, const char* title, BasicColor* backgroundBasicColor, BasicColor* basicColor);

void HelpPaintable_updateMeasurement(HelpPaintable* this, Graphics* graphics);

void HelpPaintable_setInputInfoP(HelpPaintable* this, const char** inputInfo);

void HelpPaintable_paint(HelpPaintable* this, Graphics* graphics);
#define HelpPaintable_new3 HelpPaintable_new
#define HelpPaintable_init3 HelpPaintable_init
#ifndef HelpPaintable_setBasicColorP
#define HelpPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef HelpPaintable_paintThreed
#define HelpPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HelpPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HelpPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_HELP_HELPPAINTABLE_H
