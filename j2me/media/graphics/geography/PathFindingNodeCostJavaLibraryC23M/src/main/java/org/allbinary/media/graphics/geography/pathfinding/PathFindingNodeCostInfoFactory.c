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
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"

typedef struct PathFindingNodeCostInfoFactory PathFindingNodeCostInfoFactory;
struct PathFindingNodeCostInfoFactory {
    PathFindingNodeCostInfoFactoryBase base;
    PathFindingNodeCostInfo*** pathFindingNodeCostInfoAdjacencyList;
};


PathFindingNodeCostInfoFactory* PathFindingNodeCostInfoFactory_new(int32_t max);

void PathFindingNodeCostInfoFactory_init(PathFindingNodeCostInfoFactory* this, int32_t max);
void PathFindingNodeCostInfoFactory_create(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);
PathFindingNodeCostInfo* PathFindingNodeCostInfoFactory_getInstance(PathFindingNodeCostInfoFactory* this, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);
PathFindingNodeCostInfo* PathFindingNodeCostInfoFactory_getInstance(PathFindingNodeCostInfoFactory* this, GeographicMapCellPosition* goingToFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition);
int64_t PathFindingNodeCostInfoFactory_getTotalCost(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition);

static void PathFindingNodeCostInfoFactory_initFields(PathFindingNodeCostInfoFactory* this) {
    
}


void PathFindingNodeCostInfoFactory_init(PathFindingNodeCostInfoFactory* this, int32_t max) {
    PathFindingNodeCostInfoFactoryBase_init(&this->base);
    PathFindingNodeCostInfoFactory_initFields(this);
        this->pathFindingNodeCostInfoAdjacencyList = ((PathFindingNodeCostInfo***) java_array_new2(sizeof(PathFindingNodeCostInfo*), max, max));
}

PathFindingNodeCostInfoFactory* PathFindingNodeCostInfoFactory_new(int32_t max) {
    PathFindingNodeCostInfoFactory* this = calloc(1, sizeof(PathFindingNodeCostInfoFactory));
    PathFindingNodeCostInfoFactory_init(this, max);
    return this;
}


// throws Exception
void PathFindingNodeCostInfoFactory_create(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) {
        PathFindingNodeCostInfoFactory_getInstance(this, goingToGeographicMapCellPosition, geographicMapCellPosition, costFromStart, costToEnd);
}


// throws Exception
PathFindingNodeCostInfo* PathFindingNodeCostInfoFactory_getInstance(PathFindingNodeCostInfoFactory* this, GeographicMapCellPosition* goingToGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) {
        PathFindingNodeCostInfo* pathFindingNodeCostInfo = PathFindingNodeCostInfoFactory_getInstance(this, goingToGeographicMapCellPosition, geographicMapCellPosition);
        if (pathFindingNodeCostInfo == nullptr) {
            pathFindingNodeCostInfo = PathFindingNodeCostInfo_new(costFromStart, costToEnd);
            PathFindingNodeCostInfo_setCalculatedTotalCost(pathFindingNodeCostInfo);
            this->pathFindingNodeCostInfoAdjacencyList[GeographicMapCellPosition_getId(geographicMapCellPosition)][GeographicMapCellPosition_getId(goingToGeographicMapCellPosition)] = pathFindingNodeCostInfo;
        } else {
            PathFindingNodeCostInfo_setCostFromStart(pathFindingNodeCostInfo, costFromStart);
            PathFindingNodeCostInfo_setCostToEnd(pathFindingNodeCostInfo, costToEnd);
            PathFindingNodeCostInfo_setCalculatedTotalCost(pathFindingNodeCostInfo);
        }
        return pathFindingNodeCostInfo;
}


// Java overloaded method: C needs a different name
PathFindingNodeCostInfo* PathFindingNodeCostInfoFactory_getInstance(PathFindingNodeCostInfoFactory* this, GeographicMapCellPosition* goingToFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) {
        return this->pathFindingNodeCostInfoAdjacencyList[GeographicMapCellPosition_getId(geographicMapCellPosition)][GeographicMapCellPosition_getId(goingToFromGeographicMapCellPosition)];
}


int64_t PathFindingNodeCostInfoFactory_getTotalCost(PathFindingNodeCostInfoFactory* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) {
        return PathFindingNodeCostInfoFactory_getInstance(this, comingFromGeographicMapCellPosition, geographicMapCellPosition)->totalCostP;
}

