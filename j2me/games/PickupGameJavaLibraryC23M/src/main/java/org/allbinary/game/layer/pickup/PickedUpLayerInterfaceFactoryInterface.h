#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
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
typedef struct PickedUpLayerType PickedUpLayerType;
typedef struct Animation Animation;
typedef struct AllBinaryLayer AllBinaryLayer;

typedef struct PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface;
struct PickedUpLayerInterfaceFactoryInterface {
    PickedUpLayerType* (*getPickedUpLayerType)(void* this);
    AllBinaryLayer* (*getIconLayer)(void* this);
    Animation* (*getAnimationInterface)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickedUpLayerInterfaceFactoryInterface_staticInit(void);

static inline PickedUpLayerType* PickedUpLayerInterfaceFactoryInterface_getPickedUpLayerType(void* this) {
    return ((__typeof__(((PickedUpLayerInterfaceFactoryInterface*) nullptr)->getPickedUpLayerType)) java_method_of(this, "getPickedUpLayerType"))(this);
}

static inline AllBinaryLayer* PickedUpLayerInterfaceFactoryInterface_getIconLayer(void* this) {
    return ((__typeof__(((PickedUpLayerInterfaceFactoryInterface*) nullptr)->getIconLayer)) java_method_of(this, "getIconLayer"))(this);
}

static inline Animation* PickedUpLayerInterfaceFactoryInterface_getAnimationInterface(void* this) {
    return ((__typeof__(((PickedUpLayerInterfaceFactoryInterface*) nullptr)->getAnimationInterface)) java_method_of(this, "getAnimationInterface"))(this);
}

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORYINTERFACE_H
