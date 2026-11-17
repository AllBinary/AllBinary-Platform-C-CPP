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
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct SimpleGeographicMap SimpleGeographicMap;
struct SimpleGeographicMap {
    CommonStrings* commonStrings;
    int32_t id;
    const char* name;
    int32_t* cellTypeIdToGeographicMapCellType;
    AllBinaryTiledLayer* tiledLayer;
    BasicColor* foregroundBasicColor;
    BasicColor* backgroundBasicColor;
    GeographicMapCellTypeFactory* geographicMapCellTypeFactory;
};


SimpleGeographicMap* SimpleGeographicMap_new(int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor);

void SimpleGeographicMap_init(SimpleGeographicMap* this, int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor);
int32_t SimpleGeographicMap_getId(SimpleGeographicMap* this);
const char* SimpleGeographicMap_getName(SimpleGeographicMap* this);
void SimpleGeographicMap_reset(SimpleGeographicMap* this);
AllBinaryTiledLayer* SimpleGeographicMap_getAllBinaryTiledLayer(SimpleGeographicMap* this);
GeographicMapCellType* SimpleGeographicMap_getCellTypeAt(SimpleGeographicMap* this, GeographicMapCellPosition* cellPosition);
int32_t SimpleGeographicMap_getCellTypeFromMapCellTypeInt(SimpleGeographicMap* this, int32_t cellTypeId);
BasicColor* SimpleGeographicMap_getForegroundBasicColor(SimpleGeographicMap* this);
static void SimpleGeographicMap_setForegroundBasicColor(SimpleGeographicMap* this, BasicColor* foregroundBasicColor);
BasicColor* SimpleGeographicMap_getBackgroundBasicColor(SimpleGeographicMap* this);
static void SimpleGeographicMap_setBackgroundBasicColor(SimpleGeographicMap* this, BasicColor* backgroundBasicColor);

static void SimpleGeographicMap_initFields(SimpleGeographicMap* this) {
    this->commonStrings = CommonStrings_getInstance();
    
    
    
    
    this->foregroundBasicColor = BasicColorFactory_getInstance()->NULL_COLOR;
    this->backgroundBasicColor = BasicColorFactory_getInstance()->NULL_COLOR;
    this->geographicMapCellTypeFactory = GeographicMapCellTypeFactory_getInstance();
}


void SimpleGeographicMap_init(SimpleGeographicMap* this, int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor) {
    SimpleGeographicMap_initFields(this);
        this->id = id;
        this->name = name;
        this->cellTypeIdToGeographicMapCellType = cellTypeIdToGeographicMapCellType;
        this->tiledLayer = tiledLayer;
        SimpleGeographicMap_setBackgroundBasicColor(this, backgroundBasicColor);
        SimpleGeographicMap_setForegroundBasicColor(this, foregroundBasicColor);
}

SimpleGeographicMap* SimpleGeographicMap_new(int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor) {
    SimpleGeographicMap* this = calloc(1, sizeof(SimpleGeographicMap));
    SimpleGeographicMap_init(this, id, name, cellTypeIdToGeographicMapCellType, tiledLayer, foregroundBasicColor, backgroundBasicColor);
    return this;
}


int32_t SimpleGeographicMap_getId(SimpleGeographicMap* this) {
        return this->id;
}


const char* SimpleGeographicMap_getName(SimpleGeographicMap* this) {
        return this->name;
}


void SimpleGeographicMap_reset(SimpleGeographicMap* this) {
}


AllBinaryTiledLayer* SimpleGeographicMap_getAllBinaryTiledLayer(SimpleGeographicMap* this) {
        return this->tiledLayer;
}


// throws Exception
GeographicMapCellType* SimpleGeographicMap_getCellTypeAt(SimpleGeographicMap* this, GeographicMapCellPosition* cellPosition) {
        int32_t i_column = GeographicMapCellPosition_getColumn(cellPosition);
        int32_t i_row = GeographicMapCellPosition_getRow(cellPosition);
        int32_t cellTypeId = AllBinaryTiledLayer_getCell(this->tiledLayer, i_column, i_row);
        if (cellTypeId < 0) {
            cellTypeId = AllBinaryTiledLayer_getAnimatedTile(this->tiledLayer, cellTypeId);
        }
        return GeographicMapCellTypeFactory_get(this->geographicMapCellTypeFactory, this->cellTypeIdToGeographicMapCellType[cellTypeId]);
}


int32_t SimpleGeographicMap_getCellTypeFromMapCellTypeInt(SimpleGeographicMap* this, int32_t cellTypeId) {
        return this->cellTypeIdToGeographicMapCellType[cellTypeId];
}


BasicColor* SimpleGeographicMap_getForegroundBasicColor(SimpleGeographicMap* this) {
        return this->foregroundBasicColor;
}


static void SimpleGeographicMap_setForegroundBasicColor(SimpleGeographicMap* this, BasicColor* foregroundBasicColor) {
        this->foregroundBasicColor = foregroundBasicColor;
}


BasicColor* SimpleGeographicMap_getBackgroundBasicColor(SimpleGeographicMap* this) {
        return this->backgroundBasicColor;
}


static void SimpleGeographicMap_setBackgroundBasicColor(SimpleGeographicMap* this, BasicColor* backgroundBasicColor) {
        this->backgroundBasicColor = backgroundBasicColor;
}

