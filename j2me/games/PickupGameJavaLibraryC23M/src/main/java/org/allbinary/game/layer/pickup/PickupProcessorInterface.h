#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPPROCESSORINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPPROCESSORINTERFACE_H
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
typedef struct AllBinaryLayer AllBinaryLayer;

typedef struct PickupProcessorInterface PickupProcessorInterface;
struct PickupProcessorInterface {
    void (*process)(void* this, AllBinaryLayer* sourceLayerInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickupProcessorInterface_staticInit(void);

static inline void PickupProcessorInterface_process(void* this, AllBinaryLayer* sourceLayerInterface) {
    ((__typeof__(((PickupProcessorInterface*) nullptr)->process)) java_method_of(this, "process"))(this, sourceLayerInterface);
}


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKUPPROCESSORINTERFACE_H
