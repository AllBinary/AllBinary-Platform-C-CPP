/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/layer/Layer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPositionFactoryInterface.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapInterface.h"

typedef struct NullRaceTrackGeographicMap NullRaceTrackGeographicMap;
struct NullRaceTrackGeographicMap {
    RaceTrackGeographicMapInterface RaceTrackGeographicMapInterface_interface;
};

NullRaceTrackGeographicMap* NullRaceTrackGeographicMap_NULL_RACE_TRACK_GEOGRAPHIC_MAP;

NullRaceTrackGeographicMap* NullRaceTrackGeographicMap_new(void);
int32_t NullRaceTrackGeographicMap_getId(NullRaceTrackGeographicMap* this);
const char* NullRaceTrackGeographicMap_getName(NullRaceTrackGeographicMap* this);
void NullRaceTrackGeographicMap_reset(NullRaceTrackGeographicMap* this);
AllBinaryTiledLayer* NullRaceTrackGeographicMap_getAllBinaryTiledLayer(NullRaceTrackGeographicMap* this);
bool NullRaceTrackGeographicMap_getCellPositionsAt(NullRaceTrackGeographicMap* this, Layer* layer, GeographicMapCellPosition*** currentCellPositionArray, GeographicMapCellPosition*** cellPositionArray);
GeographicMapCellPosition* NullRaceTrackGeographicMap_getCellPositionAtXY(NullRaceTrackGeographicMap* this, int32_t x, int32_t y);
GeographicMapCellPosition* NullRaceTrackGeographicMap_getCellPositionAtXYNoThrow(NullRaceTrackGeographicMap* this, int32_t x, int32_t y);
int32_t NullRaceTrackGeographicMap_getCellTypeFromMapCellTypeInt(NullRaceTrackGeographicMap* this, int32_t cellTypeId);
GeographicMapCellType* NullRaceTrackGeographicMap_getCellTypeAtXY(NullRaceTrackGeographicMap* this, int32_t x, int32_t y);
GeographicMapCellType* NullRaceTrackGeographicMap_getCellTypeAt(NullRaceTrackGeographicMap* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicGeographicMapCellPositionFactory* NullRaceTrackGeographicMap_getGeographicMapCellPositionFactory(NullRaceTrackGeographicMap* this);
GeographicMapCellPositionFactoryInterface* NullRaceTrackGeographicMap_getGeographicMapCellPositionFactoryInterface(NullRaceTrackGeographicMap* this);
BasicColor* NullRaceTrackGeographicMap_getForegroundBasicColor(NullRaceTrackGeographicMap* this);
BasicColor* NullRaceTrackGeographicMap_getBackgroundBasicColor(NullRaceTrackGeographicMap* this);
RaceTrackInfo* NullRaceTrackGeographicMap_getRaceTrackInfo(NullRaceTrackGeographicMap* this);
void NullRaceTrackGeographicMap_setRaceTrackInfo(NullRaceTrackGeographicMap* this, RaceTrackInfo* aRaceTrackInfo);
RaceTrackData* NullRaceTrackGeographicMap_getRaceTrackData(NullRaceTrackGeographicMap* this);
void NullRaceTrackGeographicMap_setRaceTrackData(NullRaceTrackGeographicMap* this, RaceTrackData* raceTrackData);

// Static fields with runtime initializers: call this once at startup
void NullRaceTrackGeographicMap_staticInit(void) {
    NullRaceTrackGeographicMap_NULL_RACE_TRACK_GEOGRAPHIC_MAP = NullRaceTrackGeographicMap_new();
}

void NullRaceTrackGeographicMap_init(NullRaceTrackGeographicMap* this) {
}

NullRaceTrackGeographicMap* NullRaceTrackGeographicMap_new(void) {
    NullRaceTrackGeographicMap* this = calloc(1, sizeof(NullRaceTrackGeographicMap));
    NullRaceTrackGeographicMap_init(this);
    return this;
}


int32_t NullRaceTrackGeographicMap_getId(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* NullRaceTrackGeographicMap_getName(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullRaceTrackGeographicMap_reset(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


AllBinaryTiledLayer* NullRaceTrackGeographicMap_getAllBinaryTiledLayer(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
bool NullRaceTrackGeographicMap_getCellPositionsAt(NullRaceTrackGeographicMap* this, Layer* layer, GeographicMapCellPosition*** currentCellPositionArray, GeographicMapCellPosition*** cellPositionArray) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellPosition* NullRaceTrackGeographicMap_getCellPositionAtXY(NullRaceTrackGeographicMap* this, int32_t x, int32_t y) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellPosition* NullRaceTrackGeographicMap_getCellPositionAtXYNoThrow(NullRaceTrackGeographicMap* this, int32_t x, int32_t y) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullRaceTrackGeographicMap_getCellTypeFromMapCellTypeInt(NullRaceTrackGeographicMap* this, int32_t cellTypeId) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellType* NullRaceTrackGeographicMap_getCellTypeAtXY(NullRaceTrackGeographicMap* this, int32_t x, int32_t y) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellType* NullRaceTrackGeographicMap_getCellTypeAt(NullRaceTrackGeographicMap* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicGeographicMapCellPositionFactory* NullRaceTrackGeographicMap_getGeographicMapCellPositionFactory(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GeographicMapCellPositionFactoryInterface* NullRaceTrackGeographicMap_getGeographicMapCellPositionFactoryInterface(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicColor* NullRaceTrackGeographicMap_getForegroundBasicColor(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicColor* NullRaceTrackGeographicMap_getBackgroundBasicColor(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


RaceTrackInfo* NullRaceTrackGeographicMap_getRaceTrackInfo(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullRaceTrackGeographicMap_setRaceTrackInfo(NullRaceTrackGeographicMap* this, RaceTrackInfo* aRaceTrackInfo) {
        java_throw(java_exception_new("RuntimeException", ""));
}


RaceTrackData* NullRaceTrackGeographicMap_getRaceTrackData(NullRaceTrackGeographicMap* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullRaceTrackGeographicMap_setRaceTrackData(NullRaceTrackGeographicMap* this, RaceTrackData* raceTrackData) {
        java_throw(java_exception_new("RuntimeException", ""));
}

