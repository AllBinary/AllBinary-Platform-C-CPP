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
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/NullLayer.h"
#include "org/allbinary/view/ViewPosition.h"

typedef struct TileLayerPositionIntoViewPosition TileLayerPositionIntoViewPosition;
struct TileLayerPositionIntoViewPosition {
    ViewPosition base;
    Layer* tiledLayer;
};


TileLayerPositionIntoViewPosition* TileLayerPositionIntoViewPosition_new(void);

void TileLayerPositionIntoViewPosition_init(TileLayerPositionIntoViewPosition* this);
int32_t TileLayerPositionIntoViewPosition_getX(TileLayerPositionIntoViewPosition* this);
int32_t TileLayerPositionIntoViewPosition_getY(TileLayerPositionIntoViewPosition* this);
int32_t TileLayerPositionIntoViewPosition_getZ(TileLayerPositionIntoViewPosition* this);
void TileLayerPositionIntoViewPosition_setTiledLayer(TileLayerPositionIntoViewPosition* this, AllBinaryTiledLayer* tiledLayer);

static void TileLayerPositionIntoViewPosition_initFields(TileLayerPositionIntoViewPosition* this) {
    this->tiledLayer = NullLayer_getInstance();
}


void TileLayerPositionIntoViewPosition_init(TileLayerPositionIntoViewPosition* this) {
        ViewPosition_init(&this->base, 0, 0, 0);
        TileLayerPositionIntoViewPosition_initFields(this);
}

TileLayerPositionIntoViewPosition* TileLayerPositionIntoViewPosition_new(void) {
    TileLayerPositionIntoViewPosition* this = calloc(1, sizeof(TileLayerPositionIntoViewPosition));
    TileLayerPositionIntoViewPosition_init(this);
    return this;
}


int32_t TileLayerPositionIntoViewPosition_getX(TileLayerPositionIntoViewPosition* this) {
        return ViewPosition_getX((&this->base)) - Layer_getXP(this->tiledLayer);
}


int32_t TileLayerPositionIntoViewPosition_getY(TileLayerPositionIntoViewPosition* this) {
        return ViewPosition_getY((&this->base)) - Layer_getYP(this->tiledLayer);
}


int32_t TileLayerPositionIntoViewPosition_getZ(TileLayerPositionIntoViewPosition* this) {
        return ViewPosition_getZ((&this->base)) - Layer_getZP(this->tiledLayer);
}


void TileLayerPositionIntoViewPosition_setTiledLayer(TileLayerPositionIntoViewPosition* this, AllBinaryTiledLayer* tiledLayer) {
        this->tiledLayer = tiledLayer;
}

