#ifndef ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H
#define ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H
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
typedef struct PickedUpLayerInterfaceFactoryBase PickedUpLayerInterfaceFactoryBase;
typedef struct PickedUpLayerType PickedUpLayerType;
typedef struct IconLayer IconLayer;
typedef struct Animation Animation;
typedef struct AllBinaryLayer AllBinaryLayer;
#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"
#if __has_include("org/allbinary/game/layer/pickup/PickedUpLayerType.h")
#include "org/allbinary/game/layer/pickup/PickedUpLayerType.h"
#endif
#if __has_include("org/allbinary/game/layer/pickup/IconLayer.h")
#include "org/allbinary/game/layer/pickup/IconLayer.h"
#endif

typedef struct PickedUpLayerInterfaceFactory PickedUpLayerInterfaceFactory;
struct PickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactoryBase base;
    PickedUpLayerType* pickedUpLayerType;
    IconLayer* iconLayer;
    Animation* animationInterface;
};


PickedUpLayerInterfaceFactory* PickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

void PickedUpLayerInterfaceFactory_init(PickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface);

AllBinaryLayer* PickedUpLayerInterfaceFactory_getIconLayer(PickedUpLayerInterfaceFactory* this);

Animation* PickedUpLayerInterfaceFactory_getAnimationInterface(PickedUpLayerInterfaceFactory* this);

PickedUpLayerType* PickedUpLayerInterfaceFactory_getPickedUpLayerType(PickedUpLayerInterfaceFactory* this);
#define PickedUpLayerInterfaceFactory_new3 PickedUpLayerInterfaceFactory_new
#define PickedUpLayerInterfaceFactory_init3 PickedUpLayerInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PickedUpLayerInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PickedUpLayerInterfaceFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif
#if __has_include("org/allbinary/layer/AllBinaryLayer.h")
#include "org/allbinary/layer/AllBinaryLayer.h"
#endif

#endif // ORG_ALLBINARY_GAME_LAYER_PICKUP_PICKEDUPLAYERINTERFACEFACTORY_H
