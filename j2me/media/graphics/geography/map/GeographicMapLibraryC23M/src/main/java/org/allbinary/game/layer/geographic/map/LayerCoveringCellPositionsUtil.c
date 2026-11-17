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
#include "org/allbinary/media/graphics/geography/map/CellPositionsUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"

typedef struct LayerCoveringCellPositionsUtil LayerCoveringCellPositionsUtil;
struct LayerCoveringCellPositionsUtil {
    CellPositionsUtil* cellPositionsUtil;
};

static LayerCoveringCellPositionsUtil* LayerCoveringCellPositionsUtil_instance;

LayerCoveringCellPositionsUtil* LayerCoveringCellPositionsUtil_new(void);
LayerCoveringCellPositionsUtil* LayerCoveringCellPositionsUtil_getInstance(void);
BasicArrayList* LayerCoveringCellPositionsUtil_getAllXY(LayerCoveringCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t x, int32_t y, BasicArrayList* reusableList);
BasicArrayList* LayerCoveringCellPositionsUtil_getAll(LayerCoveringCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topLeftGeographicMapCellPosition, AllBinaryLayer* layerInterface, BasicArrayList* reusableList);

// Static fields with runtime initializers: call this once at startup
void LayerCoveringCellPositionsUtil_staticInit(void) {
    LayerCoveringCellPositionsUtil_instance = LayerCoveringCellPositionsUtil_new();
}

static void LayerCoveringCellPositionsUtil_initFields(LayerCoveringCellPositionsUtil* this) {
    this->cellPositionsUtil = CellPositionsUtil_getInstance();
}

void LayerCoveringCellPositionsUtil_init(LayerCoveringCellPositionsUtil* this) {
    LayerCoveringCellPositionsUtil_initFields(this);
}

LayerCoveringCellPositionsUtil* LayerCoveringCellPositionsUtil_new(void) {
    LayerCoveringCellPositionsUtil* this = calloc(1, sizeof(LayerCoveringCellPositionsUtil));
    LayerCoveringCellPositionsUtil_init(this);
    return this;
}


LayerCoveringCellPositionsUtil* LayerCoveringCellPositionsUtil_getInstance(void) {
        return LayerCoveringCellPositionsUtil_instance;
}


// throws Exception
BasicArrayList* LayerCoveringCellPositionsUtil_getAllXY(LayerCoveringCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, AllBinaryLayer* layerInterface, int32_t x, int32_t y, BasicArrayList* reusableList) {
        GeographicMapCellPosition* topLeftGeographicMapCellPosition = BasicGeographicMap_getCellPositionAtXY(geographicMapInterface, x, y);
        return LayerCoveringCellPositionsUtil_getAll(this, geographicMapInterface, topLeftGeographicMapCellPosition, layerInterface, reusableList);
}


// throws Exception
BasicArrayList* LayerCoveringCellPositionsUtil_getAll(LayerCoveringCellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topLeftGeographicMapCellPosition, AllBinaryLayer* layerInterface, BasicArrayList* reusableList) {
        BasicArrayList_clear(reusableList);
        int32_t columns = AllBinaryLayer_getWidth(layerInterface) / JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getCellWidth);
        int32_t rows = AllBinaryLayer_getHeight(layerInterface) / JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getCellHeight);
        if (columns == 0) {
            columns = 1;
        }
        if (rows == 0) {
            rows = 1;
        }
        return CellPositionsUtil_getAll(this->cellPositionsUtil, geographicMapInterface, topLeftGeographicMapCellPosition, columns, rows, reusableList);
}

