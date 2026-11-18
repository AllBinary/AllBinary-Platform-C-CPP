#ifndef ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H
#define ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H
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
typedef struct Font Font;
typedef struct Graphics Graphics;
typedef struct Animation Animation;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
typedef struct MyFontProcessor MyFontProcessor;
typedef struct UpdateMyFontInterface UpdateMyFontInterface;
typedef struct UpdateMyFontProcessor UpdateMyFontProcessor;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct NullUtil NullUtil;
typedef struct PrimitiveLongUtil PrimitiveLongUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/graphics/font/MyFontProcessor.h")
#include "org/allbinary/graphics/font/MyFontProcessor.h"
#endif
#include "org/allbinary/graphics/font/UpdateMyFontInterface.h"
#if __has_include("org/allbinary/logic/math/PrimitiveLongUtil.h")
#include "org/allbinary/logic/math/PrimitiveLongUtil.h"
#endif
#include "org/allbinary/game/part/PartInterface.h"

typedef struct CountedLayerInterfaceFactoryPart CountedLayerInterfaceFactoryPart;
struct CountedLayerInterfaceFactoryPart {
    PartInterface PartInterface_interface;
    UpdateMyFontInterface UpdateMyFontInterface_interface;
    MyFontProcessor* updateMyFontProcessor;
    MyFontProcessor* myFontProcessor;
    Animation* animationInterface;
    int32_t total;
    uint16_t* totalString;
    int32_t xOffset;
    CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory;
    PrimitiveLongUtil* primitiveLongUtil;
};

extern CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_NULL_COUNTED_LAYER_INTERFACE_FACTORY;

CountedLayerInterfaceFactoryPart* CountedLayerInterfaceFactoryPart_new(int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

void CountedLayerInterfaceFactoryPart_init(CountedLayerInterfaceFactoryPart* this, int32_t total, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);

void CountedLayerInterfaceFactoryPart_updateMeasurement(CountedLayerInterfaceFactoryPart* this, Graphics* graphics);


AllBinaryLayer* CountedLayerInterfaceFactoryPart_getInstance(CountedLayerInterfaceFactoryPart* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);

int32_t CountedLayerInterfaceFactoryPart_getTotal(CountedLayerInterfaceFactoryPart* this);

void CountedLayerInterfaceFactoryPart_setTotal(CountedLayerInterfaceFactoryPart* this, int32_t total);

void CountedLayerInterfaceFactoryPart_paint(CountedLayerInterfaceFactoryPart* this, Graphics* graphics);

void CountedLayerInterfaceFactoryPart_paintThreed(CountedLayerInterfaceFactoryPart* this, Graphics* graphics);

Animation* CountedLayerInterfaceFactoryPart_getAnimationInterface(CountedLayerInterfaceFactoryPart* this);

void CountedLayerInterfaceFactoryPart_setAnimationInterface(CountedLayerInterfaceFactoryPart* this, Animation* animationInterface);

int32_t CountedLayerInterfaceFactoryPart_getXOffset(CountedLayerInterfaceFactoryPart* this);


uint16_t* CountedLayerInterfaceFactoryPart_getTotalString(CountedLayerInterfaceFactoryPart* this);

CountedPickedUpLayerInterfaceFactory* CountedLayerInterfaceFactoryPart_getCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this);

void CountedLayerInterfaceFactoryPart_setCountedPickedUpLayerInterfaceFactory(CountedLayerInterfaceFactoryPart* this, CountedPickedUpLayerInterfaceFactory* countedPickedUpLayerInterfaceFactory);
#define CountedLayerInterfaceFactoryPart_new2 CountedLayerInterfaceFactoryPart_new
#define CountedLayerInterfaceFactoryPart_init2 CountedLayerInterfaceFactoryPart_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CountedLayerInterfaceFactoryPart_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CountedLayerInterfaceFactoryPart_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h")
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_PART_COUNTEDLAYERINTERFACEFACTORYPART_H
