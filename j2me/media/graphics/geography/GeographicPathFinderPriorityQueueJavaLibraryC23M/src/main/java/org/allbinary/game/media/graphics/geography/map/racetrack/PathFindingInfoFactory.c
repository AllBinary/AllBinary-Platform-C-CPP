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
// package org.allbinary.game.media.graphics.geography.map.racetrack

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFinder.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h"
#include "org/allbinary/util/BasicArrayListS.h"

//1.4.2
typedef struct PathFindingInfoFactory PathFindingInfoFactory;
struct PathFindingInfoFactory {
    BasePathFindingInfoFactory base;
    PathFindingInfo* pathFindingInfo;
    PathFinder* pathFinder;
};

static PathFindingInfoFactory* PathFindingInfoFactory_instance;
static int32_t PathFindingInfoFactory_MAX = 32768;

PathFindingInfoFactory* PathFindingInfoFactory_new(void);
PathFindingInfoFactory* PathFindingInfoFactory_getInstance(void);
void PathFindingInfoFactory_initMax(int32_t max);

void PathFindingInfoFactory_init(PathFindingInfoFactory* this);
PathFindingInfo* PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** mapArray);
void PathFindingInfoFactory_init(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray);
static void PathFindingInfoFactory_buildPathFindingNodesForCellPosition(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray, GeographicMapCellPosition* cellPosition);
static void PathFindingInfoFactory_buildPathFindingNodes(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray);

// Static fields with runtime initializers: call this once at startup
void PathFindingInfoFactory_staticInit(void) {
    PathFindingInfoFactory_instance = PathFindingInfoFactory_new();
}

static void PathFindingInfoFactory_initFields(PathFindingInfoFactory* this) {
    
    
}


PathFindingInfoFactory* PathFindingInfoFactory_getInstance(void) {
        return PathFindingInfoFactory_instance;
}


void PathFindingInfoFactory_initMax(int32_t max) {
        PathFindingInfoFactory_MAX = max;
}


void PathFindingInfoFactory_init(PathFindingInfoFactory* this) {
    BasePathFindingInfoFactory_init(&this->base);
    PathFindingInfoFactory_initFields(this);
        this->pathFindingInfo = PathFindingInfo_new(PathFindingNodeCostInfoFactory_new(PathFindingInfoFactory_MAX), BasicArrayListS_new(1), BasicArrayListS_new(1));
        this->pathFinder = PathFinder_new();
}

PathFindingInfoFactory* PathFindingInfoFactory_new(void) {
    PathFindingInfoFactory* this = calloc(1, sizeof(PathFindingInfoFactory));
    PathFindingInfoFactory_init(this);
    return this;
}


// throws Exception
PathFindingInfo* PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** mapArray) {
        PathFindingInfo* pathFindingInfo = PathFindingInfo_new(PathFindingInfo_getPathFindingNodeCostInfoFactoryInterface(this->pathFindingInfo), BasicArrayListS_new(1), BasicArrayListS_new(1));
        RaceTrackRoadsGeographicMapCellHistoryFactory_init(RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance());
        PathFindingInfoFactory_init(this, geographicMapInterface, pathFindingInfo, mapArray);
        PathFinder_init(this->pathFinder, geographicMapInterface);
        PathFindingInfo_setPathFinder(pathFindingInfo, this->pathFinder);
        return pathFindingInfo;
}


// throws Exception
void PathFindingInfoFactory_init(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray) {
        BasePathFindingInfoFactory_init((&this->base), geographicMapInterface, pathFindingInfo, mapArray);
        PathFindingInfoFactory_buildPathFindingNodes(this, geographicMapInterface, pathFindingInfo, mapArray);
}


// throws Exception
static void PathFindingInfoFactory_buildPathFindingNodesForCellPosition(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray, GeographicMapCellPosition* cellPosition) {
}


// throws Exception
static void PathFindingInfoFactory_buildPathFindingNodes(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray) {
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface);
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        int32_t totalColumns = AllBinaryTiledLayer_getColumns(allBinaryTiledLayer);
        int32_t totalRows = AllBinaryTiledLayer_getRows(allBinaryTiledLayer);
        for (int32_t column = 0; column < totalColumns; column++) {
            for (int32_t row = 0; row < totalRows; row++) {
                PathFindingInfoFactory_buildPathFindingNodesForCellPosition(this, geographicMapInterface, pathFindingInfo, mapArray, BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, row));
            }
        }
}

