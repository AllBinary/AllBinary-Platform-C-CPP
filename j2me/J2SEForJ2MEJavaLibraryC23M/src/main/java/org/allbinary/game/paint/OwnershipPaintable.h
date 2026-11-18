#ifndef ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H
#define ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H
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
typedef struct BasicColor BasicColor;
typedef struct BasicColorFactory BasicColorFactory;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct Paintable Paintable;
typedef struct LogUtil LogUtil;
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
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

//J2SEForJ2ME
typedef struct OwnershipPaintable OwnershipPaintable;
struct OwnershipPaintable {
    Paintable base;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    LogUtil* logUtil;
    DisplayInfoSingleton* displayInfo;
    MyFontProcessor* myFontProcessor;
    const char* COPYRIGHT;
    BasicColor* basicColor;
    int32_t color;
    int32_t anchor;
    int32_t COPYRIGHT_Y;
    int32_t beginWidth;
};


OwnershipPaintable* OwnershipPaintable_new(void);

OwnershipPaintable* OwnershipPaintable_getInstance(void);

void OwnershipPaintable_init(OwnershipPaintable* this);

void OwnershipPaintable_updateMeasurement(OwnershipPaintable* this, Graphics* graphics);

void OwnershipPaintable_setBasicColorP(OwnershipPaintable* this, BasicColor* basicColor);

BasicColor* OwnershipPaintable_getBasicColorP(OwnershipPaintable* this);

void OwnershipPaintable_paint(OwnershipPaintable* this, Graphics* graphics);
#define OwnershipPaintable_new0 OwnershipPaintable_new
#define OwnershipPaintable_init0 OwnershipPaintable_init
#ifndef OwnershipPaintable_paintThreed
#define OwnershipPaintable_paintThreed Paintable_paintThreed
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OwnershipPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OwnershipPaintable_register(void);

#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif

#endif // ORG_ALLBINARY_GAME_PAINT_OWNERSHIPPAINTABLE_H
