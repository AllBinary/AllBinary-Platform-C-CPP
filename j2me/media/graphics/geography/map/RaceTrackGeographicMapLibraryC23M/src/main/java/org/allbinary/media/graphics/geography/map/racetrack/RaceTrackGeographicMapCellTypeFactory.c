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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"

typedef struct RaceTrackGeographicMapCellTypeFactory RaceTrackGeographicMapCellTypeFactory;
struct RaceTrackGeographicMapCellTypeFactory {
    GeographicMapCellTypeFactory base;
    GeographicMapCellType* EMPTY_CELL_TYPE;
    GeographicMapCellType* EASY_CELL_TYPE;
    RaceTrackGeographicMapCellType* BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* TOP_LEFT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* TOP_RIGHT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* VERTICAL_STRAIGHT_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* START_LINE_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
    GeographicMapCellType* FINISH_LINE_ROAD_CELL_TYPE;
};

static RaceTrackGeographicMapCellTypeFactory* RaceTrackGeographicMapCellTypeFactory_instanceC;

RaceTrackGeographicMapCellTypeFactory* RaceTrackGeographicMapCellTypeFactory_new(void);
RaceTrackGeographicMapCellTypeFactory* RaceTrackGeographicMapCellTypeFactory_getInstance(void);

void RaceTrackGeographicMapCellTypeFactory_init(RaceTrackGeographicMapCellTypeFactory* this);
int32_t RaceTrackGeographicMapCellTypeFactory_getStartType(RaceTrackGeographicMapCellTypeFactory* this);
int32_t RaceTrackGeographicMapCellTypeFactory_getEndType(RaceTrackGeographicMapCellTypeFactory* this);
int32_t RaceTrackGeographicMapCellTypeFactory_getEmptyType(RaceTrackGeographicMapCellTypeFactory* this);
bool RaceTrackGeographicMapCellTypeFactory_isPath(RaceTrackGeographicMapCellTypeFactory* this, GeographicMapCellType* cellType);

// Static fields with runtime initializers: call this once at startup
void RaceTrackGeographicMapCellTypeFactory_staticInit(void) {
    RaceTrackGeographicMapCellTypeFactory_instanceC = RaceTrackGeographicMapCellTypeFactory_new();
}

static void RaceTrackGeographicMapCellTypeFactory_initFields(RaceTrackGeographicMapCellTypeFactory* this) {
    this->EMPTY_CELL_TYPE = GeographicMapCellType_new(0, -1);
    this->EASY_CELL_TYPE = this->EMPTY_CELL_TYPE;
    
    
    
    
    
    
    
    
    this->FINISH_LINE_ROAD_CELL_TYPE = GeographicMapCellType_NULL_GEOGRAPHIC_MAP_CELL_TYPE;
}


RaceTrackGeographicMapCellTypeFactory* RaceTrackGeographicMapCellTypeFactory_getInstance(void) {
        return RaceTrackGeographicMapCellTypeFactory_instanceC;
}


void RaceTrackGeographicMapCellTypeFactory_init(RaceTrackGeographicMapCellTypeFactory* this) {
    GeographicMapCellTypeFactory_init(&this->base);
    RaceTrackGeographicMapCellTypeFactory_initFields(this);
        RaceTrackGeographicMapCellTypes* raceTrackGeographicMapCellTypes = RaceTrackGeographicMapCellTypes_getInstance();
        this->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;
        this->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;
        this->TOP_LEFT_TURN_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->TOP_LEFT_TURN_ROAD_CELL_TYPE;
        this->TOP_RIGHT_TURN_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->TOP_RIGHT_TURN_ROAD_CELL_TYPE;
        this->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;
        this->VERTICAL_STRAIGHT_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->VERTICAL_STRAIGHT_ROAD_CELL_TYPE;
        this->START_LINE_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->START_LINE_ROAD_CELL_TYPE;
        this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE = raceTrackGeographicMapCellTypes->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
}

RaceTrackGeographicMapCellTypeFactory* RaceTrackGeographicMapCellTypeFactory_new(void) {
    RaceTrackGeographicMapCellTypeFactory* this = calloc(1, sizeof(RaceTrackGeographicMapCellTypeFactory));
    RaceTrackGeographicMapCellTypeFactory_init(this);
    return this;
}


int32_t RaceTrackGeographicMapCellTypeFactory_getStartType(RaceTrackGeographicMapCellTypeFactory* this) {
        return RaceTrackGeographicMapCellType_getType(this->START_LINE_ROAD_CELL_TYPE);
}


int32_t RaceTrackGeographicMapCellTypeFactory_getEndType(RaceTrackGeographicMapCellTypeFactory* this) {
        return GeographicMapCellType_getType(this->FINISH_LINE_ROAD_CELL_TYPE);
}


int32_t RaceTrackGeographicMapCellTypeFactory_getEmptyType(RaceTrackGeographicMapCellTypeFactory* this) {
        return GeographicMapCellType_getType(this->EMPTY_CELL_TYPE);
}


bool RaceTrackGeographicMapCellTypeFactory_isPath(RaceTrackGeographicMapCellTypeFactory* this, GeographicMapCellType* cellType) {
        if (cellType != this->EMPTY_CELL_TYPE && cellType != this->EASY_CELL_TYPE) {
            return true;
        }
        return false;
}

