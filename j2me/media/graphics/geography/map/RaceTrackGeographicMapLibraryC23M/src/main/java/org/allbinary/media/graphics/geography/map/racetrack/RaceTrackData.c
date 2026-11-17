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
// package org.allbinary.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/NullImage.h"
#include "org/allbinary/graphics/CellPosition.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct RaceTrackData RaceTrackData;
struct RaceTrackData {
    Image* tileSetImage;
    Image* miniTileSetImage;
    int32_t cellWidth;
    int32_t cellHeight;
    int32_t miniCellWidth;
    int32_t miniCellHeight;
    int32_t** mapArray;
    int32_t* cellTypeIdToGeographicMapCellTypeArray;
    CellPosition** NO_OVER_PASSES_ARRAY;
    CellPosition** overPassGeographicMapCellPositionArray;
    int32_t id;
};


RaceTrackData* RaceTrackData_new(int32_t id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, int32_t* cellTypeIdToGeographicMapCellTypeArray, int32_t** mapArray);

void RaceTrackData_init(RaceTrackData* this, int32_t id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, int32_t* cellTypeIdToGeographicMapCellTypeArray, int32_t** mapArray);
void RaceTrackData_setMapArray(RaceTrackData* this, int32_t** mapArray);
int32_t** RaceTrackData_getMapArray(RaceTrackData* this);
void RaceTrackData_setCellTypeIdToGeographicMapCellTypeArray(RaceTrackData* this, int32_t* cellTypeIdToGeographicMapCellTypeArray);
int32_t* RaceTrackData_getCellTypeIdToGeographicMapCellTypeArray(RaceTrackData* this);
static void RaceTrackData_setCellWidth(RaceTrackData* this, int32_t cellWidth);
int32_t RaceTrackData_getCellWidth(RaceTrackData* this);
static void RaceTrackData_setCellHeight(RaceTrackData* this, int32_t cellHeight);
int32_t RaceTrackData_getCellHeight(RaceTrackData* this);
CellPosition** RaceTrackData_getOverPassGeographicMapCellPositionArray(RaceTrackData* this);
void RaceTrackData_setOverPassGeographicMapCellPositionArray(RaceTrackData* this, CellPosition** overPassGeographicMapCellPositionArray);
Image* RaceTrackData_getTileSetImage(RaceTrackData* this);
void RaceTrackData_setTileSetImage(RaceTrackData* this, Image* tileSetImage);
Image* RaceTrackData_getMiniTileSetImage(RaceTrackData* this);
void RaceTrackData_setMiniTileSetImage(RaceTrackData* this, Image* miniTileSetImage);
int32_t RaceTrackData_getMiniCellWidth(RaceTrackData* this);
void RaceTrackData_setMiniCellWidth(RaceTrackData* this, int32_t miniCellWidth);
int32_t RaceTrackData_getMiniCellHeight(RaceTrackData* this);
void RaceTrackData_setMiniCellHeight(RaceTrackData* this, int32_t miniCellHeight);
void RaceTrackData_setId(RaceTrackData* this, int32_t id);
int32_t RaceTrackData_getId(RaceTrackData* this);

static void RaceTrackData_initFields(RaceTrackData* this) {
    this->tileSetImage = NullImage_NULL_IMAGE;
    this->miniTileSetImage = NullImage_NULL_IMAGE;
    this->cellWidth = 0;
    this->cellHeight = 0;
    this->miniCellWidth = 0;
    this->miniCellHeight = 0;
    this->mapArray = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY;
    this->cellTypeIdToGeographicMapCellTypeArray = NullUtil_getInstance()->NULL_INT_ARRAY;
    this->NO_OVER_PASSES_ARRAY = ((CellPosition**) java_array_new(sizeof(CellPosition*), 0));
    this->overPassGeographicMapCellPositionArray = this->NO_OVER_PASSES_ARRAY;
    
}


