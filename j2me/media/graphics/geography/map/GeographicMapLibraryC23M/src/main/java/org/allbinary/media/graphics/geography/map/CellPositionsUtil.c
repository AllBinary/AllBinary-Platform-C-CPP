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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct CellPositionsUtil CellPositionsUtil;
struct CellPositionsUtil {
    BasicArrayList* reusableSingleThreadedSurroundingList;
    int32_t** surroundArray;
};

static CellPositionsUtil* CellPositionsUtil_instance;

CellPositionsUtil* CellPositionsUtil_new(void);
CellPositionsUtil* CellPositionsUtil_getInstance(void);
BasicArrayList* CellPositionsUtil_getAll(CellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topRightGeographicMapCellPosition, int32_t columns, int32_t rows, BasicArrayList* reusableList);
BasicArrayList* CellPositionsUtil_getAllSurrounding(CellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, BasicArrayList* occupyList, BasicArrayList* reusableList);
BasicArrayList* CellPositionsUtil_getAllSurroundingAt(CellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* layerGeographicMapCellPosition, BasicArrayList* reusableSurroundingList);

// Static fields with runtime initializers: call this once at startup
void CellPositionsUtil_staticInit(void) {
    CellPositionsUtil_instance = CellPositionsUtil_new();
}

static void CellPositionsUtil_initFields(CellPositionsUtil* this) {
    this->reusableSingleThreadedSurroundingList = BasicArrayListS_new(8);
    this->surroundArray = ((int32_t**) java_array_from(sizeof(int32_t*), sizeof((int32_t*[]){ ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ -1, -1 }) / sizeof(int32_t), (int32_t[]){ -1, -1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, -1 }) / sizeof(int32_t), (int32_t[]){ 0, -1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1, -1 }) / sizeof(int32_t), (int32_t[]){ 1, -1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ -1, 1 }) / sizeof(int32_t), (int32_t[]){ -1, 1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, 1 }) / sizeof(int32_t), (int32_t[]){ 0, 1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1, 1 }) / sizeof(int32_t), (int32_t[]){ 1, 1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1, 0 }) / sizeof(int32_t), (int32_t[]){ 1, 0 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ -1, 0 }) / sizeof(int32_t), (int32_t[]){ -1, 0 })) }) / sizeof(int32_t*), (int32_t*[]){ ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ -1, -1 }) / sizeof(int32_t), (int32_t[]){ -1, -1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, -1 }) / sizeof(int32_t), (int32_t[]){ 0, -1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1, -1 }) / sizeof(int32_t), (int32_t[]){ 1, -1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ -1, 1 }) / sizeof(int32_t), (int32_t[]){ -1, 1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 0, 1 }) / sizeof(int32_t), (int32_t[]){ 0, 1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1, 1 }) / sizeof(int32_t), (int32_t[]){ 1, 1 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ 1, 0 }) / sizeof(int32_t), (int32_t[]){ 1, 0 })), ((int32_t*) java_array_from(sizeof(int32_t), sizeof((int32_t[]){ -1, 0 }) / sizeof(int32_t), (int32_t[]){ -1, 0 })) }));
}

void CellPositionsUtil_init(CellPositionsUtil* this) {
    CellPositionsUtil_initFields(this);
}

CellPositionsUtil* CellPositionsUtil_new(void) {
    CellPositionsUtil* this = calloc(1, sizeof(CellPositionsUtil));
    CellPositionsUtil_init(this);
    return this;
}


CellPositionsUtil* CellPositionsUtil_getInstance(void) {
        return CellPositionsUtil_instance;
}


// throws Exception
BasicArrayList* CellPositionsUtil_getAll(CellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* topRightGeographicMapCellPosition, int32_t columns, int32_t rows, BasicArrayList* reusableList) {
        BasicArrayList_clear(reusableList);
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface);
        int32_t lastColumn = GeographicMapCellPosition_getColumn(topRightGeographicMapCellPosition) + columns;
        int32_t lastRow = GeographicMapCellPosition_getRow(topRightGeographicMapCellPosition) + rows;
        if ((columns > 1 && lastColumn > JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getColumns)) || (rows > 1 && lastRow > JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getRows))) {
            return reusableList;
        }
        for (int32_t rowIndex = 0; rowIndex < rows; rowIndex++) {
            for (int32_t columnIndex = 0; columnIndex < columns; columnIndex++) {
                GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, GeographicMapCellPosition_getColumn(topRightGeographicMapCellPosition) + columnIndex, GeographicMapCellPosition_getRow(topRightGeographicMapCellPosition) + rowIndex);
                BasicArrayList_add(reusableList, geographicMapCellPosition);
            }
        }
        return reusableList;
}


// throws Exception
BasicArrayList* CellPositionsUtil_getAllSurrounding(CellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, BasicArrayList* occupyList, BasicArrayList* reusableList) {
        BasicArrayList_clear(reusableList);
        for (int32_t index = BasicArrayList_size(occupyList) - 1; index >= 0; index--) {
            GeographicMapCellPosition* layerGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(occupyList, index));
            BasicArrayList* surroundingGeographicMapCellPositionList = CellPositionsUtil_getAllSurroundingAt(this, geographicMapInterface, layerGeographicMapCellPosition, this->reusableSingleThreadedSurroundingList);
            for (int32_t index2 = BasicArrayList_size(surroundingGeographicMapCellPositionList) - 1; index2 >= 0; index2--) {
                GeographicMapCellPosition* geographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(surroundingGeographicMapCellPositionList, index2));
                if (!BasicArrayList_contains(reusableList, geographicMapCellPosition) && !BasicArrayList_contains(occupyList, geographicMapCellPosition)) {
                    BasicArrayList_add(reusableList, geographicMapCellPosition);
                }
            }
        }
        return reusableList;
}


// throws Exception
BasicArrayList* CellPositionsUtil_getAllSurroundingAt(CellPositionsUtil* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* layerGeographicMapCellPosition, BasicArrayList* reusableSurroundingList) {
        BasicArrayList_clear(reusableSurroundingList);
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface);
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        int32_t row = 0;
        int32_t column = 0;
        for (int32_t index = 0; index < 8; index++) {
            column = GeographicMapCellPosition_getColumn(layerGeographicMapCellPosition) + this->surroundArray[index][0];
            row = GeographicMapCellPosition_getRow(layerGeographicMapCellPosition) + this->surroundArray[index][1];
            if (AllBinaryTiledLayer_isOnTileLayer(tiledLayer, column, row)) {
                GeographicMapCellPosition* geographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, row);
                BasicArrayList_add(reusableSurroundingList, geographicMapCellPosition);
            }
        }
        return reusableSurroundingList;
}

