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
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/game/identification/BasicGroupFactory.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/multiplayer/layer/RemoteInfo.h"
#include "org/allbinary/game/view/TileLayerPositionIntoViewPosition.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/graphics/Rectangle.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/view/ViewPosition.h"
#include "org/allbinary/view/event/ViewPositionEventHandler.h"
#include "org/allbinary/game/layer/pickup/PickupLayer.h"

typedef struct RaceTrackPickupLayer RaceTrackPickupLayer;
struct RaceTrackPickupLayer {
    PickupLayer base;
    ViewPositionEventHandler* viewPositionEventHandler;
};

static const char* RaceTrackPickupLayer_NAME = "RaceTrackPickupLayer";

RaceTrackPickupLayer* RaceTrackPickupLayer_new(void);

void RaceTrackPickupLayer_init(RaceTrackPickupLayer* this);
void RaceTrackPickupLayer_setTiledLayer(RaceTrackPickupLayer* this, AllBinaryTiledLayer* tiledLayer);
void RaceTrackPickupLayer_setDestroyed(RaceTrackPickupLayer* this, bool destroyed);

static void RaceTrackPickupLayer_initFields(RaceTrackPickupLayer* this) {
    this->viewPositionEventHandler = ViewPositionEventHandler_getInstance();
}


void RaceTrackPickupLayer_init(RaceTrackPickupLayer* this) {
        PickupLayer_init(&this->base, RaceTrackPickupLayer_NAME, RemoteInfo_REMOTE_INFO, 0, CountedPickedUpLayerInterfaceFactory_NULL_COUNTED_PICKUP_LAYER_FACTORY, JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0), Rectangle_new(PointFactory_getInstance()->ZERO_ZERO, 0, 0), TileLayerPositionIntoViewPosition_new());
        RaceTrackPickupLayer_initFields(this);
}

RaceTrackPickupLayer* RaceTrackPickupLayer_new(void) {
    RaceTrackPickupLayer* this = calloc(1, sizeof(RaceTrackPickupLayer));
    RaceTrackPickupLayer_init(this);
    return this;
}


void RaceTrackPickupLayer_setTiledLayer(RaceTrackPickupLayer* this, AllBinaryTiledLayer* tiledLayer) {
        TileLayerPositionIntoViewPosition* viewPosition = ((TileLayerPositionIntoViewPosition*) RaceTrackPickupLayer_getViewPosition(this));
        TileLayerPositionIntoViewPosition_setTiledLayer(viewPosition, tiledLayer);
        ViewPositionEventHandler_addListener(this->viewPositionEventHandler, ((AllBinaryLayer*) this));
}


void RaceTrackPickupLayer_setDestroyed(RaceTrackPickupLayer* this, bool destroyed) {
        PickupLayer_setDestroyed((&this->base), destroyed);
        if (RaceTrackPickupLayer_isDestroyed(this)) {
            ViewPositionEventHandler_removeListener(this->viewPositionEventHandler, this);
        }
}

