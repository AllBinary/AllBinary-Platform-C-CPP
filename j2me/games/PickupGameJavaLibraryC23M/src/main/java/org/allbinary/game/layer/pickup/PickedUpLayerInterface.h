#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACE_H
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
typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
typedef struct LayerInterface LayerInterface;
#include "org/allbinary/layer/LayerInterface.h"

typedef struct PickedUpLayerInterface PickedUpLayerInterface;
struct PickedUpLayerInterface {
    PickedUpLayerInterfaceFactoryInterface* (*getPickedUpLayerInterfaceFactoryInterface)(void* this);
    void (*setPickedUp)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickedUpLayerInterface_staticInit(void);

static inline PickedUpLayerInterfaceFactoryInterface* PickedUpLayerInterface_getPickedUpLayerInterfaceFactoryInterface(void* this) {
    return ((__typeof__(((PickedUpLayerInterface*) nullptr)->getPickedUpLayerInterfaceFactoryInterface)) java_method_of(this, "getPickedUpLayerInterfaceFactoryInterface"))(this);
}

static inline void PickedUpLayerInterface_setPickedUp(void* this) {
    ((__typeof__(((PickedUpLayerInterface*) nullptr)->setPickedUp)) java_method_of(this, "setPickedUp"))(this);
}
#define PickedUpLayerInterface_getHeight LayerInterface_getHeight
#define PickedUpLayerInterface_getWidth LayerInterface_getWidth
#define PickedUpLayerInterface_getHalfHeight LayerInterface_getHalfHeight
#define PickedUpLayerInterface_getHalfWidth LayerInterface_getHalfWidth
#define PickedUpLayerInterface_getXP LayerInterface_getXP
#define PickedUpLayerInterface_getYP LayerInterface_getYP
#define PickedUpLayerInterface_getZP LayerInterface_getZP
#define PickedUpLayerInterface_getX2 LayerInterface_getX2
#define PickedUpLayerInterface_getY2 LayerInterface_getY2
#define PickedUpLayerInterface_getZ2 LayerInterface_getZ2
#define PickedUpLayerInterface_isVisible LayerInterface_isVisible
#define PickedUpLayerInterface_moveDXYZ LayerInterface_moveDXYZ
#define PickedUpLayerInterface_setVisible LayerInterface_setVisible
#define PickedUpLayerInterface_implmentsTickableInterface LayerInterface_implmentsTickableInterface
#define PickedUpLayerInterface_implmentsCollidableInterface LayerInterface_implmentsCollidableInterface
#define PickedUpLayerInterface_implmentsGameInputInterface LayerInterface_implmentsGameInputInterface
#define PickedUpLayerInterface_implmentsArtificialIntelligenceCompositeInterface LayerInterface_implmentsArtificialIntelligenceCompositeInterface
#define PickedUpLayerInterface_getType LayerInterface_getType


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACE_H
