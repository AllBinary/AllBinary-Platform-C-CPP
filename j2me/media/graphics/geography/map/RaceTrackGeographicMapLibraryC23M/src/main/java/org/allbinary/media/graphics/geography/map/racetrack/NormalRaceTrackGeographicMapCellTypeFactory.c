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

typedef struct NormalRaceTrackGeographicMapCellTypeFactory NormalRaceTrackGeographicMapCellTypeFactory;
struct NormalRaceTrackGeographicMapCellTypeFactory {
    RaceTrackGeographicMapCellTypeFactory base;
};

static NormalRaceTrackGeographicMapCellTypeFactory* NormalRaceTrackGeographicMapCellTypeFactory_instanceC;

NormalRaceTrackGeographicMapCellTypeFactory* NormalRaceTrackGeographicMapCellTypeFactory_new(void);
NormalRaceTrackGeographicMapCellTypeFactory* NormalRaceTrackGeographicMapCellTypeFactory_getInstance(void);

void NormalRaceTrackGeographicMapCellTypeFactory_init(NormalRaceTrackGeographicMapCellTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void NormalRaceTrackGeographicMapCellTypeFactory_staticInit(void) {
    NormalRaceTrackGeographicMapCellTypeFactory_instanceC = NormalRaceTrackGeographicMapCellTypeFactory_new();
}


NormalRaceTrackGeographicMapCellTypeFactory* NormalRaceTrackGeographicMapCellTypeFactory_getInstance(void) {
        return NormalRaceTrackGeographicMapCellTypeFactory_instanceC;
}


void NormalRaceTrackGeographicMapCellTypeFactory_init(NormalRaceTrackGeographicMapCellTypeFactory* this) {
    RaceTrackGeographicMapCellTypeFactory_init(&this->base);
        this->EMPTY_CELL_TYPE = EmptyRaceRaceTrackGeographicMapCellTypeFactory_getInstance()->EMPTY_CELL_TYPE;
        this->EASY_CELL_TYPE = this->EMPTY_CELL_TYPE;
        this->FINISH_LINE_ROAD_CELL_TYPE = this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
}

NormalRaceTrackGeographicMapCellTypeFactory* NormalRaceTrackGeographicMapCellTypeFactory_new(void) {
    NormalRaceTrackGeographicMapCellTypeFactory* this = calloc(1, sizeof(NormalRaceTrackGeographicMapCellTypeFactory));
    NormalRaceTrackGeographicMapCellTypeFactory_init(this);
    return this;
}

