#ifndef ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS30KPICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS30KPICKEDUPLAYERINTERFACEFACTORY_H
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

typedef struct Points30kPickedUpLayerInterfaceFactory Points30kPickedUpLayerInterfaceFactory;
struct Points30kPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    PointsLayerCircularStaticPool* pool;
};


Points30kPickedUpLayerInterfaceFactory* Points30kPickedUpLayerInterfaceFactory_new(void);

void Points30kPickedUpLayerInterfaceFactory_initMethod(void);

void Points30kPickedUpLayerInterfaceFactory_init(Points30kPickedUpLayerInterfaceFactory* this);

int32_t Points30kPickedUpLayerInterfaceFactory_getTotal(Points30kPickedUpLayerInterfaceFactory* this);

PickedUpLayerInterfaceFactoryInterface* Points30kPickedUpLayerInterfaceFactory_getInstance(void);

void Points30kPickedUpLayerInterfaceFactory_process(Points30kPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);
#define Points30kPickedUpLayerInterfaceFactory_new0 Points30kPickedUpLayerInterfaceFactory_new
#define Points30kPickedUpLayerInterfaceFactory_init0 Points30kPickedUpLayerInterfaceFactory_init
#ifndef Points30kPickedUpLayerInterfaceFactory_getIconLayer
#define Points30kPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactory_getIconLayer
#endif
#ifndef Points30kPickedUpLayerInterfaceFactory_getAnimationInterface
#define Points30kPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactory_getAnimationInterface
#endif
#ifndef Points30kPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define Points30kPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactory_getPickedUpLayerType
#endif
#ifndef Points30kPickedUpLayerInterfaceFactory_getIconLayer
#define Points30kPickedUpLayerInterfaceFactory_getIconLayer PickedUpLayerInterfaceFactoryBase_getIconLayer
#endif
#ifndef Points30kPickedUpLayerInterfaceFactory_getAnimationInterface
#define Points30kPickedUpLayerInterfaceFactory_getAnimationInterface PickedUpLayerInterfaceFactoryBase_getAnimationInterface
#endif
#ifndef Points30kPickedUpLayerInterfaceFactory_getPickedUpLayerType
#define Points30kPickedUpLayerInterfaceFactory_getPickedUpLayerType PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void Points30kPickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void Points30kPickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#endif

#endif // ORG_ALLBINARY_GAME_AG_LAYER_PICKUP_POINTS_POINTS30KPICKEDUPLAYERINTERFACEFACTORY_H
