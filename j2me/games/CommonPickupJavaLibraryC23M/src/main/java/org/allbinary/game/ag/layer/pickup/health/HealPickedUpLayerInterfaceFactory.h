#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALPICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALPICKEDUPLAYERINTERFACEFACTORY_H
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
// package org.allbinary.game.ag.layer.pickup.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct HealLayerCircularStaticPool HealLayerCircularStaticPool;
typedef struct HealLayerFactory HealLayerFactory;
typedef struct HealthResources HealthResources;
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
#if __has_include("org/allbinary/game/ag/layer/pickup/health/HealLayerCircularStaticPool.h")
#include "org/allbinary/game/ag/layer/pickup/health/HealLayerCircularStaticPool.h"
#endif

typedef struct HealPickedUpLayerInterfaceFactory HealPickedUpLayerInterfaceFactory;
struct HealPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    HealLayerCircularStaticPool* pool;
};


HealPickedUpLayerInterfaceFactory* HealPickedUpLayerInterfaceFactory_new(void);

void HealPickedUpLayerInterfaceFactory_initMethod(void);

void HealPickedUpLayerInterfaceFactory_init(HealPickedUpLayerInterfaceFactory* this);

int32_t HealPickedUpLayerInterfaceFactory_getTotal(HealPickedUpLayerInterfaceFactory* this);

PickedUpLayerInterfaceFactoryInterface* HealPickedUpLayerInterfaceFactory_getInstance(void);

void HealPickedUpLayerInterfaceFactory_process(HealPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);
#define HealPickedUpLayerInterfaceFactory_new0 HealPickedUpLayerInterfaceFactory_new
#define HealPickedUpLayerInterfaceFactory_init0 HealPickedUpLayerInterfaceFactory_init
#ifndef HealPickedUpLayerInterfaceFactory_getIconLayer
#define HealPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactory_getIconLayer
#endif
#ifndef HealPickedUpLayerInterfaceFactory_getAnimationInterface
#define HealPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactory_getAnimationInterface
#endif
#ifndef HealPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define HealPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactory_getPickedUpLayerType
#endif
#ifndef HealPickedUpLayerInterfaceFactory_getIconLayer
#define HealPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactoryBase_getIconLayer
#endif
#ifndef HealPickedUpLayerInterfaceFactory_getAnimationInterface
#define HealPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactoryBase_getAnimationInterface
#endif
#ifndef HealPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define HealPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HealPickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HealPickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_HEALTH_HEALPICKEDUPLAYERINTERFACEFACTORY_H
