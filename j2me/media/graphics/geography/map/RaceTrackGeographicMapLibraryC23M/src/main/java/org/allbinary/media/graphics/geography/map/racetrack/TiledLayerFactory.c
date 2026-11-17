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
// #include "javax/microedition/lcdui/game/TiledLayer.h"

typedef struct TiledLayerFactory TiledLayerFactory;
struct TiledLayerFactory {
    char unused;
};


TiledLayerFactory* TiledLayerFactory_new(void);
TiledLayer* TiledLayerFactory_getInstance(TiledLayerFactory* this, RaceTrackData* raceTrackData);
TiledLayer* TiledLayerFactory_getMiniInstance(TiledLayerFactory* this, RaceTrackData* raceTrackData);

void TiledLayerFactory_init(TiledLayerFactory* this) {
}

TiledLayerFactory* TiledLayerFactory_new(void) {
    TiledLayerFactory* this = calloc(1, sizeof(TiledLayerFactory));
    TiledLayerFactory_init(this);
    return this;
}


TiledLayer* TiledLayerFactory_getInstance(TiledLayerFactory* this, RaceTrackData* raceTrackData) {
        int32_t** mapArray = RaceTrackData_getMapArray(raceTrackData);
        return TiledLayer_new(java_array_length(mapArray[0]), java_array_length(mapArray), RaceTrackData_getTileSetImage(raceTrackData), RaceTrackData_getCellWidth(raceTrackData), RaceTrackData_getCellHeight(raceTrackData));
}


TiledLayer* TiledLayerFactory_getMiniInstance(TiledLayerFactory* this, RaceTrackData* raceTrackData) {
        int32_t** mapArray = RaceTrackData_getMapArray(raceTrackData);
        return TiledLayer_new(java_array_length(mapArray[0]), java_array_length(mapArray), RaceTrackData_getMiniTileSetImage(raceTrackData), RaceTrackData_getMiniCellWidth(raceTrackData), RaceTrackData_getMiniCellHeight(raceTrackData));
}

