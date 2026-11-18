#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H
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
typedef struct PickupLayer PickupLayer;
typedef struct PickedUpLayerInterface PickedUpLayerInterface;
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct AllBinaryLayerCircularPool AllBinaryLayerCircularPool;
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct PickupLayerCircularStaticPool PickupLayerCircularStaticPool;
struct PickupLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_new(void);

void PickupLayerCircularStaticPool_init(PickupLayerCircularStaticPool* this);

PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_getInstance(void);

PickedUpLayerInterface* PickupLayerCircularStaticPool_getInstanceXYZ(PickupLayerCircularStaticPool* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, int32_t x, int32_t y, int32_t z);
#define PickupLayerCircularStaticPool_new0 PickupLayerCircularStaticPool_new
#define PickupLayerCircularStaticPool_init0 PickupLayerCircularStaticPool_init
#ifndef PickupLayerCircularStaticPool_initAllBinaryLayerCircularPool
#define PickupLayerCircularStaticPool_initAllBinaryLayerCircularPool AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool
#endif
#ifndef PickupLayerCircularStaticPool_getNextInstance
#define PickupLayerCircularStaticPool_getNextInstance BaseCircularPool_getNextInstance
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickupLayerCircularStaticPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PickupLayerCircularStaticPool_register(void);


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPLAYERCIRCULARSTATICPOOL_H
