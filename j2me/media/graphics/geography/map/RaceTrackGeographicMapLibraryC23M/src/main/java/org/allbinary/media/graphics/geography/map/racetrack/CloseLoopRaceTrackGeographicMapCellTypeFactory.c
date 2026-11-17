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
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"

typedef struct CloseLoopRaceTrackGeographicMapCellTypeFactory CloseLoopRaceTrackGeographicMapCellTypeFactory;
struct CloseLoopRaceTrackGeographicMapCellTypeFactory {
    RaceTrackGeographicMapCellTypeFactory base;
};

static CloseLoopRaceTrackGeographicMapCellTypeFactory* CloseLoopRaceTrackGeographicMapCellTypeFactory_instanceC;

CloseLoopRaceTrackGeographicMapCellTypeFactory* CloseLoopRaceTrackGeographicMapCellTypeFactory_new(void);
CloseLoopRaceTrackGeographicMapCellTypeFactory* CloseLoopRaceTrackGeographicMapCellTypeFactory_getInstance(void);

void CloseLoopRaceTrackGeographicMapCellTypeFactory_init(CloseLoopRaceTrackGeographicMapCellTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void CloseLoopRaceTrackGeographicMapCellTypeFactory_staticInit(void) {
    CloseLoopRaceTrackGeographicMapCellTypeFactory_instanceC = CloseLoopRaceTrackGeographicMapCellTypeFactory_new();
}


CloseLoopRaceTrackGeographicMapCellTypeFactory* CloseLoopRaceTrackGeographicMapCellTypeFactory_getInstance(void) {
        return CloseLoopRaceTrackGeographicMapCellTypeFactory_instanceC;
}


void CloseLoopRaceTrackGeographicMapCellTypeFactory_init(CloseLoopRaceTrackGeographicMapCellTypeFactory* this) {
    RaceTrackGeographicMapCellTypeFactory_init(&this->base);
        this->EMPTY_CELL_TYPE = EmptyRaceRaceTrackGeographicMapCellTypeFactory_getInstance()->EMPTY_CELL_TYPE;
        this->EASY_CELL_TYPE = this->EMPTY_CELL_TYPE;
        this->FINISH_LINE_ROAD_CELL_TYPE = this->START_LINE_ROAD_CELL_TYPE;
}

CloseLoopRaceTrackGeographicMapCellTypeFactory* CloseLoopRaceTrackGeographicMapCellTypeFactory_new(void) {
    CloseLoopRaceTrackGeographicMapCellTypeFactory* this = calloc(1, sizeof(CloseLoopRaceTrackGeographicMapCellTypeFactory));
    CloseLoopRaceTrackGeographicMapCellTypeFactory_init(this);
    return this;
}

