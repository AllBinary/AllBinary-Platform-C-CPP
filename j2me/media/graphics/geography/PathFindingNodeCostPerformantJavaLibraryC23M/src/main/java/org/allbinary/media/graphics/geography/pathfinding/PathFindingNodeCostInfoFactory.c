/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2006 AllBinary
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
// package org.allbinary.media.graphics.geography.pathfinding

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"

typedef struct PathFindingNodeCostInfoFactory PathFindingNodeCostInfoFactory;
struct PathFindingNodeCostInfoFactory {
    PathFindingNodeCostInfoFactoryBase base;
};


PathFindingNodeCostInfoFactory* PathFindingNodeCostInfoFactory_new(int32_t max);

void PathFindingNodeCostInfoFactory_init(PathFindingNodeCostInfoFactory* this, int32_t max);
void PathFindingNodeCostInfoFactory_create(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);
int64_t PathFindingNodeCostInfoFactory_getTotalCost(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition);


void PathFindingNodeCostInfoFactory_init(PathFindingNodeCostInfoFactory* this, int32_t max) {
    PathFindingNodeCostInfoFactoryBase_init(&this->base);
}

PathFindingNodeCostInfoFactory* PathFindingNodeCostInfoFactory_new(int32_t max) {
    PathFindingNodeCostInfoFactory* this = calloc(1, sizeof(PathFindingNodeCostInfoFactory));
    PathFindingNodeCostInfoFactory_init(this, max);
    return this;
}


// throws Exception
void PathFindingNodeCostInfoFactory_create(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) {
}


// throws Exception
int64_t PathFindingNodeCostInfoFactory_getTotalCost(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) {
        GeographicMapCellType* geographicMapCellType = BasicGeographicMap_getCellTypeAt(geographicMapInterface, comingFromGeographicMapCellPosition);
        GeographicMapCellType* geographicMapCellType2 = BasicGeographicMap_getCellTypeAt(geographicMapInterface, geographicMapCellPosition);
        RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = ((RaceTrackGeographicMapCellType*) geographicMapCellType);
        RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType2 = ((RaceTrackGeographicMapCellType*) geographicMapCellType2);
        return ((int64_t) RaceTrackGeographicMapCellType_getTravelCost(raceTrackGeographicMapCellType)) + RaceTrackGeographicMapCellType_getTravelCost(raceTrackGeographicMapCellType2);
}

