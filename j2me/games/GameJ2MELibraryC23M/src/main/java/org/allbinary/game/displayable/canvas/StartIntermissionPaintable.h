#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Anchor Anchor;
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct BasicColorSetUtil BasicColorSetUtil;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct FontDebugFactory FontDebugFactory;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct InitUpdatePaintable InitUpdatePaintable;
typedef struct NullUtil NullUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#if __has_include("javax/microedition/lcdui/Font.h")
#include "javax/microedition/lcdui/Font.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorSetUtil.h")
#include "org/allbinary/graphics/color/BasicColorSetUtil.h"
#endif
#if __has_include("org/allbinary/graphics/font/FontDebugFactory.h")
#include "org/allbinary/graphics/font/FontDebugFactory.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct StartIntermissionPaintable StartIntermissionPaintable;
struct StartIntermissionPaintable {
    InitUpdatePaintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    FontDebugFactory* fontDebugFactory;
    BasicColorSetUtil* basicSetColorUtil;
    AllBinaryGameCanvas* gameCanvas;
    const char** stringArray;
    int32_t fontSize;
    Font* font;
    int32_t* lastWidth;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    BasicColor* basicColor;
    int32_t color;
    int32_t* lineYOffsetArray;
    bool hasChanged;
    int32_t anchor;
    int32_t fontHeightP;
    const char* BEGIN_LEVEL;
    const char* EMPTY_STRING;
};


StartIntermissionPaintable* StartIntermissionPaintable_new(AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font);

void StartIntermissionPaintable_init(StartIntermissionPaintable* this, AllBinaryGameCanvas* gameCanvas, const char** stringArray, BasicColor* basicColor, Font* font);

void StartIntermissionPaintable_updateMeasurement(StartIntermissionPaintable* this, Graphics* graphics);

void StartIntermissionPaintable_paint(StartIntermissionPaintable* this, Graphics* graphics);

void StartIntermissionPaintable_update(StartIntermissionPaintable* this);

void StartIntermissionPaintable_setBasicColorP(StartIntermissionPaintable* this, BasicColor* basicColor);

BasicColor* StartIntermissionPaintable_getBasicColorP(StartIntermissionPaintable* this);
#define StartIntermissionPaintable_new4 StartIntermissionPaintable_new
#define StartIntermissionPaintable_init4 StartIntermissionPaintable_init
#ifndef StartIntermissionPaintable_paintThreed
#define StartIntermissionPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StartIntermissionPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StartIntermissionPaintable_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_STARTINTERMISSIONPAINTABLE_H
