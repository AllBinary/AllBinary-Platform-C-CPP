/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"

typedef struct PickedUpLayerInterfaceFactoryBase PickedUpLayerInterfaceFactoryBase;
struct PickedUpLayerInterfaceFactoryBase {
    PickedUpLayerInterfaceFactoryInterface PickedUpLayerInterfaceFactoryInterface_interface;
};

PickedUpLayerInterfaceFactoryBase* PickedUpLayerInterfaceFactoryBase_NULL_PICKED_UP_LAYER_FACTORY_BASE;

PickedUpLayerInterfaceFactoryBase* PickedUpLayerInterfaceFactoryBase_new(void);
AllBinaryLayer* PickedUpLayerInterfaceFactoryBase_getIconLayer(PickedUpLayerInterfaceFactoryBase* this);
Animation* PickedUpLayerInterfaceFactoryBase_getAnimationInterface(PickedUpLayerInterfaceFactoryBase* this);
PickedUpLayerType* PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType(PickedUpLayerInterfaceFactoryBase* this);

// Static fields with runtime initializers: call this once at startup
void PickedUpLayerInterfaceFactoryBase_staticInit(void) {
    PickedUpLayerInterfaceFactoryBase_NULL_PICKED_UP_LAYER_FACTORY_BASE = PickedUpLayerInterfaceFactoryBase_new();
}

void PickedUpLayerInterfaceFactoryBase_init(PickedUpLayerInterfaceFactoryBase* this) {
}

PickedUpLayerInterfaceFactoryBase* PickedUpLayerInterfaceFactoryBase_new(void) {
    PickedUpLayerInterfaceFactoryBase* this = calloc(1, sizeof(PickedUpLayerInterfaceFactoryBase));
    PickedUpLayerInterfaceFactoryBase_init(this);
    return this;
}


AllBinaryLayer* PickedUpLayerInterfaceFactoryBase_getIconLayer(PickedUpLayerInterfaceFactoryBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Animation* PickedUpLayerInterfaceFactoryBase_getAnimationInterface(PickedUpLayerInterfaceFactoryBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


PickedUpLayerType* PickedUpLayerInterfaceFactoryBase_getPickedUpLayerType(PickedUpLayerInterfaceFactoryBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

