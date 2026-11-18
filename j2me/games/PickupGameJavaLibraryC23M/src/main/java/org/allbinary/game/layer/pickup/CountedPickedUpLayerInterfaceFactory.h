#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
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
// package org.allbinary.game.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PickedUpLayerInterfaceFactory PickedUpLayerInterfaceFactory;
typedef struct CountedPickedUpLayerInterfaceFactoryInterface CountedPickedUpLayerInterfaceFactoryInterface;
typedef struct PickedUpLayerTypeFactory PickedUpLayerTypeFactory;
typedef struct IconLayer IconLayer;
typedef struct CountedPickedUpLayerInterfaceFactoryPool CountedPickedUpLayerInterfaceFactoryPool;
typedef struct PickedUpLayerType PickedUpLayerType;
typedef struct Animation Animation;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayList BasicArrayList;
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactoryInterface.h"

typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
struct CountedPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    CountedPickedUpLayerInterfaceFactoryInterface CountedPickedUpLayerInterfaceFactoryInterface_interface;
    int32_t id;
};

extern CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;

CountedPickedUpLayerInterfaceFactory* CountedPickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

void CountedPickedUpLayerInterfaceFactory_init(CountedPickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

AllBinaryLayer* CountedPickedUpLayerInterfaceFactory_getNextInstance(CountedPickedUpLayerInterfaceFactory* this, ABHashtable* hashtable, int32_t x, int32_t y, int32_t z);

int32_t CountedPickedUpLayerInterfaceFactory_getTotal(CountedPickedUpLayerInterfaceFactory* this);

int32_t CountedPickedUpLayerInterfaceFactory_getId(CountedPickedUpLayerInterfaceFactory* this);
#define CountedPickedUpLayerInterfaceFactory_new3 CountedPickedUpLayerInterfaceFactory_new
#define CountedPickedUpLayerInterfaceFactory_init3 CountedPickedUpLayerInterfaceFactory_init
#ifndef CountedPickedUpLayerInterfaceFactory_getIconLayer
#define CountedPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactory_getIconLayer
#endif
#ifndef CountedPickedUpLayerInterfaceFactory_getAnimationInterface
#define CountedPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactory_getAnimationInterface
#endif
#ifndef CountedPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define CountedPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactory_getPickedUpLayerType
#endif
#ifndef CountedPickedUpLayerInterfaceFactory_getIconLayer
#define CountedPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactoryBase_getIconLayer
#endif
#ifndef CountedPickedUpLayerInterfaceFactory_getAnimationInterface
#define CountedPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactoryBase_getAnimationInterface
#endif
#ifndef CountedPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define CountedPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CountedPickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CountedPickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORY_H