void RaceTrackData_init(RaceTrackData* this, int32_t id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, int32_t* cellTypeIdToGeographicMapCellTypeArray, int32_t** mapArray) {
    RaceTrackData_initFields(this);
        this->id = id;
        this->cellWidth = cellWidth;
        this->cellHeight = cellHeight;
        this->miniCellWidth = miniCellWidth;
        this->miniCellHeight = miniCellHeight;
        this->mapArray = mapArray;
        this->cellTypeIdToGeographicMapCellTypeArray = cellTypeIdToGeographicMapCellTypeArray;
}

RaceTrackData* RaceTrackData_new(int32_t id, int32_t cellWidth, int32_t cellHeight, int32_t miniCellWidth, int32_t miniCellHeight, int32_t* cellTypeIdToGeographicMapCellTypeArray, int32_t** mapArray) {
    RaceTrackData* this = calloc(1, sizeof(RaceTrackData));
    RaceTrackData_init(this, id, cellWidth, cellHeight, miniCellWidth, miniCellHeight, cellTypeIdToGeographicMapCellTypeArray, mapArray);
    return this;
}


void RaceTrackData_setMapArray(RaceTrackData* this, int32_t** mapArray) {
        this->mapArray = mapArray;
}


int32_t** RaceTrackData_getMapArray(RaceTrackData* this) {
        return this->mapArray;
}


void RaceTrackData_setCellTypeIdToGeographicMapCellTypeArray(RaceTrackData* this, int32_t* cellTypeIdToGeographicMapCellTypeArray) {
        this->cellTypeIdToGeographicMapCellTypeArray = cellTypeIdToGeographicMapCellTypeArray;
}


int32_t* RaceTrackData_getCellTypeIdToGeographicMapCellTypeArray(RaceTrackData* this) {
        return this->cellTypeIdToGeographicMapCellTypeArray;
}


static void RaceTrackData_setCellWidth(RaceTrackData* this, int32_t cellWidth) {
        this->cellWidth = cellWidth;
}


int32_t RaceTrackData_getCellWidth(RaceTrackData* this) {
        return this->cellWidth;
}


static void RaceTrackData_setCellHeight(RaceTrackData* this, int32_t cellHeight) {
        this->cellHeight = cellHeight;
}


int32_t RaceTrackData_getCellHeight(RaceTrackData* this) {
        return this->cellHeight;
}


CellPosition** RaceTrackData_getOverPassGeographicMapCellPositionArray(RaceTrackData* this) {
        return this->overPassGeographicMapCellPositionArray;
}


void RaceTrackData_setOverPassGeographicMapCellPositionArray(RaceTrackData* this, CellPosition** overPassGeographicMapCellPositionArray) {
        this->overPassGeographicMapCellPositionArray = overPassGeographicMapCellPositionArray;
}


Image* RaceTrackData_getTileSetImage(RaceTrackData* this) {
        return this->tileSetImage;
}


void RaceTrackData_setTileSetImage(RaceTrackData* this, Image* tileSetImage) {
        this->tileSetImage = tileSetImage;
}


Image* RaceTrackData_getMiniTileSetImage(RaceTrackData* this) {
        return this->miniTileSetImage;
}


void RaceTrackData_setMiniTileSetImage(RaceTrackData* this, Image* miniTileSetImage) {
        this->miniTileSetImage = miniTileSetImage;
}


int32_t RaceTrackData_getMiniCellWidth(RaceTrackData* this) {
        return this->miniCellWidth;
}


void RaceTrackData_setMiniCellWidth(RaceTrackData* this, int32_t miniCellWidth) {
        this->miniCellWidth = miniCellWidth;
}


int32_t RaceTrackData_getMiniCellHeight(RaceTrackData* this) {
        return this->miniCellHeight;
}


void RaceTrackData_setMiniCellHeight(RaceTrackData* this, int32_t miniCellHeight) {
        this->miniCellHeight = miniCellHeight;
}


void RaceTrackData_setId(RaceTrackData* this, int32_t id) {
        this->id = id;
}


int32_t RaceTrackData_getId(RaceTrackData* this) {
        return this->id;
}

