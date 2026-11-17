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
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct BasicGeographicMapUtil BasicGeographicMapUtil;
struct BasicGeographicMapUtil {
    LogUtil* logUtil;
};

static BasicGeographicMapUtil* BasicGeographicMapUtil_instance;

BasicGeographicMapUtil* BasicGeographicMapUtil_new(void);
BasicGeographicMapUtil* BasicGeographicMapUtil_getInstance(void);
int32_t BasicGeographicMapUtil_getBorderingRow(BasicGeographicMapUtil* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);
int32_t BasicGeographicMapUtil_getBorderingColumn(BasicGeographicMapUtil* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition);
bool BasicGeographicMapUtil_isSameCellPosition(BasicGeographicMapUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition);
Layer** BasicGeographicMapUtil_createAllBinaryTiledLayerArray(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray);
Layer** BasicGeographicMapUtil_getAllBinaryTiledLayerArray(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray, Layer** tiledLayerArray, int32_t startIndex);
void BasicGeographicMapUtil_move(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray, int32_t dx, int32_t dy);
void BasicGeographicMapUtil_setPosition(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y);

// Static fields with runtime initializers: call this once at startup
void BasicGeographicMapUtil_staticInit(void) {
    BasicGeographicMapUtil_instance = BasicGeographicMapUtil_new();
}

static void BasicGeographicMapUtil_initFields(BasicGeographicMapUtil* this) {
    this->logUtil = LogUtil_getInstance();
}

void BasicGeographicMapUtil_init(BasicGeographicMapUtil* this) {
    BasicGeographicMapUtil_initFields(this);
}

BasicGeographicMapUtil* BasicGeographicMapUtil_new(void) {
    BasicGeographicMapUtil* this = calloc(1, sizeof(BasicGeographicMapUtil));
    BasicGeographicMapUtil_init(this);
    return this;
}


BasicGeographicMapUtil* BasicGeographicMapUtil_getInstance(void) {
        return BasicGeographicMapUtil_instance;
}


// throws Exception
int32_t BasicGeographicMapUtil_getBorderingRow(BasicGeographicMapUtil* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition) {
        int32_t LOCATION_CHANGE = 1;
        switch (direction) {
            case 0: {
                return GeographicMapCellPosition_getRow(oldGeographicMapCellPosition);
            }
            case 1: {
                return GeographicMapCellPosition_getRow(oldGeographicMapCellPosition);
            }
            case 2: {
                return GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) + LOCATION_CHANGE;
            }
            case 3: {
                return GeographicMapCellPosition_getRow(oldGeographicMapCellPosition) - LOCATION_CHANGE;
            }
            default: {
                java_throw(java_exception_new("Exception", "Only Four Directions"));
            }
        }
}


// throws Exception
int32_t BasicGeographicMapUtil_getBorderingColumn(BasicGeographicMapUtil* this, int32_t direction, GeographicMapCellPosition* oldGeographicMapCellPosition) {
        int32_t LOCATION_CHANGE = 1;
        switch (direction) {
            case 0: {
                return GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) - LOCATION_CHANGE;
            }
            case 1: {
                return GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition) + LOCATION_CHANGE;
            }
            case 2: {
                return GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition);
            }
            case 3: {
                return GeographicMapCellPosition_getColumn(oldGeographicMapCellPosition);
            }
            default: {
                java_throw(java_exception_new("Exception", "Only Four Directions"));
            }
        }
}


// throws Exception
bool BasicGeographicMapUtil_isSameCellPosition(BasicGeographicMapUtil* this, GeographicMapCellPosition* fromGeographicMapCellPosition, GeographicMapCellPosition* toGeographicMapCellPosition) {
        int32_t fromColumn = GeographicMapCellPosition_getColumn(fromGeographicMapCellPosition);
        int32_t fromRow = GeographicMapCellPosition_getRow(fromGeographicMapCellPosition);
        int32_t goColumn = GeographicMapCellPosition_getColumn(toGeographicMapCellPosition);
        int32_t goRow = GeographicMapCellPosition_getRow(toGeographicMapCellPosition);
        if (fromColumn == goColumn && fromRow == goRow) {
            return true;
        } else {
            return false;
        }
}


Layer** BasicGeographicMapUtil_createAllBinaryTiledLayerArray(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray) {
        Layer** tiledLayerArray = ((Layer**) java_array_new(sizeof(Layer*), java_array_length(geographicMapInterfaceArray)));
        return BasicGeographicMapUtil_getAllBinaryTiledLayerArray(this, geographicMapInterfaceArray, tiledLayerArray, 0);
}


Layer** BasicGeographicMapUtil_getAllBinaryTiledLayerArray(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray, Layer** tiledLayerArray, int32_t startIndex) {
        BasicGeographicMap* geographicMapInterface = nullptr;
        int32_t size = java_array_length(geographicMapInterfaceArray);
        int32_t count = 0;
        for (int32_t index = size + startIndex; --index >= startIndex; ) {
            geographicMapInterface = geographicMapInterfaceArray[index];
            tiledLayerArray[count++] = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        }
        return tiledLayerArray;
}


void BasicGeographicMapUtil_move(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray, int32_t dx, int32_t dy) {
        BasicGeographicMap* geographicMapInterface = nullptr;
        int32_t size = java_array_length(geographicMapInterfaceArray);
        for (int32_t index = size; --index >= 0; ) {
            geographicMapInterface = geographicMapInterfaceArray[index];
            JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), moveDXY, dx, dy);
        }
}


void BasicGeographicMapUtil_setPosition(BasicGeographicMapUtil* this, BasicGeographicMap** geographicMapInterfaceArray, int32_t x, int32_t y) {
        BasicGeographicMap* geographicMapInterface = nullptr;
        int32_t size = java_array_length(geographicMapInterfaceArray);
        for (int32_t index = size; --index >= 0; ) {
            geographicMapInterface = geographicMapInterfaceArray[index];
            JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), setPosition, x, y, JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getZP));
        }
}

