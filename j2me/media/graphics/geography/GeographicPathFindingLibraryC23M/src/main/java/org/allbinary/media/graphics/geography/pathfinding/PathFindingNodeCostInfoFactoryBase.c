/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBaseInterface.h"

typedef struct PathFindingNodeCostInfoFactoryBase PathFindingNodeCostInfoFactoryBase;
struct PathFindingNodeCostInfoFactoryBase {
    PathFindingNodeCostInfoFactoryBaseInterface PathFindingNodeCostInfoFactoryBaseInterface_interface;
};

PathFindingNodeCostInfoFactoryBase* PathFindingNodeCostInfoFactoryBase_NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE;

PathFindingNodeCostInfoFactoryBase* PathFindingNodeCostInfoFactoryBase_new(void);
void PathFindingNodeCostInfoFactoryBase_create(PathFindingNodeCostInfoFactoryBase* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd);
int64_t PathFindingNodeCostInfoFactoryBase_getTotalCost(PathFindingNodeCostInfoFactoryBase* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void PathFindingNodeCostInfoFactoryBase_staticInit(void) {
    PathFindingNodeCostInfoFactoryBase_NULL_PATH_FINDING_NODE_COST_INFO_FACTORY_BASE = PathFindingNodeCostInfoFactoryBase_new();
}

void PathFindingNodeCostInfoFactoryBase_init(PathFindingNodeCostInfoFactoryBase* this) {
}

PathFindingNodeCostInfoFactoryBase* PathFindingNodeCostInfoFactoryBase_new(void) {
    PathFindingNodeCostInfoFactoryBase* this = calloc(1, sizeof(PathFindingNodeCostInfoFactoryBase));
    PathFindingNodeCostInfoFactoryBase_init(this);
    return this;
}


// throws Exception
void PathFindingNodeCostInfoFactoryBase_create(PathFindingNodeCostInfoFactoryBase* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition, int64_t costFromStart, int64_t costToEnd) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
int64_t PathFindingNodeCostInfoFactoryBase_getTotalCost(PathFindingNodeCostInfoFactoryBase* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellPosition* comingFromGeographicMapCellPosition, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}

