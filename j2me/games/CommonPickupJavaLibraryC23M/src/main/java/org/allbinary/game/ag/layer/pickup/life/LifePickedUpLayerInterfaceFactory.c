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
// package org.allbinary.game.ag.layer.pickup.life

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/PickupProcessorInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct LifePickedUpLayerInterfaceFactory LifePickedUpLayerInterfaceFactory;
struct LifePickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    LifeLayerCircularStaticPool* pool;
};

static PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;

LifePickedUpLayerInterfaceFactory* LifePickedUpLayerInterfaceFactory_new(void);
void LifePickedUpLayerInterfaceFactory_init(void);

void LifePickedUpLayerInterfaceFactory_init(LifePickedUpLayerInterfaceFactory* this);
int32_t LifePickedUpLayerInterfaceFactory_getTotal(LifePickedUpLayerInterfaceFactory* this);
PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory_getInstance(void);
void LifePickedUpLayerInterfaceFactory_process(LifePickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);

// Static fields with runtime initializers: call this once at startup
void LifePickedUpLayerInterfaceFactory_staticInit(void) {
    LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;
}

static void LifePickedUpLayerInterfaceFactory_initFields(LifePickedUpLayerInterfaceFactory* this) {
    this->pool = LifeLayerCircularStaticPool_new(LifeLayerFactory_new(), 1);
}


// throws Exception
void LifePickedUpLayerInterfaceFactory_init(void) {
        LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = LifePickedUpLayerInterfaceFactory_new();
}


void LifePickedUpLayerInterfaceFactory_init(LifePickedUpLayerInterfaceFactory* this) {
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->LIFE, IconLayerFactory_getInstance(JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LifeResources_getInstance()->RESOURCE), getInstance, 0), 10, 10), JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), LifeResources_getInstance()->RESOURCE), getInstance, 0));
        LifePickedUpLayerInterfaceFactory_initFields(this);
}

LifePickedUpLayerInterfaceFactory* LifePickedUpLayerInterfaceFactory_new(void) {
    LifePickedUpLayerInterfaceFactory* this = calloc(1, sizeof(LifePickedUpLayerInterfaceFactory));
    LifePickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t LifePickedUpLayerInterfaceFactory_getTotal(LifePickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* LifePickedUpLayerInterfaceFactory_getInstance(void) {
        return LifePickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;
}


// throws Exception
void LifePickedUpLayerInterfaceFactory_process(LifePickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        LifeLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

