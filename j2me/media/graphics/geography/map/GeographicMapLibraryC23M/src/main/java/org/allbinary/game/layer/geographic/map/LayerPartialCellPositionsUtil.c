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
// package org.allbinary.game.layer.geographic.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/SimpleGeographicMapCellPositionFactory.h"

typedef struct LayerPartialCellPositionsUtil LayerPartialCellPositionsUtil;
struct LayerPartialCellPositionsUtil {
    char unused;
};

static LayerPartialCellPositionsUtil* LayerPartialCellPositionsUtil_instance;

LayerPartialCellPositionsUtil* LayerPartialCellPositionsUtil_new(void);
BasicArrayList* LayerPartialCellPositionsUtil_getAll(LayerPartialCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, BasicArrayList* reusableList);
BasicArrayList* LayerPartialCellPositionsUtil_getAllDXY(LayerPartialCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t dx, int32_t dy, BasicArrayList* reusableList);
LayerPartialCellPositionsUtil* LayerPartialCellPositionsUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LayerPartialCellPositionsUtil_staticInit(void) {
    LayerPartialCellPositionsUtil_instance = LayerPartialCellPositionsUtil_new();
}

void LayerPartialCellPositionsUtil_init(LayerPartialCellPositionsUtil* this) {
}

LayerPartialCellPositionsUtil* LayerPartialCellPositionsUtil_new(void) {
    LayerPartialCellPositionsUtil* this = calloc(1, sizeof(LayerPartialCellPositionsUtil));
    LayerPartialCellPositionsUtil_init(this);
    return this;
}


// throws Exception
BasicArrayList* LayerPartialCellPositionsUtil_getAll(LayerPartialCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, BasicArrayList* reusableList) {
        BasicArrayList_clear(reusableList);
        GeographicMapCellPosition* topLeftGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface), AllBinaryLayer_getYP(layerInterface));
        GeographicMapCellPosition* topRightGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getWidth(layerInterface), AllBinaryLayer_getYP(layerInterface));
        GeographicMapCellPosition* bottomLeftGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface), AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHeight(layerInterface));
        GeographicMapCellPosition* bottomRightGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getWidth(layerInterface), AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHeight(layerInterface));
        if (topLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            BasicArrayList_add(reusableList, topLeftGeographicMapCellPosition);
        }
        if (topRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && topLeftGeographicMapCellPosition != topRightGeographicMapCellPosition) {
            BasicArrayList_add(reusableList, topRightGeographicMapCellPosition);
        }
        if (bottomLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && !BasicArrayList_contains(reusableList, bottomLeftGeographicMapCellPosition)) {
            BasicArrayList_add(reusableList, bottomLeftGeographicMapCellPosition);
        }
        if (bottomRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && !BasicArrayList_contains(reusableList, bottomRightGeographicMapCellPosition)) {
            BasicArrayList_add(reusableList, bottomRightGeographicMapCellPosition);
        }
        return reusableList;
}


// throws Exception
BasicArrayList* LayerPartialCellPositionsUtil_getAllDXY(LayerPartialCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t dx, int32_t dy, BasicArrayList* reusableList) {
        BasicArrayList_clear(reusableList);
        GeographicMapCellPosition* topLeftGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface) + dx, AllBinaryLayer_getYP(layerInterface) + dy);
        GeographicMapCellPosition* topRightGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getWidth(layerInterface) + dx, AllBinaryLayer_getYP(layerInterface) + dy);
        GeographicMapCellPosition* bottomLeftGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface) + dx, AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHeight(layerInterface) + dy);
        GeographicMapCellPosition* bottomRightGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXYNoThrow(geographicMapInterface, AllBinaryLayer_getXP(layerInterface) + AllBinaryLayer_getWidth(layerInterface) + dx, AllBinaryLayer_getYP(layerInterface) + AllBinaryLayer_getHeight(layerInterface) + dy);
        if (topLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION) {
            BasicArrayList_add(reusableList, topLeftGeographicMapCellPosition);
        }
        if (topRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && topLeftGeographicMapCellPosition != topRightGeographicMapCellPosition) {
            BasicArrayList_add(reusableList, topRightGeographicMapCellPosition);
        }
        if (bottomLeftGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && !BasicArrayList_contains(reusableList, bottomLeftGeographicMapCellPosition)) {
            BasicArrayList_add(reusableList, bottomLeftGeographicMapCellPosition);
        }
        if (bottomRightGeographicMapCellPosition != SimpleGeographicMapCellPositionFactory_NULL_GEOGRAPHIC_MAP_CELL_POSITION && !BasicArrayList_contains(reusableList, bottomRightGeographicMapCellPosition)) {
            BasicArrayList_add(reusableList, bottomRightGeographicMapCellPosition);
        }
        return reusableList;
}


LayerPartialCellPositionsUtil* LayerPartialCellPositionsUtil_getInstance(void) {
        return LayerPartialCellPositionsUtil_instance;
}

