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
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/logic/math/MathUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapInterface.h"

typedef struct BasicGeographicMap BasicGeographicMap;
struct BasicGeographicMap {
    SimpleGeographicMap base;
    GeographicMapInterface GeographicMapInterface_interface;
    MathUtil* mathUtil;
    BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory;
    GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface;
    GeographicMapCellTypeFactory* geographicMapCellTypeFactory;
};

BasicGeographicMap** BasicGeographicMap_NULL_BASIC_GEOGRAPHIC_MAP_ARRAY;

BasicGeographicMap* BasicGeographicMap_new(int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);

void BasicGeographicMap_init(BasicGeographicMap* this, int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory);
GeographicMapCellPosition* BasicGeographicMap_getCellPosition(BasicGeographicMap* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);
GeographicMapCellPosition* BasicGeographicMap_getCellPositionNoThrow(BasicGeographicMap* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);
bool BasicGeographicMap_isOfFourDirections(BasicGeographicMap* this, GeographicMapCellPosition* oldGeographicMapCellPosition, GeographicMapCellPosition* newGeographicMapCellPosition);
GeographicMapCellPosition* BasicGeographicMap_getCellPositionAtXY(BasicGeographicMap* this, int32_t x, int32_t y);
GeographicMapCellPosition* BasicGeographicMap_getCellPositionAtXYNoThrow(BasicGeographicMap* this, int32_t x, int32_t y);
bool BasicGeographicMap_isOnMap(BasicGeographicMap* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* BasicGeographicMap_getCellPositionAtNoThrow(BasicGeographicMap* this, int32_t x, int32_t y, int32_t x2, int32_t y2, BasicArrayList* geographicMapCellPositionList);
bool BasicGeographicMap_getCellPositionsAt(BasicGeographicMap* this, Layer* layer, GeographicMapCellPosition*** currentCellPositionArray, GeographicMapCellPosition*** cellPositionArray);
GeographicMapCellType* BasicGeographicMap_getCellTypeAtXY(BasicGeographicMap* this, int32_t x, int32_t y);
BasicGeographicMapCellPositionFactory* BasicGeographicMap_getGeographicMapCellPositionFactory(BasicGeographicMap* this);
GeographicMapCellPositionFactoryInterface* BasicGeographicMap_getGeographicMapCellPositionFactoryInterface(BasicGeographicMap* this);
GeographicMapCellTypeFactory* BasicGeographicMap_getGeographicMapCellTypeFactory(BasicGeographicMap* this);
int32_t BasicGeographicMap_getId(BasicGeographicMap* this);
const char* BasicGeographicMap_getName(BasicGeographicMap* this);
void BasicGeographicMap_reset(BasicGeographicMap* this);
AllBinaryTiledLayer* BasicGeographicMap_getAllBinaryTiledLayer(BasicGeographicMap* this);
int32_t BasicGeographicMap_getCellTypeFromMapCellTypeInt(BasicGeographicMap* this, int32_t cellTypeId);
GeographicMapCellType* BasicGeographicMap_getCellTypeAt(BasicGeographicMap* this, GeographicMapCellPosition* cellPosition);
BasicColor* BasicGeographicMap_getForegroundBasicColor(BasicGeographicMap* this);
BasicColor* BasicGeographicMap_getBackgroundBasicColor(BasicGeographicMap* this);

// Static fields with runtime initializers: call this once at startup
void BasicGeographicMap_staticInit(void) {
    BasicGeographicMap_NULL_BASIC_GEOGRAPHIC_MAP_ARRAY = ((BasicGeographicMap**) java_array_new(sizeof(BasicGeographicMap*), 0));
}

static void BasicGeographicMap_initFields(BasicGeographicMap* this) {
    this->mathUtil = MathUtil_getInstance();
    
    
    
}


void BasicGeographicMap_init(BasicGeographicMap* this, int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) {
        SimpleGeographicMap_init(&this->base, id, name, cellTypeIdToGeographicMapCellType, tiledLayer, foregroundBasicColor, backgroundBasicColor);
        BasicGeographicMap_initFields(this);
        this->geographicMapCellPositionFactoryInterface = geographicMapCellPositionFactoryInterface;
        this->geographicMapCellPositionFactory = GeographicMapCellPositionBaseFactory_getInstance(geographicMapCellPositionBaseFactory, this);
        this->geographicMapCellTypeFactory = geographicMapCellTypeFactory;
}

BasicGeographicMap* BasicGeographicMap_new(int32_t id, const char* name, int32_t* cellTypeIdToGeographicMapCellType, AllBinaryTiledLayer* tiledLayer, BasicColor* foregroundBasicColor, BasicColor* backgroundBasicColor, GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface, GeographicMapCellPositionBaseFactory* geographicMapCellPositionBaseFactory, GeographicMapCellTypeFactory* geographicMapCellTypeFactory) {
    BasicGeographicMap* this = calloc(1, sizeof(BasicGeographicMap));
    BasicGeographicMap_init(this, id, name, cellTypeIdToGeographicMapCellType, tiledLayer, foregroundBasicColor, backgroundBasicColor, geographicMapCellPositionFactoryInterface, geographicMapCellPositionBaseFactory, geographicMapCellTypeFactory);
    return this;
}


// throws Exception
GeographicMapCellPosition* BasicGeographicMap_getCellPosition(BasicGeographicMap* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition) {
        switch (direction) {
            case 0: {
                return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) - 1, GeographicMapCellPosition_getRow(oldGeographicMapCellPosition));
            }
            case 1: {
                return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) + 1, GeographicMapCellPosition_getRow(oldGeographicMapCellPosition));
            }
            case 2: {
                return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition), GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) - 1);
            }
            case 3: {
                return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition), GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) + 1);
            }
            default: {
                java_throw(java_exception_new("Exception", "Only Four Directions"));
            }
        }
}


