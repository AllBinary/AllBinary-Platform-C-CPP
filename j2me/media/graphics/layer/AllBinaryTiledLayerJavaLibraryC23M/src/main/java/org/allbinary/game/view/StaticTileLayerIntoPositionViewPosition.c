/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2006 AllBinary 
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
// package org.allbinary.game.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/NullLayer.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct StaticTileLayerIntoPositionViewPosition StaticTileLayerIntoPositionViewPosition;
struct StaticTileLayerIntoPositionViewPosition {
    ViewPosition base;
};

static Layer* StaticTileLayerIntoPositionViewPosition_tiledLayer;
AllBinaryLayer* StaticTileLayerIntoPositionViewPosition_layer;

StaticTileLayerIntoPositionViewPosition* StaticTileLayerIntoPositionViewPosition_new(void);

void StaticTileLayerIntoPositionViewPosition_init(StaticTileLayerIntoPositionViewPosition* this);
int32_t StaticTileLayerIntoPositionViewPosition_getX(StaticTileLayerIntoPositionViewPosition* this);
int32_t StaticTileLayerIntoPositionViewPosition_getY(StaticTileLayerIntoPositionViewPosition* this);
int32_t StaticTileLayerIntoPositionViewPosition_getZ(StaticTileLayerIntoPositionViewPosition* this);
void StaticTileLayerIntoPositionViewPosition_setTiledLayer(AllBinaryTiledLayer* tiledLayer);

// Static fields with runtime initializers: call this once at startup
void StaticTileLayerIntoPositionViewPosition_staticInit(void) {
    StaticTileLayerIntoPositionViewPosition_tiledLayer = NullLayer_getInstance();
    StaticTileLayerIntoPositionViewPosition_layer = AllBinaryLayer_NULL_ALLBINARY_LAYER;
}


void StaticTileLayerIntoPositionViewPosition_init(StaticTileLayerIntoPositionViewPosition* this) {
        ViewPosition_init(&this->base, 0, 0, 0);
}

StaticTileLayerIntoPositionViewPosition* StaticTileLayerIntoPositionViewPosition_new(void) {
    StaticTileLayerIntoPositionViewPosition* this = calloc(1, sizeof(StaticTileLayerIntoPositionViewPosition));
    StaticTileLayerIntoPositionViewPosition_init(this);
    return this;
}


int32_t StaticTileLayerIntoPositionViewPosition_getX(StaticTileLayerIntoPositionViewPosition* this) {
        return ViewPosition_getX((&this->base)) - JAVA_CALL(StaticTileLayerIntoPositionViewPosition_tiledLayer, getXP);
}


int32_t StaticTileLayerIntoPositionViewPosition_getY(StaticTileLayerIntoPositionViewPosition* this) {
        return ViewPosition_getY((&this->base)) - JAVA_CALL(StaticTileLayerIntoPositionViewPosition_tiledLayer, getYP);
}


int32_t StaticTileLayerIntoPositionViewPosition_getZ(StaticTileLayerIntoPositionViewPosition* this) {
        return ViewPosition_getZ((&this->base)) - JAVA_CALL(StaticTileLayerIntoPositionViewPosition_tiledLayer, getZP);
}


void StaticTileLayerIntoPositionViewPosition_setTiledLayer(AllBinaryTiledLayer* tiledLayer) {
        StaticTileLayerIntoPositionViewPosition_tiledLayer = tiledLayer;
}

