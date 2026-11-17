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
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryBase.h"

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

static void PickedUpLayerInterfaceFactory_initFields(PickedUpLayerInterfaceFactory* this) {
    
    
    
}


void PickedUpLayerInterfaceFactory_init(PickedUpLayerInterfaceFactory* this, PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    PickedUpLayerInterfaceFactoryBase_init(&this->base);
    PickedUpLayerInterfaceFactory_initFields(this);
        this->pickedUpLayerType = pickeUpLayerType;
        this->animationInterface = animationInterface;
        this->iconLayer = iconLayer;
}

PickedUpLayerInterfaceFactory* PickedUpLayerInterfaceFactory_new(PickedUpLayerType* pickeUpLayerType, IconLayer* iconLayer, Animation* animationInterface) {
    PickedUpLayerInterfaceFactory* this = calloc(1, sizeof(PickedUpLayerInterfaceFactory));
    PickedUpLayerInterfaceFactory_init(this, pickeUpLayerType, iconLayer, animationInterface);
    return this;
}


AllBinaryLayer* PickedUpLayerInterfaceFactory_getIconLayer(PickedUpLayerInterfaceFactory* this) {
        return this->iconLayer;
}


Animation* PickedUpLayerInterfaceFactory_getAnimationInterface(PickedUpLayerInterfaceFactory* this) {
        return this->animationInterface;
}


PickedUpLayerType* PickedUpLayerInterfaceFactory_getPickedUpLayerType(PickedUpLayerInterfaceFactory* this) {
        return this->pickedUpLayerType;
}

