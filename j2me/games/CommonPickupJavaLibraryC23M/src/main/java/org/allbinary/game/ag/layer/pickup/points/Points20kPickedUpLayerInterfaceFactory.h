#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H
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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PointsLayerCircularStaticPool PointsLayerCircularStaticPool;
typedef struct PointsLayerFactory PointsLayerFactory;
typedef struct PointsResources PointsResources;
typedef struct FeaturedAnimationInterfaceFactoryInterfaceFactory FeaturedAnimationInterfaceFactoryInterfaceFactory;
typedef struct GameConfigurationUtil GameConfigurationUtil;
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
#if __has_include("org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h")
#include "org/allbinary/game/ag/layer/pickup/points/PointsLayerCircularStaticPool.h"
#endif

typedef struct Points20kPickedUpLayerInterfaceFactory Points20kPickedUpLayerInterfaceFactory;
struct Points20kPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    PointsLayerCircularStaticPool* pool;
};


Points20kPickedUpLayerInterfaceFactory* Points20kPickedUpLayerInterfaceFactory_new(void);

void Points20kPickedUpLayerInterfaceFactory_initMethod(void);

void Points20kPickedUpLayerInterfaceFactory_init(Points20kPickedUpLayerInterfaceFactory* this);

int32_t Points20kPickedUpLayerInterfaceFactory_getTotal(Points20kPickedUpLayerInterfaceFactory* this);

PickedUpLayerInterfaceFactoryInterface* Points20kPickedUpLayerInterfaceFactory_getInstance(void);

void Points20kPickedUpLayerInterfaceFactory_process(Points20kPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);
#define Points20kPickedUpLayerInterfaceFactory_new0 Points20kPickedUpLayerInterfaceFactory_new
#define Points20kPickedUpLayerInterfaceFactory_init0 Points20kPickedUpLayerInterfaceFactory_init
#ifndef Points20kPickedUpLayerInterfaceFactory_getIconLayer
#define Points20kPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactory_getIconLayer
#endif
#ifndef Points20kPickedUpLayerInterfaceFactory_getAnimationInterface
#define Points20kPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactory_getAnimationInterface
#endif
#ifndef Points20kPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define Points20kPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactory_getPickedUpLayerType
#endif
#ifndef Points20kPickedUpLayerInterfaceFactory_getIconLayer
#define Points20kPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactoryBase_getIconLayer
#endif
#ifndef Points20kPickedUpLayerInterfaceFactory_getAnimationInterface
#define Points20kPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactoryBase_getAnimationInterface
#endif
#ifndef Points20kPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define Points20kPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Points20kPickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Points20kPickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS20KPICKEDUPLAYERINTERFACEFACTORY_H
