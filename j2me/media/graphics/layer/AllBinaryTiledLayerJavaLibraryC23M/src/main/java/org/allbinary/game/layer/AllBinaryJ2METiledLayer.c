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
// #include "javax/microedition/lcdui/Font.h"
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/game/TiledLayer.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"

typedef struct AllBinaryJ2METiledLayer AllBinaryJ2METiledLayer;
struct AllBinaryJ2METiledLayer {
    AllBinaryTiledLayer base;
    TiledLayer* tiledLayerP;
    int32_t debugColor;
    Font* font2;
};


AllBinaryJ2METiledLayer* AllBinaryJ2METiledLayer_new(int32_t dataId, TiledLayer* tiledLayer, int32_t** mapTwoDArray, int32_t debugColor);

void AllBinaryJ2METiledLayer_init(AllBinaryJ2METiledLayer* this, int32_t dataId, TiledLayer* tiledLayer, int32_t** mapTwoDArray, int32_t debugColor);
void AllBinaryJ2METiledLayer_paint(AllBinaryJ2METiledLayer* this, Graphics* graphics);
void AllBinaryJ2METiledLayer_paintDebug(AllBinaryJ2METiledLayer* this, Graphics* graphics);
void AllBinaryJ2METiledLayer_moveDXY(AllBinaryJ2METiledLayer* this, int32_t dx, int32_t dy);
void AllBinaryJ2METiledLayer_setPosition(AllBinaryJ2METiledLayer* this, int32_t x, int32_t y, int32_t z);
TiledLayer* AllBinaryJ2METiledLayer_getTiledLayer(AllBinaryJ2METiledLayer* this);
int32_t AllBinaryJ2METiledLayer_getCellWidth(AllBinaryJ2METiledLayer* this);
int32_t AllBinaryJ2METiledLayer_getCellHeight(AllBinaryJ2METiledLayer* this);
int32_t AllBinaryJ2METiledLayer_getCell(AllBinaryJ2METiledLayer* this, int32_t col, int32_t row);
int32_t AllBinaryJ2METiledLayer_getColumns(AllBinaryJ2METiledLayer* this);
int32_t AllBinaryJ2METiledLayer_getRows(AllBinaryJ2METiledLayer* this);
void AllBinaryJ2METiledLayer_setCell(AllBinaryJ2METiledLayer* this, int32_t col, int32_t row, int32_t index);
int32_t AllBinaryJ2METiledLayer_getAnimatedTile(AllBinaryJ2METiledLayer* this, int32_t animationTileIndex);

static void AllBinaryJ2METiledLayer_initFields(AllBinaryJ2METiledLayer* this) {
    
    
    this->font2 = Font_getFont(Font_FACE_SYSTEM, Font_STYLE_PLAIN, 4);
}


void AllBinaryJ2METiledLayer_init(AllBinaryJ2METiledLayer* this, int32_t dataId, TiledLayer* tiledLayer, int32_t** mapTwoDArray, int32_t debugColor) {
        AllBinaryTiledLayer_init(&this->base, dataId, TiledLayer_getWidth(tiledLayer), TiledLayer_getHeight(tiledLayer), TiledLayer_getCellWidth(tiledLayer), TiledLayer_getCellHeight(tiledLayer));
        AllBinaryJ2METiledLayer_initFields(this);
        this->tiledLayerP = tiledLayer;
        this->debugColor = debugColor;
        AllBinaryJ2METiledLayer_setCells(this, mapTwoDArray);
}

AllBinaryJ2METiledLayer* AllBinaryJ2METiledLayer_new(int32_t dataId, TiledLayer* tiledLayer, int32_t** mapTwoDArray, int32_t debugColor) {
    AllBinaryJ2METiledLayer* this = calloc(1, sizeof(AllBinaryJ2METiledLayer));
    AllBinaryJ2METiledLayer_init(this, dataId, tiledLayer, mapTwoDArray, debugColor);
    return this;
}


void AllBinaryJ2METiledLayer_paint(AllBinaryJ2METiledLayer* this, Graphics* graphics) {
        TiledLayer_paint(this->tiledLayerP, graphics);
}


