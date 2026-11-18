#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
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
typedef struct LayerInterfaceFactoryInterface LayerInterfaceFactoryInterface;
#include "org/allbinary/layer/LayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"

typedef struct CountedPickedUpLayerInterfaceFactoryInterface CountedPickedUpLayerInterfaceFactoryInterface;
struct CountedPickedUpLayerInterfaceFactoryInterface {
    int32_t (*getId)(void* this);
    int32_t (*getTotal)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CountedPickedUpLayerInterfaceFactoryInterface_staticInit(void);

static inline int32_t CountedPickedUpLayerInterfaceFactoryInterface_getId(void* this) {
    return ((__typeof__(((CountedPickedUpLayerInterfaceFactoryInterface*) nullptr)->getId)) java_method_of(this, "getId"))(this);
}

static inline int32_t CountedPickedUpLayerInterfaceFactoryInterface_getTotal(void* this) {
    return ((__typeof__(((CountedPickedUpLayerInterfaceFactoryInterface*) nullptr)->getTotal)) java_method_of(this, "getTotal"))(this);
}
#define CountedPickedUpLayerInterfaceFactoryInterface_getPickedUpLayerType PickedUpLayerInterfaceFactoryInterface_getPickedUpLayerType
#define CountedPickedUpLayerInterfaceFactoryInterface_getIconLayer PickedUpLayerInterfaceFactoryInterface_getIconLayer
#define CountedPickedUpLayerInterfaceFactoryInterface_getAnimationInterface PickedUpLayerInterfaceFactoryInterface_getAnimationInterface
#define CountedPickedUpLayerInterfaceFactoryInterface_getNextInstance LayerInterfaceFactoryInterface_getNextInstance


#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_COUNTEDPICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
