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
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapCellPositionFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMapUtil.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMapCellType.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapGraph.h"
#include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapPathFinder.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFinderGraphVisitorFactoryBase.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactory.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct PathFindingInfoFactory PathFindingInfoFactory;
struct PathFindingInfoFactory {
    BasePathFindingInfoFactory base;
    int32_t MAX_DIRECTIONS;
    PathFindingInfo* pathFindingInfo;
    BasicGeographicMapGraph* basicGeographicMapGraph;
    BasicGeographicMapPathFinder* basicGeographicMapPathFinder;
    PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface;
};

static PathFindingInfoFactory* PathFindingInfoFactory_instance = nullptr;

PathFindingInfoFactory* PathFindingInfoFactory_new(PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface, int32_t max);
PathFindingInfoFactory* PathFindingInfoFactory_getInstance(void);
void PathFindingInfoFactory_initMax(int32_t max);

void PathFindingInfoFactory_init(PathFindingInfoFactory* this, PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface, int32_t max);
PathFindingInfo* PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** mapArray);
void PathFindingInfoFactory_init(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray);
static void PathFindingInfoFactory_buildPathFindingNodesForCellPosition(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray, GeographicMapCellPosition* cellPosition);
static void PathFindingInfoFactory_buildPathFindingNodes(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray);

static void PathFindingInfoFactory_initFields(PathFindingInfoFactory* this) {
    this->MAX_DIRECTIONS = 4;
    
    
    
    
}


PathFindingInfoFactory* PathFindingInfoFactory_getInstance(void) {
        return PathFindingInfoFactory_instance;
}


void PathFindingInfoFactory_initMax(int32_t max) {
        PathFindingInfoFactory_instance = PathFindingInfoFactory_new(SimplePathFinderGraphVisitorFactory_new(1, 1, Integer_MAX_VALUE), max);
}


void PathFindingInfoFactory_init(PathFindingInfoFactory* this, PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface, int32_t max) {
    BasePathFindingInfoFactory_init(&this->base);
    PathFindingInfoFactory_initFields(this);
        CommonStrings* commonStrings = CommonStrings_getInstance();
        PreLogUtil_put("Using Dynamic Path Finding", this, commonStrings->GET_INSTANCE);
        this->basicGeographicMapPathFinder = BasicGeographicMapPathFinder_new(max);
        this->pathFindingInfo = PathFindingInfo_new(PathFindingNodeCostInfoFactory_new(max), BasicArrayListS_new(1), BasicArrayListS_new(1));
        this->basicGeographicMapGraph = BasicGeographicMapGraph_new(((PathFindingNodeCostInfoFactory*) PathFindingInfo_getPathFindingNodeCostInfoFactoryInterface(this->pathFindingInfo)));
        this->pathFinderGraphVisitorFactoryInterface = pathFinderGraphVisitorFactoryInterface;
}

PathFindingInfoFactory* PathFindingInfoFactory_new(PathFinderGraphVisitorFactoryBase* pathFinderGraphVisitorFactoryInterface, int32_t max) {
    PathFindingInfoFactory* this = calloc(1, sizeof(PathFindingInfoFactory));
    PathFindingInfoFactory_init(this, pathFinderGraphVisitorFactoryInterface, max);
    return this;
}


// throws Exception
PathFindingInfo* PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** mapArray) {
        PathFindingInfo* pathFindingInfo = PathFindingInfo_new(PathFindingInfo_getPathFindingNodeCostInfoFactoryInterface(this->pathFindingInfo), BasicArrayListS_new(1), BasicArrayListS_new(1));
        RaceTrackRoadsGeographicMapCellHistoryFactory_init(RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance());
        PathFindingInfoFactory_init(this, geographicMapInterface, pathFindingInfo, mapArray);
        BasicGeographicMapPathFinder_init(this->basicGeographicMapPathFinder, geographicMapInterface, this->basicGeographicMapGraph, PathFinderGraphVisitorFactoryBase_getInstance(this->pathFinderGraphVisitorFactoryInterface, geographicMapInterface));
        PathFindingInfo_setPathFinder(pathFindingInfo, this->basicGeographicMapPathFinder);
        return pathFindingInfo;
}


// throws Exception
void PathFindingInfoFactory_init(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray) {
        BasePathFindingInfoFactory_init((&this->base), geographicMapInterface, pathFindingInfo, mapArray);
        PathFindingInfoFactory_buildPathFindingNodes(this, geographicMapInterface, pathFindingInfo, mapArray);
}


// throws Exception
static void PathFindingInfoFactory_buildPathFindingNodesForCellPosition(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t** mapArray, GeographicMapCellPosition* cellPosition) {
        BasicGeographicMapCellPositionFactory* geographicMapCellPositionFactory = BasicGeographicMap_getGeographicMapCellPositionFactory(geographicMapInterface);
        int32_t cellTypeId = mapArray[GeographicMapCellPosition_getRow(cellPosition)][GeographicMapCellPosition_getColumn(cellPosition)];
        GeographicMapCellType* geographicMapCellType = GeographicMapCellTypeFactory_get(GeographicMapCellTypeFactory_getInstance(), BasicGeographicMap_getCellTypeFromMapCellTypeInt(geographicMapInterface, cellTypeId));
        RaceTrackGeographicMapCellType* raceTrackGeographicMapCellType = ((RaceTrackGeographicMapCellType*) geographicMapCellType);
        AllBinaryTiledLayer* allBinaryTiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        PathFindingNodeCostInfoFactoryBase* pathFindingNodeCostInfoFactoryInterface = PathFindingInfo_getPathFindingNodeCostInfoFactoryInterface(pathFindingInfo);
        BasicGeographicMapUtil* basicGeographicMapUtil = BasicGeographicMapUtil_getInstance();
        int32_t row = 0;
        int32_t column = 0;
        GeographicMapCellPosition* goingToGeographicMapCellPosition = nullptr;
        int32_t costFromStart = 0;
        int32_t costToEnd = 0;
        for (int32_t index = 0; index < this->MAX_DIRECTIONS; index++) {
            row = BasicGeographicMapUtil_getBorderingRow(basicGeographicMapUtil, index, cellPosition);
            column = BasicGeographicMapUtil_getBorderingColumn(basicGeographicMapUtil, index, cellPosition);
            if (row < AllBinaryTiledLayer_getRows(allBinaryTiledLayer) && column < AllBinaryTiledLayer_getColumns(allBinaryTiledLayer) && row >= 0 && column >= 0) {
                goingToGeographicMapCellPosition = BasicGeographicMapCellPositionFactory_getAt(geographicMapCellPositionFactory, column, row);
                costFromStart = RaceTrackGeographicMapCellType_getTravelCost(raceTrackGeographicMapCellType);
                costToEnd = costFromStart;
                PathFindingNodeCostInfoFactoryBase_create(pathFindingNodeCostInfoFactoryInterface, geographicMapInterface, goingToGeographicMapCellPosition, cellPosition, costFromStart, costToEnd);
            }
        }
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

