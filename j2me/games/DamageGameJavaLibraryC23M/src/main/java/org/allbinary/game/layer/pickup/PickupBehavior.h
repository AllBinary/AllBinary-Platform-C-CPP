#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H
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
typedef struct PickupBehaviorInterface PickupBehaviorInterface;
typedef struct PickupProcessorInterface PickupProcessorInterface;
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct PickedUpLayerType PickedUpLayerType;
typedef struct PickedUpLayerTypeFactory PickedUpLayerTypeFactory;
typedef struct CountedPickedUpLayerInterfaceFactoryInterface CountedPickedUpLayerInterfaceFactoryInterface;
typedef struct PickedUpLayerInterface PickedUpLayerInterface;
typedef struct CountedPickedUpLayerInterfaceFactory CountedPickedUpLayerInterfaceFactory;
typedef struct HealthInterfaceCompositeInterface HealthInterfaceCompositeInterface;
typedef struct CollidableCompositeLayer CollidableCompositeLayer;
typedef struct CollidableDestroyableDamageableLayer CollidableDestroyableDamageableLayer;
typedef struct CountedLayerInterfaceFactoryPart CountedLayerInterfaceFactoryPart;
typedef struct PartInterface PartInterface;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/layer/CollidableCompositeLayer.h")
#include "org/allbinary/game/layer/CollidableCompositeLayer.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/game/layer/pickup/PickupBehaviorInterface.h"

typedef struct PickupBehavior PickupBehavior;
struct PickupBehavior {
    PickupBehaviorInterface PickupBehaviorInterface_interface;
    LogUtil* logUtil;
    int32_t countedIndex;
    CollidableCompositeLayer* ownerLayerInterface;
};

extern void* PickupBehavior_NULL_PICKUP_BEHAVIOR;

PickupBehavior* PickupBehavior_new(CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex);

PickupBehavior* PickupBehavior_getNullInstance(void);

void PickupBehavior_init(PickupBehavior* this, CollidableCompositeLayer* ownerLayerInterface, int32_t countedIndex);

void PickupBehavior_doPickup(PickupBehavior* this, PickupProcessorInterface* pickupProcessorInterface);

void PickupBehavior_doPickupLayer(PickupBehavior* this, PickedUpLayerInterface* pickupLayerInterface);

void PickupBehavior_add(PickupBehavior* this, CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface);

void PickupBehavior_addAt(PickupBehavior* this, CountedPickedUpLayerInterfaceFactoryInterface* countedPickedUpLayerInterfaceFactoryInterface, int32_t partIndex);

CountedLayerInterfaceFactoryPart* PickupBehavior_getFirstAvailableCountedLayerInterfaceFactory(PickupBehavior* this, PickedUpLayerType** pickedUpLayerTypeArray);

CountedLayerInterfaceFactoryPart* PickupBehavior_getCountedLayerInterfaceFactoryForSlot(PickupBehavior* this, int32_t slotIndex);

int32_t PickupBehavior_getCountedIndex(PickupBehavior* this);
#define PickupBehavior_new2 PickupBehavior_new
#define PickupBehavior_init2 PickupBehavior_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickupBehavior_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PickupBehavior_register(void);

#if __has_include("org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h")
#include "org/allbinary/game/part/CountedLayerInterfaceFactoryPart.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIOR_H
