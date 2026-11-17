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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/graphics/paint/PaintableInterface.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/layer/NamedInterface.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AllBinaryTiledLayer AllBinaryTiledLayer;
struct AllBinaryTiledLayer {
    Layer base;
    NamedInterface NamedInterface_interface;
    PaintableInterface PaintableInterface_interface;
    int32_t cellWidth;
    int32_t cellHeight;
    int32_t halfWidth;
    int32_t halfHeight;
    int32_t halfCellWidth;
    int32_t halfCellHeight;
    int32_t dataId;
};


AllBinaryTiledLayer* AllBinaryTiledLayer_new(int32_t dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight);

void AllBinaryTiledLayer_init(AllBinaryTiledLayer* this, int32_t dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight);
void AllBinaryTiledLayer_setCells(AllBinaryTiledLayer* this, int32_t** mapTwoDArray);
void AllBinaryTiledLayer_updateCells(AllBinaryTiledLayer* this, int32_t** mapTwoDArray, int32_t fromTileId, int32_t toTileId);
const char* AllBinaryTiledLayer_getName(AllBinaryTiledLayer* this);
void AllBinaryTiledLayer_paint(AllBinaryTiledLayer* this, Graphics* graphics);
void AllBinaryTiledLayer_paintThreed(AllBinaryTiledLayer* this, Graphics* graphics);
int32_t AllBinaryTiledLayer_getX2(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getY2(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getZ2(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getCellWidth(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getCellHeight(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getCell(AllBinaryTiledLayer* this, int32_t col, int32_t row);
int32_t AllBinaryTiledLayer_getColumns(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getRows(AllBinaryTiledLayer* this);
void AllBinaryTiledLayer_setCell(AllBinaryTiledLayer* this, int32_t col, int32_t row, int32_t tileIndex);
int32_t AllBinaryTiledLayer_getHalfWidth(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getHalfHeight(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getDataId(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getHalfCellWidth(AllBinaryTiledLayer* this);
int32_t AllBinaryTiledLayer_getHalfCellHeight(AllBinaryTiledLayer* this);
bool AllBinaryTiledLayer_isOnTileLayer(AllBinaryTiledLayer* this, int32_t column, int32_t row);
int32_t AllBinaryTiledLayer_getAnimatedTile(AllBinaryTiledLayer* this, int32_t animationTileIndex);

static void AllBinaryTiledLayer_initFields(AllBinaryTiledLayer* this) {
    
    
    
    
    
    
    
}


void AllBinaryTiledLayer_init(AllBinaryTiledLayer* this, int32_t dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight) {
        Layer_init(&this->base, 0, 0);
        AllBinaryTiledLayer_initFields(this);
        this->dataId = dataId;
        AllBinaryTiledLayer_setLayerWidth(this, width);
        AllBinaryTiledLayer_setLayerHeight(this, height);
        Layer_setPosition((&this->base), 0, 0, 0);
        this->cellWidth = cellWidth;
        this->cellHeight = cellHeight;
        this->halfWidth = (AllBinaryTiledLayer_getWidth(this) >> 1);
        this->halfHeight = (AllBinaryTiledLayer_getHeight(this) >> 1);
        this->halfCellWidth = (cellWidth >> 1);
        this->halfCellHeight = (cellHeight >> 1);
}

AllBinaryTiledLayer* AllBinaryTiledLayer_new(int32_t dataId, int32_t width, int32_t height, int32_t cellWidth, int32_t cellHeight) {
    AllBinaryTiledLayer* this = calloc(1, sizeof(AllBinaryTiledLayer));
    AllBinaryTiledLayer_init(this, dataId, width, height, cellWidth, cellHeight);
    return this;
}


void AllBinaryTiledLayer_setCells(AllBinaryTiledLayer* this, int32_t** mapTwoDArray) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, "Start: r: ");
        StringMaker_appendint(stringBuffer, java_array_length(mapTwoDArray));
        StringMaker_append(stringBuffer, " c: ");
        StringMaker_appendint(stringBuffer, java_array_length(mapTwoDArray[0]));
        StringMaker_append(stringBuffer, " rows: ");
        StringMaker_appendint(stringBuffer, AllBinaryTiledLayer_getRows(this));
        StringMaker_append(stringBuffer, " columns: ");
        StringMaker_appendint(stringBuffer, AllBinaryTiledLayer_getColumns(this));
        JAVA_CALL(this->logUtil, putF, StringMaker_toString(stringBuffer), this, "setCells");
        int32_t rows = AllBinaryTiledLayer_getRows(this);
        int32_t columns = AllBinaryTiledLayer_getColumns(this);
        for (int32_t col = 0; col < columns; col++) {
            for (int32_t row = 0; row < rows; row++) {
                AllBinaryTiledLayer_setCell(this, col, row, mapTwoDArray[row][col]);
            }
        }
}


void AllBinaryTiledLayer_updateCells(AllBinaryTiledLayer* this, int32_t** mapTwoDArray, int32_t fromTileId, int32_t toTileId) {
        int32_t rows = AllBinaryTiledLayer_getRows(this);
        int32_t columns = AllBinaryTiledLayer_getColumns(this);
        for (int32_t col = 0; col < columns; col++) {
            for (int32_t row = 0; row < rows; row++) {
                if (fromTileId == mapTwoDArray[row][col]) {
                    mapTwoDArray[row][col] = toTileId;
                    AllBinaryTiledLayer_setCell(this, col, row, mapTwoDArray[row][col]);
                }
            }
        }
}


const char* AllBinaryTiledLayer_getName(AllBinaryTiledLayer* this) {
        return java_class_of(this);
}


void AllBinaryTiledLayer_paint(AllBinaryTiledLayer* this, Graphics* graphics) {
}


void AllBinaryTiledLayer_paintThreed(AllBinaryTiledLayer* this, Graphics* graphics) {
}


int32_t AllBinaryTiledLayer_getX2(AllBinaryTiledLayer* this) {
        return this->x + AllBinaryTiledLayer_getWidth(this);
}


int32_t AllBinaryTiledLayer_getY2(AllBinaryTiledLayer* this) {
        return this->y + AllBinaryTiledLayer_getHeight(this);
}


int32_t AllBinaryTiledLayer_getZ2(AllBinaryTiledLayer* this) {
        return ((int32_t) (this->z + AllBinaryTiledLayer_getDepth(this)));
}


int32_t AllBinaryTiledLayer_getCellWidth(AllBinaryTiledLayer* this) {
        return this->cellWidth;
}


int32_t AllBinaryTiledLayer_getCellHeight(AllBinaryTiledLayer* this) {
        return this->cellHeight;
}


int32_t AllBinaryTiledLayer_getCell(AllBinaryTiledLayer* this, int32_t col, int32_t row) {
        return -1;
}


int32_t AllBinaryTiledLayer_getColumns(AllBinaryTiledLayer* this) {
        return -1;
}


int32_t AllBinaryTiledLayer_getRows(AllBinaryTiledLayer* this) {
        return -1;
}


void AllBinaryTiledLayer_setCell(AllBinaryTiledLayer* this, int32_t col, int32_t row, int32_t tileIndex) {
}


int32_t AllBinaryTiledLayer_getHalfWidth(AllBinaryTiledLayer* this) {
        return this->halfWidth;
}


int32_t AllBinaryTiledLayer_getHalfHeight(AllBinaryTiledLayer* this) {
        return this->halfHeight;
}


int32_t AllBinaryTiledLayer_getDataId(AllBinaryTiledLayer* this) {
        return this->dataId;
}


int32_t AllBinaryTiledLayer_getHalfCellWidth(AllBinaryTiledLayer* this) {
        return this->halfCellWidth;
}


int32_t AllBinaryTiledLayer_getHalfCellHeight(AllBinaryTiledLayer* this) {
        return this->halfCellHeight;
}


bool AllBinaryTiledLayer_isOnTileLayer(AllBinaryTiledLayer* this, int32_t column, int32_t row) {
        if (AllBinaryTiledLayer_getColumns(this) > column && AllBinaryTiledLayer_getRows(this) > row && row >= 0 && column >= 0) {
            return true;
        } else {
            return false;
        }
}


int32_t AllBinaryTiledLayer_getAnimatedTile(AllBinaryTiledLayer* this, int32_t animationTileIndex) {
        return animationTileIndex;
}

