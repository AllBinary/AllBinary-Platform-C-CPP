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
#include "org/allbinary/game/health/HealthInterface.h"
#include "org/allbinary/game/health/HealthInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct HealLayerCircularStaticPool HealLayerCircularStaticPool;
struct HealLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


HealLayerCircularStaticPool* HealLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void HealLayerCircularStaticPool_init(HealLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);
void HealLayerCircularStaticPool_visit(HealLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface);


void HealLayerCircularStaticPool_init(HealLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    AllBinaryLayerCircularPool_init(&this->base);
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((&this->base), allbinaryLayerFactoryInterface, total);
}

HealLayerCircularStaticPool* HealLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    HealLayerCircularStaticPool* this = calloc(1, sizeof(HealLayerCircularStaticPool));
    HealLayerCircularStaticPool_init(this, allbinaryLayerFactoryInterface, total);
    return this;
}


// throws Exception
void HealLayerCircularStaticPool_visit(HealLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface) {
        HealLayer* healLayer = ((HealLayer*) HealLayerCircularStaticPool_getNextInstance(this));
        HealthInterfaceCompositeInterface* healthInterfaceCompositeInterface = ((HealthInterfaceCompositeInterface*) sourceLayerInterface);
        HealthInterface* healthInterface = HealthInterfaceCompositeInterface_getHealthInterface(healthInterfaceCompositeInterface);
        HealLayer_visit(healLayer, healthInterface);
}

