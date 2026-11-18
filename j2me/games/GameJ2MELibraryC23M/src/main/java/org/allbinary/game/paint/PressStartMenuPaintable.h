#ifndef ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H
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
typedef struct AppletUtil AppletUtil;
typedef struct Anchor Anchor;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct Paintable Paintable;
typedef struct TouchScreenFactory TouchScreenFactory;
typedef struct StringUtil StringUtil;
typedef struct TimeDelayHelper TimeDelayHelper;
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/Paintable.h"
#if __has_include("org/allbinary/time/TimeDelayHelper.h")
#include "org/allbinary/time/TimeDelayHelper.h"
#endif

typedef struct PressStartMenuPaintable PressStartMenuPaintable;
struct PressStartMenuPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfo;
    const char* PRESS_START;
    const char* KEY_START;
    const char* MENU_START;
    MyFontProcessor* myFontProcessor;
    const char* startString;
    TimeDelayHelper* timeDelayHelper;
    bool flash;
    int32_t anchor;
    int32_t beginWidth;
    int32_t line;
};


PressStartMenuPaintable* PressStartMenuPaintable_new(void);

void PressStartMenuPaintable_init(PressStartMenuPaintable* this);

void PressStartMenuPaintable_updateMeasurement(PressStartMenuPaintable* this, Graphics* graphics);

void PressStartMenuPaintable_paint(PressStartMenuPaintable* this, Graphics* graphics);


#define PressStartMenuPaintable_new0 PressStartMenuPaintable_new
#define PressStartMenuPaintable_init0 PressStartMenuPaintable_init
#ifndef PressStartMenuPaintable_setBasicColorP
#define PressStartMenuPaintable_setBasicColorP Paintable_setBasicColorP
#endif
#ifndef PressStartMenuPaintable_paintThreed
#define PressStartMenuPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PressStartMenuPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PressStartMenuPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PAINT_PRESSSTARTMENUPAINTABLE_H