// throws Exception
GeographicMapCellPosition* BasicGeographicMap_getCellPositionNoThrow(BasicGeographicMap* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition) {
        switch (direction) {
            case 0: {
                if (GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) - 1 >= 0) {
                    return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) - 1, GeographicMapCellPosition_getRow(oldGeographicMapCellPosition));
                } else {
                    return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                }
            }
            case 1: {
                if (GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) + 1 < JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this), getColumns)) {
                    return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) + 1, GeographicMapCellPosition_getRow(oldGeographicMapCellPosition));
                } else {
                    return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                }
            }
            case 2: {
                if (GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) - 1 >= 0) {
                    return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition), GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) - 1);
                } else {
                    return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                }
            }
            case 3: {
                if (GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) + 1 < JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(this), getRows)) {
                    return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition), GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) + 1);
                } else {
                    return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
                }
            }
            default: {
                return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
            }
        }
}


// throws Exception
bool BasicGeographicMap_isOfFourDirections(BasicGeographicMap* this, GeographicMapCellPosition* oldGeographicMapCellPosition, GeographicMapCellPosition* newGeographicMapCellPosition) {
        for (int32_t index = 0; index < 4; index++) {
            if (newGeographicMapCellPosition == BasicGeographicMap_getCellPositionNoThrow(this, index, oldGeographicMapCellPosition)) {
                return true;
            }
        }
        return false;
}


// throws Exception
GeographicMapCellPosition* BasicGeographicMap_getCellPositionAtXY(BasicGeographicMap* this, int32_t x, int32_t y) {
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this);
        int32_t i_column = MathUtil_abs(this->mathUtil, x / AllBinaryTiledLayer_getCellHeight(allBinaryTiledLayer));
        int32_t i_row = MathUtil_abs(this->mathUtil, y / AllBinaryTiledLayer_getCellWidth(allBinaryTiledLayer));
        return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, i_column, i_row);
}


GeographicMapCellPosition* BasicGeographicMap_getCellPositionAtXYNoThrow(BasicGeographicMap* this, int32_t x, int32_t y) {
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this);
        int32_t i_column = MathUtil_abs(this->mathUtil, x / AllBinaryTiledLayer_getCellHeight(allBinaryTiledLayer));
        int32_t i_row = MathUtil_abs(this->mathUtil, y / AllBinaryTiledLayer_getCellWidth(allBinaryTiledLayer));
        if (AllBinaryTiledLayer_getColumns(allBinaryTiledLayer) > i_column && AllBinaryTiledLayer_getRows(allBinaryTiledLayer) > i_row) {
            JAVA_TRY {
                return BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, i_column, i_row);
            } JAVA_CATCH(Exception, e) {
                return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
            } JAVA_END_TRY;
        } else {
            return SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION;
        }
}


// throws Exception
bool BasicGeographicMap_isOnMap(BasicGeographicMap* this, GeographicMapCellPosition* geographicMapCellPosition) {
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this);
        int32_t i_column = GeographicMapCellPosition_getColumn(geographicMapCellPosition);
        int32_t i_row = GeographicMapCellPosition_getRow(geographicMapCellPosition);
        if (AllBinaryTiledLayer_getColumns(allBinaryTiledLayer) > i_column && AllBinaryTiledLayer_getRows(allBinaryTiledLayer) > i_row) {
            return true;
        } else {
            return false;
        }
}


