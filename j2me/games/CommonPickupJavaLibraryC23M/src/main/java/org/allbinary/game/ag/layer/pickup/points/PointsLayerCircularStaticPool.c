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
// package org.allbinary.game.ag.layer.pickup.points

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/score/ScoreableInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/AllBinaryLayerCircularPool.h"
#include "org/allbinary/layer/AllBinaryLayerFactoryInterface.h"

typedef struct PointsLayerCircularStaticPool PointsLayerCircularStaticPool;
struct PointsLayerCircularStaticPool {
    AllBinaryLayerCircularPool base;
};


PointsLayerCircularStaticPool* PointsLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);

void PointsLayerCircularStaticPool_init(PointsLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total);
void PointsLayerCircularStaticPool_visit(PointsLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface);


void PointsLayerCircularStaticPool_init(PointsLayerCircularStaticPool* this, AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    AllBinaryLayerCircularPool_init(&this->base);
        AllBinaryLayerCircularPool_initAllBinaryLayerCircularPool((&this->base), allbinaryLayerFactoryInterface, total);
}

PointsLayerCircularStaticPool* PointsLayerCircularStaticPool_new(AllBinaryLayerFactoryInterface* allbinaryLayerFactoryInterface, int32_t total) {
    PointsLayerCircularStaticPool* this = calloc(1, sizeof(PointsLayerCircularStaticPool));
    PointsLayerCircularStaticPool_init(this, allbinaryLayerFactoryInterface, total);
    return this;
}


// throws Exception
void PointsLayerCircularStaticPool_visit(PointsLayerCircularStaticPool* this, AllBinaryLayer* sourceLayerInterface) {
        PointsLayer* pointsLayer = ((PointsLayer*) PointsLayerCircularStaticPool_getNextInstance(this));
        ScoreableInterface* scoreableInterface = ((ScoreableInterface*) sourceLayerInterface);
        PointsLayer_visit(pointsLayer, scoreableInterface);
}

