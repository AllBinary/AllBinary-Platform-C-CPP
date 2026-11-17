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
// package org.allbinary.game.ag.layer.pickup.health

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

typedef struct HealPickedUpLayerInterfaceFactory HealPickedUpLayerInterfaceFactory;
struct HealPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    HealLayerCircularStaticPool* pool;
};

static PickedUpLayerInterfaceFactoryInterface* HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;

HealPickedUpLayerInterfaceFactory* HealPickedUpLayerInterfaceFactory_new(void);
void HealPickedUpLayerInterfaceFactory_init(void);

void HealPickedUpLayerInterfaceFactory_init(HealPickedUpLayerInterfaceFactory* this);
int32_t HealPickedUpLayerInterfaceFactory_getTotal(HealPickedUpLayerInterfaceFactory* this);
PickedUpLayerInterfaceFactoryInterface* HealPickedUpLayerInterfaceFactory_getInstance(void);
void HealPickedUpLayerInterfaceFactory_process(HealPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);

// Static fields with runtime initializers: call this once at startup
void HealPickedUpLayerInterfaceFactory_staticInit(void) {
    HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;
}

static void HealPickedUpLayerInterfaceFactory_initFields(HealPickedUpLayerInterfaceFactory* this) {
    this->pool = HealLayerCircularStaticPool_new(HealLayerFactory_new(), 1);
}


// throws Exception
void HealPickedUpLayerInterfaceFactory_init(void) {
        HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = HealPickedUpLayerInterfaceFactory_new();
}


void HealPickedUpLayerInterfaceFactory_init(HealPickedUpLayerInterfaceFactory* this) {
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->HEAL, IconLayerFactory_getInstance(JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), HealthResources_getInstance()->RESOURCE), getInstance, 0), 10, 10), JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), HealthResources_getInstance()->RESOURCE), getInstance, 0));
        HealPickedUpLayerInterfaceFactory_initFields(this);
}

HealPickedUpLayerInterfaceFactory* HealPickedUpLayerInterfaceFactory_new(void) {
    HealPickedUpLayerInterfaceFactory* this = calloc(1, sizeof(HealPickedUpLayerInterfaceFactory));
    HealPickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t HealPickedUpLayerInterfaceFactory_getTotal(HealPickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* HealPickedUpLayerInterfaceFactory_getInstance(void) {
        return HealPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;
}


// throws Exception
void HealPickedUpLayerInterfaceFactory_process(HealPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        HealLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

