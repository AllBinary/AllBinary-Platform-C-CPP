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
// package org.allbinary.game.ag.layer.pickup

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/layer/pickup/CountedPickedUpLayerInterfaceFactory.h"
#include "org/allbinary/game/layer/pickup/PickupLayer.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct FallingPickupLayer FallingPickupLayer;
struct FallingPickupLayer {
    PickupLayer base;
    TickableInterface TickableInterface_interface;
};

static const char* FallingPickupLayer_NAME = "FallingPickupLayer";

FallingPickupLayer* FallingPickupLayer_new(RemoteInfo* remoteInfo);

void FallingPickupLayer_init(FallingPickupLayer* this, RemoteInfo* remoteInfo);
void FallingPickupLayer_processTick(FallingPickupLayer* this, AllBinaryLayerManager* allBinaryLayerManager);
bool FallingPickupLayer_implmentsTickableInterface(FallingPickupLayer* this);


void FallingPickupLayer_init(FallingPickupLayer* this, RemoteInfo* remoteInfo) {
        PickupLayer_init(&this->base, FallingPickupLayer_NAME, remoteInfo, 0, CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY, JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0), Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), ViewPosition_getInstanceD());
}

FallingPickupLayer* FallingPickupLayer_new(RemoteInfo* remoteInfo) {
    FallingPickupLayer* this = calloc(1, sizeof(FallingPickupLayer));
    FallingPickupLayer_init(this, remoteInfo);
    return this;
}


void FallingPickupLayer_processTick(FallingPickupLayer* this, AllBinaryLayerManager* allBinaryLayerManager) {
        FallingPickupLayer_setPosition(this, this->x, this->y + 1, this->z);
}


bool FallingPickupLayer_implmentsTickableInterface(FallingPickupLayer* this) {
        return true;
}

