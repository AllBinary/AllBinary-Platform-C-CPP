#ifndef ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H
#define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H
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
// package org.allbinary.game.part

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PartInterface PartInterface;
typedef struct CountedLayerInterfaceFactoryPart CountedLayerInterfaceFactoryPart;
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct PaintableInterface PaintableInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/graphics/displayable/DisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/DisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#if __has_include("org/allbinary/game/part/PartInterface.h")
#include "org/allbinary/game/part/PartInterface.h"
#endif

typedef struct CountedLayersHudPaintable CountedLayersHudPaintable;
struct CountedLayersHudPaintable {
    PaintableInterface PaintableInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    DisplayInfoSingleton* displayInfoSingleton;
    PartInterface** partInterfaceArray;
    int32_t countedTotalStringColor;
    int32_t countedPartsBorder;
    int32_t startIndex;
    int32_t dropSize;
    MyFontProcessor* myFontProcessor;
    int32_t height;
};


CountedLayersHudPaintable* CountedLayersHudPaintable_new(PartInterface** partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder);

void CountedLayersHudPaintable_init(CountedLayersHudPaintable* this, PartInterface** partInterfaceArray, int32_t dropSize, int32_t startIndex, int32_t countedTotalStringColor, int32_t countedPartsBorder);

void CountedLayersHudPaintable_updateMeasurement(CountedLayersHudPaintable* this, Graphics* graphics);

void CountedLayersHudPaintable_paint(CountedLayersHudPaintable* this, Graphics* graphics);

void CountedLayersHudPaintable_paintThreed(CountedLayersHudPaintable* this, Graphics* graphics);
#define CountedLayersHudPaintable_new5 CountedLayersHudPaintable_new
#define CountedLayersHudPaintable_init5 CountedLayersHudPaintable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CountedLayersHudPaintable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CountedLayersHudPaintable_register(void);


#endif // ORG_ALLBINARY_GAME_PART_COUNTEDLAYERSHUDPAINTABLE_H
