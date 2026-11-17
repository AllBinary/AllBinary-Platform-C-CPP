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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvasInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"

typedef struct GeographicMapCellPositionTracking GeographicMapCellPositionTracking;
struct GeographicMapCellPositionTracking {
    GeographicMapCellPosition* currentGeographicMapCellPosition;
    GeographicMapCellPosition* previousGeographicMapCellPosition;
    GeographicMapCellPosition* newGeographicMapCellPosition;
    GeographicMapCellType* currentCellType;
};


GeographicMapCellPositionTracking* GeographicMapCellPositionTracking_new(void);

void GeographicMapCellPositionTracking_init(GeographicMapCellPositionTracking* this);
GeographicMapCellType* GeographicMapCellPositionTracking_getCurrentOverCellType(GeographicMapCellPositionTracking* this, BasicGeographicMap* geographicMap);
bool GeographicMapCellPositionTracking_updateStart(GeographicMapCellPositionTracking* this, AllBinaryGameCanvasInterface* gameCanvasInterface, AllBinaryLayer* layer);
bool GeographicMapCellPositionTracking_updateEnd(GeographicMapCellPositionTracking* this);
GeographicMapCellPosition* GeographicMapCellPositionTracking_getPreviousGeographicMapCellPosition(GeographicMapCellPositionTracking* this);
GeographicMapCellPosition* GeographicMapCellPositionTracking_getCurrentGeographicMapCellPosition(GeographicMapCellPositionTracking* this);

static void GeographicMapCellPositionTracking_initFields(GeographicMapCellPositionTracking* this) {
    this->currentGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->previousGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->newGeographicMapCellPosition = SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
    this->currentCellType = GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE;
}


void GeographicMapCellPositionTracking_init(GeographicMapCellPositionTracking* this) {
    GeographicMapCellPositionTracking_initFields(this);
}

GeographicMapCellPositionTracking* GeographicMapCellPositionTracking_new(void) {
    GeographicMapCellPositionTracking* this = calloc(1, sizeof(GeographicMapCellPositionTracking));
    GeographicMapCellPositionTracking_init(this);
    return this;
}


// throws Exception
GeographicMapCellType* GeographicMapCellPositionTracking_getCurrentOverCellType(GeographicMapCellPositionTracking* this, BasicGeographicMap* geographicMap) {
        GeographicMapCellPosition* geographicMapCellPosition = this->currentGeographicMapCellPosition;
        if (geographicMapCellPosition != this->previousGeographicMapCellPosition) {
            this->currentCellType = BasicGeographicMap_getCellTypeAt(geographicMap, geographicMapCellPosition);
        }
        return this->currentCellType;
}


// throws Exception
bool GeographicMapCellPositionTracking_updateStart(GeographicMapCellPositionTracking* this, AllBinaryGameCanvasInterface* gameCanvasInterface, AllBinaryLayer* layer) {
        if (gameCanvasInterface != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) AllBinaryGameCanvasInterface_getLayerManager(gameCanvasInterface));
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            this->newGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXY(geographicMapInterface, AllBinaryLayer_getXP(layer) + AllBinaryLayer_getHalfWidth(layer), AllBinaryLayer_getYP(layer) + AllBinaryLayer_getHalfHeight(layer));
            if (this->newGeographicMapCellPosition != this->currentGeographicMapCellPosition) {
                this->currentGeographicMapCellPosition = this->newGeographicMapCellPosition;
                return true;
            }
        }
        return false;
}


bool GeographicMapCellPositionTracking_updateEnd(GeographicMapCellPositionTracking* this) {
        if (this->currentGeographicMapCellPosition != this->previousGeographicMapCellPosition) {
            this->previousGeographicMapCellPosition = this->currentGeographicMapCellPosition;
            return true;
        }
        return false;
}


GeographicMapCellPosition* GeographicMapCellPositionTracking_getPreviousGeographicMapCellPosition(GeographicMapCellPositionTracking* this) {
        return this->previousGeographicMapCellPosition;
}


GeographicMapCellPosition* GeographicMapCellPositionTracking_getCurrentGeographicMapCellPosition(GeographicMapCellPositionTracking* this) {
        return this->currentGeographicMapCellPosition;
}

