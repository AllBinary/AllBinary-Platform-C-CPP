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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"

typedef struct RaceTrackRoadsGeographicMapCellHistoryFactory RaceTrackRoadsGeographicMapCellHistoryFactory;
struct RaceTrackRoadsGeographicMapCellHistoryFactory {
    char unused;
};

static GeographicMapCellHistory* RaceTrackRoadsGeographicMapCellHistoryFactory_geographicMapCellHistory;

RaceTrackRoadsGeographicMapCellHistoryFactory* RaceTrackRoadsGeographicMapCellHistoryFactory_new(void);

void RaceTrackRoadsGeographicMapCellHistoryFactory_init(RaceTrackRoadsGeographicMapCellHistoryFactory* this);
GeographicMapCellHistory* RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RaceTrackRoadsGeographicMapCellHistoryFactory_staticInit(void) {
    RaceTrackRoadsGeographicMapCellHistoryFactory_geographicMapCellHistory = GeographicMapCellHistory_new();
}


void RaceTrackRoadsGeographicMapCellHistoryFactory_init(RaceTrackRoadsGeographicMapCellHistoryFactory* this) {
}

RaceTrackRoadsGeographicMapCellHistoryFactory* RaceTrackRoadsGeographicMapCellHistoryFactory_new(void) {
    RaceTrackRoadsGeographicMapCellHistoryFactory* this = calloc(1, sizeof(RaceTrackRoadsGeographicMapCellHistoryFactory));
    RaceTrackRoadsGeographicMapCellHistoryFactory_init(this);
    return this;
}


GeographicMapCellHistory* RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance(void) {
        return RaceTrackRoadsGeographicMapCellHistoryFactory_geographicMapCellHistory;
}

