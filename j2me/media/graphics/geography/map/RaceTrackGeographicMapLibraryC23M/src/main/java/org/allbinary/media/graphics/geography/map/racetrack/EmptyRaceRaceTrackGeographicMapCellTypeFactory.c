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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoData.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellTypeFactory.h"

typedef struct EmptyRaceRaceTrackGeographicMapCellTypeFactory EmptyRaceRaceTrackGeographicMapCellTypeFactory;
struct EmptyRaceRaceTrackGeographicMapCellTypeFactory {
    RaceTrackGeographicMapCellTypeFactory base;
};

static EmptyRaceRaceTrackGeographicMapCellTypeFactory* EmptyRaceRaceTrackGeographicMapCellTypeFactory_instanceC;

EmptyRaceRaceTrackGeographicMapCellTypeFactory* EmptyRaceRaceTrackGeographicMapCellTypeFactory_new(void);
EmptyRaceRaceTrackGeographicMapCellTypeFactory* EmptyRaceRaceTrackGeographicMapCellTypeFactory_getInstance(void);

void EmptyRaceRaceTrackGeographicMapCellTypeFactory_init(EmptyRaceRaceTrackGeographicMapCellTypeFactory* this);

// Static fields with runtime initializers: call this once at startup
void EmptyRaceRaceTrackGeographicMapCellTypeFactory_staticInit(void) {
    EmptyRaceRaceTrackGeographicMapCellTypeFactory_instanceC = EmptyRaceRaceTrackGeographicMapCellTypeFactory_new();
}


EmptyRaceRaceTrackGeographicMapCellTypeFactory* EmptyRaceRaceTrackGeographicMapCellTypeFactory_getInstance(void) {
        return EmptyRaceRaceTrackGeographicMapCellTypeFactory_instanceC;
}


void EmptyRaceRaceTrackGeographicMapCellTypeFactory_init(EmptyRaceRaceTrackGeographicMapCellTypeFactory* this) {
    RaceTrackGeographicMapCellTypeFactory_init(&this->base);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        this->EMPTY_CELL_TYPE = RaceTrackGeographicMapCellType_new(commonStrings->EMPTY, 0, PathFindingNodeCostInfoData_getInstance()->MAX_NODE_COST, 1);
        this->EASY_CELL_TYPE = RaceTrackGeographicMapCellType_new("Easy", 19, 1, 0);
        this->FINISH_LINE_ROAD_CELL_TYPE = this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
}

EmptyRaceRaceTrackGeographicMapCellTypeFactory* EmptyRaceRaceTrackGeographicMapCellTypeFactory_new(void) {
    EmptyRaceRaceTrackGeographicMapCellTypeFactory* this = calloc(1, sizeof(EmptyRaceRaceTrackGeographicMapCellTypeFactory));
    EmptyRaceRaceTrackGeographicMapCellTypeFactory_init(this);
    return this;
}

