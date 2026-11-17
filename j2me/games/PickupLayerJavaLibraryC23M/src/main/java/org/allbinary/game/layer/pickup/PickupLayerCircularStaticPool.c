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
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"

typedef struct PickupLayerCircularStaticPool PickupLayerCircularStaticPool;
struct PickupLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};

static PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_SINGLETON;

PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_new(void);

void PickupLayerCircularStaticPool_init(PickupLayerCircularStaticPool* this);
PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_getInstance(void);
PickedUpLayerInterface* PickupLayerCircularStaticPool_getInstanceXYZ(PickupLayerCircularStaticPool* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, int32_t x, int32_t y, int32_t z);

// Static fields with runtime initializers: call this once at startup
void PickupLayerCircularStaticPool_staticInit(void) {
    PickupLayerCircularStaticPool_SINGLETON = PickupLayerCircularStaticPool_new();
}


void PickupLayerCircularStaticPool_init(PickupLayerCircularStaticPool* this) {
    AllBinaryLayerCircularPool_init(&this->base);
}

PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_new(void) {
    PickupLayerCircularStaticPool* this = calloc(1, sizeof(PickupLayerCircularStaticPool));
    PickupLayerCircularStaticPool_init(this);
    return this;
}


PickupLayerCircularStaticPool* PickupLayerCircularStaticPool_getInstance(void) {
        return PickupLayerCircularStaticPool_SINGLETON;
}


// throws Exception
PickedUpLayerInterface* PickupLayerCircularStaticPool_getInstanceXYZ(PickupLayerCircularStaticPool* this, PickedUpLayerInterfaceFactoryInterface* pickedUpLayerInterfaceFactoryInterface, int32_t x, int32_t y, int32_t z) {
        PickupLayer* pickupLayer = ((PickupLayer*) PickupLayerCircularStaticPool_getNextInstance(this));
        PickupLayer_initXYZ(pickupLayer, x, y, z);
        PickupLayer_init(pickupLayer, pickedUpLayerInterfaceFactoryInterface, PickedUpLayerInterfaceFactoryInterface_getAnimationInterface(pickedUpLayerInterfaceFactoryInterface));
        return pickupLayer;
}

