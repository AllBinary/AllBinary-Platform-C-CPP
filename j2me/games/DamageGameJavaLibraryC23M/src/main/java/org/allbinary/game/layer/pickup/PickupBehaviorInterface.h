#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIORINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIORINTERFACE_H
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
typedef struct PickupProcessorInterface PickupProcessorInterface;
typedef struct PickedUpLayerInterface PickedUpLayerInterface;

typedef struct PickupBehaviorInterface PickupBehaviorInterface;
struct PickupBehaviorInterface {
    void (*doPickup)(void* this, PickupProcessorInterface* pickupProcessorInterface);
    void (*doPickupLayer)(void* this, PickedUpLayerInterface* pickupLayerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickupBehaviorInterface_staticInit(void);

static inline void PickupBehaviorInterface_doPickup(void* this, PickupProcessorInterface* pickupProcessorInterface) {
    ((__typeof__(((PickupBehaviorInterface*) nullptr)->doPickup)) java_method_of(this, "doPickup"))(this, pickupProcessorInterface);
}

static inline void PickupBehaviorInterface_doPickupLayer(void* this, PickedUpLayerInterface* pickupLayerInterface) {
    ((__typeof__(((PickupBehaviorInterface*) nullptr)->doPickupLayer)) java_method_of(this, "doPickupLayer"))(this, pickupLayerInterface);
}


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPBEHAVIORINTERFACE_H
