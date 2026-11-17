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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/string/CommonSeps.h"

typedef struct BasicGeographicMapCellPositionFactory BasicGeographicMapCellPositionFactory;
struct BasicGeographicMapCellPositionFactory {
    LogUtil* logUtil;
    GeographicMapCellPosition*** geographicMapCellPositionArray;
    BasicGeographicMap* geographicMapInterface;
    GeographicMapCellPositionFactoryInterface* geographicMapCellPositionFactoryInterface;
    int32_t columns;
    int32_t rows;
    AllBinaryTiledLayer* tiledLayer;
};


BasicGeographicMapCellPositionFactory* BasicGeographicMapCellPositionFactory_new(BasicGeographicMap* geographicMapInterface);

void BasicGeographicMapCellPositionFactory_init(BasicGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface);
static void BasicGeographicMapCellPositionFactory_init(BasicGeographicMapCellPositionFactory* this);
void BasicGeographicMapCellPositionFactory_visit(BasicGeographicMapCellPositionFactory* this, GeographicMapCellPositionFactoryInitVisitorInterface* geographicMapCelPositionFactoryInitVisitorInterface);
GeographicMapCellPosition* BasicGeographicMapCellPositionFactory_getAt(BasicGeographicMapCellPositionFactory* this, int32_t i_column, int32_t i_row);
GeographicMapCellPosition* BasicGeographicMapCellPositionFactory_getInstance(BasicGeographicMapCellPositionFactory* this, GeographicMapCellPosition* anotherMapGeographicMapCellPosition);
GeographicMapCellPosition* BasicGeographicMapCellPositionFactory_createInstance(BasicGeographicMapCellPositionFactory* this, int32_t i_column, int32_t i_row, int32_t width, int32_t height);
int32_t BasicGeographicMapCellPositionFactory_getColumns(BasicGeographicMapCellPositionFactory* this);
int32_t BasicGeographicMapCellPositionFactory_getRows(BasicGeographicMapCellPositionFactory* this);

static void BasicGeographicMapCellPositionFactory_initFields(BasicGeographicMapCellPositionFactory* this) {
    this->logUtil = LogUtil_getInstance();
    
    
    
    
    
    
}


void BasicGeographicMapCellPositionFactory_init(BasicGeographicMapCellPositionFactory* this, BasicGeographicMap* geographicMapInterface) {
    BasicGeographicMapCellPositionFactory_initFields(this);
        this->geographicMapInterface = geographicMapInterface;
        this->geographicMapCellPositionFactoryInterface = BasicGeographicMap_getGeographicMapCellPositionFactoryInterface(this->geographicMapInterface);
        this->tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(this->geographicMapInterface);
        this->columns = AllBinaryTiledLayer_getColumns(this->tiledLayer);
        this->rows = AllBinaryTiledLayer_getRows(this->tiledLayer);
        this->geographicMapCellPositionArray = ((GeographicMapCellPosition***) java_array_new2(sizeof(GeographicMapCellPosition*), this->rows, this->columns));
        BasicGeographicMapCellPositionFactory_init(this);
}

BasicGeographicMapCellPositionFactory* BasicGeographicMapCellPositionFactory_new(BasicGeographicMap* geographicMapInterface) {
    BasicGeographicMapCellPositionFactory* this = calloc(1, sizeof(BasicGeographicMapCellPositionFactory));
    BasicGeographicMapCellPositionFactory_init(this, geographicMapInterface);
    return this;
}


// throws Exception
static void BasicGeographicMapCellPositionFactory_init(BasicGeographicMapCellPositionFactory* this) {
        AllBinaryTiledLayer* tiledLayer = this->tiledLayer;
        int32_t columns = BasicGeographicMapCellPositionFactory_getColumns(this);
        int32_t rows = BasicGeographicMapCellPositionFactory_getRows(this);
        int32_t width = AllBinaryTiledLayer_getCellWidth(tiledLayer);
        int32_t height = AllBinaryTiledLayer_getCellHeight(tiledLayer);
        for (int32_t column = 0; column < columns; column++) {
            for (int32_t row = 0; row < rows; row++) {
                BasicGeographicMapCellPositionFactory_createInstance(this, column, row, width, height);
            }
        }
}


// throws Exception
void BasicGeographicMapCellPositionFactory_visit(BasicGeographicMapCellPositionFactory* this, GeographicMapCellPositionFactoryInitVisitorInterface* geographicMapCelPositionFactoryInitVisitorInterface) {
        AllBinaryTiledLayer* tiledLayer = this->tiledLayer;
        int32_t columns = BasicGeographicMapCellPositionFactory_getColumns(this);
        int32_t rows = BasicGeographicMapCellPositionFactory_getRows(this);
        JAVA_TRY {
            GeographicMapCellPosition* cellPosition = nullptr;
            for (int32_t column = 0; column < columns; column++) {
                for (int32_t row = 0; row < rows; row++) {
                    cellPosition = BasicGeographicMapCellPositionFactory_getAt(this, column, row);
                    GeographicMapCellPositionFactoryInitVisitorInterface_visit(geographicMapCelPositionFactoryInitVisitorInterface, tiledLayer, cellPosition);
                }
            }
        } JAVA_CATCH(Exception, e) {
            CommonSeps* commonSeps = CommonSeps_getInstance();
            LogUtil_put(this->logUtil, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), commonSeps->BRACKET_OPEN), appendint, rows), append, commonSeps->BRACKET_CLOSE), append, commonSeps->BRACKET_OPEN), appendint, columns), append, commonSeps->BRACKET_CLOSE), toString), this, "visit", e);
            java_throw(e);
        } JAVA_END_TRY;
}


// throws Exception
GeographicMapCellPosition* BasicGeographicMapCellPositionFactory_getAt(BasicGeographicMapCellPositionFactory* this, int32_t i_column, int32_t i_row) {
        return this->geographicMapCellPositionArray[i_row][i_column];
}


// throws Exception
GeographicMapCellPosition* BasicGeographicMapCellPositionFactory_getInstance(BasicGeographicMapCellPositionFactory* this, GeographicMapCellPosition* anotherMapGeographicMapCellPosition) {
        return BasicGeographicMapCellPositionFactory_getAt(this, GeographicMapCellPosition_getColumn(anotherMapGeographicMapCellPosition), GeographicMapCellPosition_getRow(anotherMapGeographicMapCellPosition));
}


// throws Exception
GeographicMapCellPosition* BasicGeographicMapCellPositionFactory_createInstance(BasicGeographicMapCellPositionFactory* this, int32_t i_column, int32_t i_row, int32_t width, int32_t height) {
        Any* cellPositionCanBeNull = this->geographicMapCellPositionArray[i_row][i_column];
        if (cellPositionCanBeNull == nullptr) {
            cellPositionCanBeNull = GeographicMapCellPositionFactoryInterface_getInstance(this->geographicMapCellPositionFactoryInterface, this->geographicMapInterface, i_column, i_row, this->columns, this->rows, width, height);
            this->geographicMapCellPositionArray[i_row][i_column] = ((GeographicMapCellPosition*) cellPositionCanBeNull);
        }
        return ((GeographicMapCellPosition*) cellPositionCanBeNull);
}


int32_t BasicGeographicMapCellPositionFactory_getColumns(BasicGeographicMapCellPositionFactory* this) {
        return this->columns;
}


int32_t BasicGeographicMapCellPositionFactory_getRows(BasicGeographicMapCellPositionFactory* this) {
        return this->rows;
}