// throws Exception
BasicArrayList* BasicGeographicMap_getCellPositionAtNoThrow(BasicGeographicMap* this, int32_t x, int32_t y, int32_t x2, int32_t y2, BasicArrayList* geographicMapCellPositionList) {
        BasicArrayList_clear(geographicMapCellPositionList);
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this);
        int32_t i_columnMin = MathUtil_abs(this->mathUtil, x / AllBinaryTiledLayer_getCellHeight(allBinaryTiledLayer));
        int32_t i_rowMin = MathUtil_abs(this->mathUtil, y / AllBinaryTiledLayer_getCellWidth(allBinaryTiledLayer));
        int32_t i_columnMax = MathUtil_abs(this->mathUtil, x2 / AllBinaryTiledLayer_getCellHeight(allBinaryTiledLayer)) + 1;
        int32_t i_rowMax = MathUtil_abs(this->mathUtil, y2 / AllBinaryTiledLayer_getCellWidth(allBinaryTiledLayer)) + 1;
        for (int32_t columnIndex = i_columnMin; columnIndex < i_columnMax; columnIndex++) {
            for (int32_t rowIndex = i_rowMin; rowIndex < i_rowMax; rowIndex++) {
                if (AllBinaryTiledLayer_getColumns(allBinaryTiledLayer) > columnIndex && AllBinaryTiledLayer_getRows(allBinaryTiledLayer) > rowIndex) {
                    BasicArrayList_add(geographicMapCellPositionList, BasicGeographicMapCellPositionFactory_getAt(this->geographicMapCellPositionFactory, columnIndex, rowIndex));
                }
            }
        }
        return geographicMapCellPositionList;
}


// throws Exception
bool BasicGeographicMap_getCellPositionsAt(BasicGeographicMap* this, Layer* layer, GeographicMapCellPosition*** currentCellPositionArray, GeographicMapCellPosition*** cellPositionArray) {
        bool hasChanged = false;
        int32_t size = java_array_length(cellPositionArray);
        int32_t size2 = java_array_length(cellPositionArray[0]);
        int32_t xPortion = Layer_getXP(layer) / (size - 1);
        int32_t yPortion = Layer_getYP(layer) / (size - 1);
        for (int32_t index = 0; index < size; index++) {
            for (int32_t index2 = 0; index2 < size2; index2++) {
                int32_t x = xPortion * index;
                int32_t y = yPortion * index;
                cellPositionArray[index][index2] = BasicGeographicMap_getCellPositionAtXY(this, x, y);
                if (currentCellPositionArray[index][index2] != cellPositionArray[index][index2]) {
                    hasChanged = true;
                }
            }
        }
        return hasChanged;
}


// throws Exception
GeographicMapCellType* BasicGeographicMap_getCellTypeAtXY(BasicGeographicMap* this, int32_t x, int32_t y) {
        GeographicMapCellPosition* cellPosition = BasicGeographicMap_getCellPositionAtXY(this, x, y);
        return BasicGeographicMap_getCellTypeAt(this, cellPosition);
}


BasicGeographicMapCellPositionFactory* BasicGeographicMap_getGeographicMapCellPositionFactory(BasicGeographicMap* this) {
        return this->geographicMapCellPositionFactory;
}


GeographicMapCellPositionFactoryInterface* BasicGeographicMap_getGeographicMapCellPositionFactoryInterface(BasicGeographicMap* this) {
        return this->geographicMapCellPositionFactoryInterface;
}


GeographicMapCellTypeFactory* BasicGeographicMap_getGeographicMapCellTypeFactory(BasicGeographicMap* this) {
        return this->geographicMapCellTypeFactory;
}


int32_t BasicGeographicMap_getId(BasicGeographicMap* this) {
        return SimpleGeographicMap_getId((&this->base));
}


const char* BasicGeographicMap_getName(BasicGeographicMap* this) {
        return SimpleGeographicMap_getName((&this->base));
}


void BasicGeographicMap_reset(BasicGeographicMap* this) {
        SimpleGeographicMap_reset((&this->base));
}


AllBinaryTiledLayer* BasicGeographicMap_getAllBinaryTiledLayer(BasicGeographicMap* this) {
        return SimpleGeographicMap_getAllBinaryTiledLayer((&this->base));
}


int32_t BasicGeographicMap_getCellTypeFromMapCellTypeInt(BasicGeographicMap* this, int32_t cellTypeId) {
        return SimpleGeographicMap_getCellTypeFromMapCellTypeInt((&this->base), cellTypeId);
}


// throws Exception
GeographicMapCellType* BasicGeographicMap_getCellTypeAt(BasicGeographicMap* this, GeographicMapCellPosition* cellPosition) {
        return SimpleGeographicMap_getCellTypeAt((&this->base), cellPosition);
}


BasicColor* BasicGeographicMap_getForegroundBasicColor(BasicGeographicMap* this) {
        return SimpleGeographicMap_getForegroundBasicColor((&this->base));
}


BasicColor* BasicGeographicMap_getBackgroundBasicColor(BasicGeographicMap* this) {
        return SimpleGeographicMap_getBackgroundBasicColor((&this->base));
}

