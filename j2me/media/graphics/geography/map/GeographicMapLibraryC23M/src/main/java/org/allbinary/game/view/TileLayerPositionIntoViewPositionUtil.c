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
// package org.allbinary.game.view

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/view/TileLayerPositionIntoViewPosition.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"

typedef struct TileLayerPositionIntoViewPositionUtil TileLayerPositionIntoViewPositionUtil;
struct TileLayerPositionIntoViewPositionUtil {
    char unused;
};


TileLayerPositionIntoViewPositionUtil* TileLayerPositionIntoViewPositionUtil_new(void);
void TileLayerPositionIntoViewPositionUtil_init(AllBinaryGameCanvas* gameCanvasInterface, TileLayerPositionIntoViewPosition* viewPosition);

void TileLayerPositionIntoViewPositionUtil_init(TileLayerPositionIntoViewPositionUtil* this) {
}

TileLayerPositionIntoViewPositionUtil* TileLayerPositionIntoViewPositionUtil_new(void) {
    TileLayerPositionIntoViewPositionUtil* this = calloc(1, sizeof(TileLayerPositionIntoViewPositionUtil));
    TileLayerPositionIntoViewPositionUtil_init(this);
    return this;
}


void TileLayerPositionIntoViewPositionUtil_init(AllBinaryGameCanvas* gameCanvasInterface, TileLayerPositionIntoViewPosition* viewPosition) {
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) AllBinaryGameCanvas_getLayerManager(gameCanvasInterface));
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        TileLayerPositionIntoViewPosition_setTiledLayer(viewPosition, tiledLayer);
}

