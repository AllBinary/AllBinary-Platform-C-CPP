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
#include "org/allbinary/game/ag/life/Life.h"
#include "org/allbinary/game/ag/life/LifeInterfaceCompositeInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct LifeLayerCircularStaticPool LifeLayerCircularStaticPool;
struct LifeLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


LifeLayerCircularStaticPool* LifeLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void LifeLayerCircularStaticPool_init(LifeLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);
void LifeLayerCircularStaticPool_visit(LifeLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface);


void LifeLayerCircularStaticPool_init(LifeLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    AllBinaryLayerCircularPool_init(&this->base);
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((&this->base), allbinaryLayerFactoryInterface, total);
}

LifeLayerCircularStaticPool* LifeLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    LifeLayerCircularStaticPool* this = calloc(1, sizeof(LifeLayerCircularStaticPool));
    LifeLayerCircularStaticPool_init(this, allbinaryLayerFactoryInterface, total);
    return this;
}


// throws Exception
void LifeLayerCircularStaticPool_visit(LifeLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface) {
        LifeLayer* lifeLayer = ((LifeLayer*) LifeLayerCircularStaticPool_getNextInstance(this));
        LifeInterfaceCompositeInterface* lifeInterfaceCompositeInterface = ((LifeInterfaceCompositeInterface*) sourceLayerInterface);
        Life* lifeInterface = LifeInterfaceCompositeInterface_getLifeInterface(lifeInterfaceCompositeInterface);
        LifeLayer_visit(lifeLayer, lifeInterface);
}

