#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H
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
typedef struct PickupBehavior PickupBehavior;

typedef struct PickupCompositeInterface PickupCompositeInterface;
struct PickupCompositeInterface {
    PickupBehavior* (*getPickupBehavior)(void* this);
    void (*setPickupBehavior)(void* this, PickupBehavior* pickupBehavior);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickupCompositeInterface_staticInit(void);

static inline PickupBehavior* PickupCompositeInterface_getPickupBehavior(void* this) {
    return ((__typeof__(((PickupCompositeInterface*) nullptr)->getPickupBehavior)) java_method_of(this, "getPickupBehavior"))(this);
}

static inline void PickupCompositeInterface_setPickupBehavior(void* this, PickupBehavior* pickupBehavior) {
    ((__typeof__(((PickupCompositeInterface*) nullptr)->setPickupBehavior)) java_method_of(this, "setPickupBehavior"))(this, pickupBehavior);
}


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPCOMPOSITEINTERFACE_H
