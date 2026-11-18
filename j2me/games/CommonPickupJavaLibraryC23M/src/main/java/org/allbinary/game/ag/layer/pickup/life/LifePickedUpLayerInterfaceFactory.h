#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_H
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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LifeLayerCircularStaticPool LifeLayerCircularStaticPool;
typedef struct LifeLayerFactory LifeLayerFactory;
typedef struct LifeResources LifeResources;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
typedef struct IconLayerFactory IconLayerFactory;
typedef struct PickedUpLayerInterfaceFactory PickedUpLayerInterfaceFactory;
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct PickedUpLayerTypeFactory PickedUpLayerTypeFactory;
typedef struct PickupProcessorInterface PickupProcessorInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif
#include "org/allbinary/game/layer/pickup/PickupProcessorInterface.h"
#if __has_include("org/allbinary/game/ag/layer/pickup/life/LifeLayerCircularStaticPool.h")
#include "org/allbinary/game/ag/layer/pickup/life/LifeLayerCircularStaticPool.h"
#endif

typedef struct LifePickedUpLayerInterfaceFactory LifePickedUpLayerInterfaceFactory;
struct LifePickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    LifeLayerCircularStaticPool* pool;
};


LifePickedUpLayerInterfaceFactory* LifePickedUpLayerInterfaceFactory_new(void);

void LifePickedUpLayerInterfaceFactory_initMethod(void);

void LifePickedUpLayerInterfaceFactory_init(LifePickedUpLayerInterfaceFactory* this);

int32_t LifePickedUpLayerInterfaceFactory_getTotal(LifePickedUpLayerInterfaceFactory* this);

PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory_getInstance(void);

void LifePickedUpLayerInterfaceFactory_process(LifePickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);
#define LifePickedUpLayerInterfaceFactory_new0 LifePickedUpLayerInterfaceFactory_new
#define LifePickedUpLayerInterfaceFactory_init0 LifePickedUpLayerInterfaceFactory_init
#ifndef LifePickedUpLayerInterfaceFactory_getIconLayer
#define LifePickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactory_getIconLayer
#endif
#ifndef LifePickedUpLayerInterfaceFactory_getAnimationInterface
#define LifePickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactory_getAnimationInterface
#endif
#ifndef LifePickedUpLayerInterfaceFactory_getPickedUpLayerType
#define LifePickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactory_getPickedUpLayerType
#endif
#ifndef LifePickedUpLayerInterfaceFactory_getIconLayer
#define LifePickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactoryBase_getIconLayer
#endif
#ifndef LifePickedUpLayerInterfaceFactory_getAnimationInterface
#define LifePickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactoryBase_getAnimationInterface
#endif
#ifndef LifePickedUpLayerInterfaceFactory_getPickedUpLayerType
#define LifePickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LifePickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LifePickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_LIFE_LIFEPICKEDUPLAYERINTERFACEFACTORY_H
