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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"

typedef struct RaceTrackGeographicMapCellType RaceTrackGeographicMapCellType;
struct RaceTrackGeographicMapCellType {
    GeographicMapCellType base;
    const char* name;
    int32_t travelCost;
};


RaceTrackGeographicMapCellType* RaceTrackGeographicMapCellType_new(const char* name, int32_t type, int32_t travelCost, int32_t reset);

void RaceTrackGeographicMapCellType_init(RaceTrackGeographicMapCellType* this, const char* name, int32_t type, int32_t travelCost, int32_t reset);
int32_t RaceTrackGeographicMapCellType_getTravelCost(RaceTrackGeographicMapCellType* this);

static void RaceTrackGeographicMapCellType_initFields(RaceTrackGeographicMapCellType* this) {
    
    
}


void RaceTrackGeographicMapCellType_init(RaceTrackGeographicMapCellType* this, const char* name, int32_t type, int32_t travelCost, int32_t reset) {
        GeographicMapCellType_init(&this->base, type, reset);
        RaceTrackGeographicMapCellType_initFields(this);
        this->name = name;
        this->travelCost = travelCost;
}

RaceTrackGeographicMapCellType* RaceTrackGeographicMapCellType_new(const char* name, int32_t type, int32_t travelCost, int32_t reset) {
    RaceTrackGeographicMapCellType* this = calloc(1, sizeof(RaceTrackGeographicMapCellType));
    RaceTrackGeographicMapCellType_init(this, name, type, travelCost, reset);
    return this;
}


int32_t RaceTrackGeographicMapCellType_getTravelCost(RaceTrackGeographicMapCellType* this) {
        return this->travelCost;
}

