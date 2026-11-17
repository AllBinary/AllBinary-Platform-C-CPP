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

typedef struct RaceTrackGeographicMapCellTypes RaceTrackGeographicMapCellTypes;
struct RaceTrackGeographicMapCellTypes {
    RaceTrackGeographicMapCellType* BOTTOM_LEFT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* TOP_LEFT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* TOP_RIGHT_TURN_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* VERTICAL_STRAIGHT_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* START_LINE_ROAD_CELL_TYPE;
    RaceTrackGeographicMapCellType* DEFAULT_FINISH_LINE_ROAD_CELL_TYPE;
};

static RaceTrackGeographicMapCellTypes* RaceTrackGeographicMapCellTypes_instance;

RaceTrackGeographicMapCellTypes* RaceTrackGeographicMapCellTypes_new(void);
RaceTrackGeographicMapCellTypes* RaceTrackGeographicMapCellTypes_getInstance(void);

void RaceTrackGeographicMapCellTypes_init(RaceTrackGeographicMapCellTypes* this);

// Static fields with runtime initializers: call this once at startup
void RaceTrackGeographicMapCellTypes_staticInit(void) {
    RaceTrackGeographicMapCellTypes_instance = RaceTrackGeographicMapCellTypes_new();
}

static void RaceTrackGeographicMapCellTypes_initFields(RaceTrackGeographicMapCellTypes* this) {
    
    
    
    
    
    
    
    
}


RaceTrackGeographicMapCellTypes* RaceTrackGeographicMapCellTypes_getInstance(void) {
        return RaceTrackGeographicMapCellTypes_instance;
}


void RaceTrackGeographicMapCellTypes_init(RaceTrackGeographicMapCellTypes* this) {
    RaceTrackGeographicMapCellTypes_initFields(this);
        this->BOTTOM_LEFT_TURN_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Bottom Left Turn", 1, 1, 0);
        this->BOTTOM_RIGHT_TURN_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Bottom Right Turn", 2, 1, 0);
        this->TOP_LEFT_TURN_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Top Left Turn", 3, 1, 0);
        this->TOP_RIGHT_TURN_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Top Right Turne", 4, 1, 0);
        this->HORIZONTAL_STRAIGHT_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Horizontal Straight", 5, 1, 0);
        this->VERTICAL_STRAIGHT_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Vertical Straight", 6, 1, 0);
        this->START_LINE_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Start Line", 7, 1, 0);
        this->DEFAULT_FINISH_LINE_ROAD_CELL_TYPE = RaceTrackGeographicMapCellType_new("Finish Line", 8, 1, 0);
}

RaceTrackGeographicMapCellTypes* RaceTrackGeographicMapCellTypes_new(void) {
    RaceTrackGeographicMapCellTypes* this = calloc(1, sizeof(RaceTrackGeographicMapCellTypes));
    RaceTrackGeographicMapCellTypes_init(this);
    return this;
}

