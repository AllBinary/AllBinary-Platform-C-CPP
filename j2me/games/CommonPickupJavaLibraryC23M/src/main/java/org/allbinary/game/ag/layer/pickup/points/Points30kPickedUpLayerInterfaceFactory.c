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
#include "org/allbinary/animation/FeaturedAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/GameConfigurationUtil.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/IconLayerFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerInterfaceFactoryInterface.h"
#include "org/allbinary/game/layer/pickup/PickedUpLayerTypeFactory.h"
#include "org/allbinary/game/layer/pickup/PickupProcessorInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct Points30kPickedUpLayerInterfaceFactory Points30kPickedUpLayerInterfaceFactory;
struct Points30kPickedUpLayerInterfaceFactory {
    PickedUpLayerInterfaceFactory base;
    PickupProcessorInterface PickupProcessorInterface_interface;
    PointsLayerCircularStaticPool* pool;
};

static PickedUpLayerInterfaceFactoryInterface* Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;

Points30kPickedUpLayerInterfaceFactory* Points30kPickedUpLayerInterfaceFactory_new(void);
void Points30kPickedUpLayerInterfaceFactory_init(void);

void Points30kPickedUpLayerInterfaceFactory_init(Points30kPickedUpLayerInterfaceFactory* this);
int32_t Points30kPickedUpLayerInterfaceFactory_getTotal(Points30kPickedUpLayerInterfaceFactory* this);
PickedUpLayerInterfaceFactoryInterface* Points30kPickedUpLayerInterfaceFactory_getInstance(void);
void Points30kPickedUpLayerInterfaceFactory_process(Points30kPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface);

// Static fields with runtime initializers: call this once at startup
void Points30kPickedUpLayerInterfaceFactory_staticInit(void) {
    Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY;
}

static void Points30kPickedUpLayerInterfaceFactory_initFields(Points30kPickedUpLayerInterfaceFactory* this) {
    this->pool = PointsLayerCircularStaticPool_new(PointsLayerFactory_new(GameConfigurationUtil_getCompetitionValue(GameConfigurationUtil_getInstance()) * 30000), 1);
}


// throws Exception
void Points30kPickedUpLayerInterfaceFactory_init(void) {
        Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface = Points30kPickedUpLayerInterfaceFactory_new();
}


void Points30kPickedUpLayerInterfaceFactory_init(Points30kPickedUpLayerInterfaceFactory* this) {
        PickedUpLayerInterfaceFactory_init(&this->base, PickedUpLayerTypeFactory_getInstance()->POINTS, IconLayerFactory_getInstance(JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), PointsResources_getInstance()->RESOURCE_3), getInstance, 0), 10, 10), JAVA_CALL(FeaturedAnimationInterfaceFactoryInterfaceFactory_get(FeaturedAnimationInterfaceFactoryInterfaceFactory_getInstance(), PointsResources_getInstance()->RESOURCE_3), getInstance, 0));
        Points30kPickedUpLayerInterfaceFactory_initFields(this);
}

Points30kPickedUpLayerInterfaceFactory* Points30kPickedUpLayerInterfaceFactory_new(void) {
    Points30kPickedUpLayerInterfaceFactory* this = calloc(1, sizeof(Points30kPickedUpLayerInterfaceFactory));
    Points30kPickedUpLayerInterfaceFactory_init(this);
    return this;
}


int32_t Points30kPickedUpLayerInterfaceFactory_getTotal(Points30kPickedUpLayerInterfaceFactory* this) {
        return 1;
}


PickedUpLayerInterfaceFactoryInterface* Points30kPickedUpLayerInterfaceFactory_getInstance(void) {
        return Points30kPickedUpLayerInterfaceFactory_pickedUpLayerInterfaceFactoryInterface;
}


// throws Exception
void Points30kPickedUpLayerInterfaceFactory_process(Points30kPickedUpLayerInterfaceFactory* this, AllBinaryLayer* sourceLayerInterface) {
        PointsLayerCircularStaticPool_visit(this->pool, sourceLayerInterface);
}

