#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H
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
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct GameStatisticsFactory GameStatisticsFactory;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct InitUpdatePaintable InitUpdatePaintable;
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/InitUpdatePaintable.h"

typedef struct GamePerformanceInitUpdatePaintable GamePerformanceInitUpdatePaintable;
struct GamePerformanceInitUpdatePaintable {
    InitUpdatePaintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    int32_t halfHeight;
    int32_t* yArray;
    MyFontProcessor* myFontProcessor;
    uint16_t** baseRefreshHelperCharArray;
    int32_t defaultStringWidth;
    int32_t RED;
};


GamePerformanceInitUpdatePaintable* GamePerformanceInitUpdatePaintable_new(void);
void GamePerformanceInitUpdatePaintable_init(GamePerformanceInitUpdatePaintable* this);

void GamePerformanceInitUpdatePaintable_updateMeasurement(GamePerformanceInitUpdatePaintable* this, Graphics* graphics);

void GamePerformanceInitUpdatePaintable_initMethod(GamePerformanceInitUpdatePaintable* this);

void GamePerformanceInitUpdatePaintable_update(GamePerformanceInitUpdatePaintable* this);

void GamePerformanceInitUpdatePaintable_paint(GamePerformanceInitUpdatePaintable* this, Graphics* graphics);
#ifndef GamePerformanceInitUpdatePaintable_setBasicColorP
#define GamePerformanceInitUpdatePaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef GamePerformanceInitUpdatePaintable_paintThreed
#define GamePerformanceInitUpdatePaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GamePerformanceInitUpdatePaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GamePerformanceInitUpdatePaintable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEPERFORMANCEINITUPDATEPAINTABLE_H