void AllBinaryJ2METiledLayer_paintDebug(AllBinaryJ2METiledLayer* this, Graphics* graphics) {
        Font* font = Graphics_getFont(graphics);
        Graphics_setFont(graphics, this->font2);
        Graphics_setColor(graphics, this->debugColor);
        int32_t x = TiledLayer_getX(this->tiledLayerP);
        int32_t y = TiledLayer_getY(this->tiledLayerP);
        int32_t firstColumn = 0;
        int32_t firstRow = 0;
        int32_t totalColumns = TiledLayer_getColumns(this->tiledLayerP);
        int32_t totalRows = TiledLayer_getRows(this->tiledLayerP);
        int32_t x0 = x;
        int32_t tile = 0;
        int32_t tileHeight = TiledLayer_getCellHeight(this->tiledLayerP);
        int32_t tileWidth = TiledLayer_getCellWidth(this->tiledLayerP);
        CommonSeps* commonSeps = CommonSeps_getInstance();
        StringMaker* stringMaker = StringMaker_new();
        for (int32_t rowIndex = firstRow; rowIndex < totalRows; rowIndex++, y += tileHeight) {
            x = x0;
            for (int32_t columnIndex = firstColumn; columnIndex < totalColumns; columnIndex++, x += tileWidth) {
                tile = TiledLayer_getCell(this->tiledLayerP, columnIndex, rowIndex);
                if (tile < 0) {
                    tile = TiledLayer_getAnimatedTile(this->tiledLayerP, tile);
                }
                if (tile == 0) {
                    continue;
                }
                tile--;
                StringMaker_delete(stringMaker, 0, StringMaker_length(stringMaker));
                Graphics_drawString(graphics, JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_appendint(stringMaker, columnIndex), append, commonSeps->COMMA), appendint, rowIndex), append, commonSeps->COLON), appendint, tile), toString), x + 5, y + 10, 0);
            }
        }
        Graphics_setFont(graphics, font);
}


void AllBinaryJ2METiledLayer_moveDXY(AllBinaryJ2METiledLayer* this, int32_t dx, int32_t dy) {
        TiledLayer_move(this->tiledLayerP, dx, dy);
        AllBinaryTiledLayer_moveDXY((&this->base), -dx, -dy);
}


void AllBinaryJ2METiledLayer_setPosition(AllBinaryJ2METiledLayer* this, int32_t x, int32_t y, int32_t z) {
        TiledLayer_setPosition(this->tiledLayerP, x, y);
        AllBinaryTiledLayer_setPosition((&this->base), -x, -y, z);
}


TiledLayer* AllBinaryJ2METiledLayer_getTiledLayer(AllBinaryJ2METiledLayer* this) {
        return this->tiledLayerP;
}


int32_t AllBinaryJ2METiledLayer_getCellWidth(AllBinaryJ2METiledLayer* this) {
        return TiledLayer_getCellWidth(this->tiledLayerP);
}


int32_t AllBinaryJ2METiledLayer_getCellHeight(AllBinaryJ2METiledLayer* this) {
        return TiledLayer_getCellHeight(this->tiledLayerP);
}


int32_t AllBinaryJ2METiledLayer_getCell(AllBinaryJ2METiledLayer* this, int32_t col, int32_t row) {
        return TiledLayer_getCell(this->tiledLayerP, col, row);
}


int32_t AllBinaryJ2METiledLayer_getColumns(AllBinaryJ2METiledLayer* this) {
        return TiledLayer_getColumns(this->tiledLayerP);
}


int32_t AllBinaryJ2METiledLayer_getRows(AllBinaryJ2METiledLayer* this) {
        return TiledLayer_getRows(this->tiledLayerP);
}


void AllBinaryJ2METiledLayer_setCell(AllBinaryJ2METiledLayer* this, int32_t col, int32_t row, int32_t index) {
        TiledLayer_setCell(this->tiledLayerP, col, row, index);
}


int32_t AllBinaryJ2METiledLayer_getAnimatedTile(AllBinaryJ2METiledLayer* this, int32_t animationTileIndex) {
        return TiledLayer_getAnimatedTile(this->tiledLayerP, animationTileIndex);
}

