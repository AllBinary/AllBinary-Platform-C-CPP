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
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathGeneratorInterface.h"

typedef struct PathGenerator PathGenerator;
struct PathGenerator {
    PathGeneratorInterface PathGeneratorInterface_interface;
};

static PathGenerator* PathGenerator_SINGLETON;

PathGenerator* PathGenerator_new(void);
PathGenerator* PathGenerator_getInstance(void);

void PathGenerator_init(PathGenerator* this);
void PathGenerator_init(PathGenerator* this, Any* geographicMapInterface, int32_t totalPaths);
BasicArrayList* PathGenerator_getInstanceNoCache(PathGenerator* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths);
BasicArrayList* PathGenerator_createList(PathGenerator* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths);
static BasicArrayList* PathGenerator_create(PathGenerator* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths);
BasicArrayList* PathGenerator_createN(PathGenerator* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths, MultipassState* multipassState);
static bool PathGenerator_isValid(PathGenerator* this, BasicArrayList* pathList, GeographicMapCellHistory* geographicMapCellHistory);

// Static fields with runtime initializers: call this once at startup
void PathGenerator_staticInit(void) {
    PathGenerator_SINGLETON = PathGenerator_new();
}


PathGenerator* PathGenerator_getInstance(void) {
        return PathGenerator_SINGLETON;
}


void PathGenerator_init(PathGenerator* this) {
}

PathGenerator* PathGenerator_new(void) {
    PathGenerator* this = calloc(1, sizeof(PathGenerator));
    PathGenerator_init(this);
    return this;
}


// throws Exception
void PathGenerator_init(PathGenerator* this, Any* geographicMapInterface, int32_t totalPaths) {
}


// throws Exception
BasicArrayList* PathGenerator_getInstanceNoCache(PathGenerator* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths) {
        BasicArrayList* geographicMapCellPositionBasicArrayList = PathGenerator_create(this, geographicMapInterface, pathFindingInfo, totalPaths);
        return geographicMapCellPositionBasicArrayList;
}


// throws Exception
BasicArrayList* PathGenerator_createList(PathGenerator* this, BasicGeographicMap* geographicMapInterface, GeographicMapCellHistory* geographicMapCellHistory, PathFindingInfo* pathFindingInfo, int32_t totalPaths) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
static BasicArrayList* PathGenerator_create(PathGenerator* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths) {
        BasicArrayList* startPathFindingNodeList = PathFindingInfo_getStartPathFindingNodeList(pathFindingInfo);
        BasicArrayList* endPathFindingNodeList = PathFindingInfo_getEndPathFindingNodeList(pathFindingInfo);
        GeographicPathFinderBase* geographicPathFinderInterface = PathFindingInfo_getPathFinder(pathFindingInfo);
        BasicArrayList* geographicMapCellPositionBasicArrayList = GeographicPathFinderBase_searchTotalPath(geographicPathFinderInterface, startPathFindingNodeList, endPathFindingNodeList, totalPaths);
        return geographicMapCellPositionBasicArrayList;
}


// throws Exception
BasicArrayList* PathGenerator_createN(PathGenerator* this, BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t totalPaths, MultipassState* multipassState) {
        BasicArrayList* startPathFindingNodeList = PathFindingInfo_getStartPathFindingNodeList(pathFindingInfo);
        BasicArrayList* endPathFindingNodeList = PathFindingInfo_getEndPathFindingNodeList(pathFindingInfo);
        GeographicPathFinderBase* geographicPathFinderInterface = PathFindingInfo_getPathFinder(pathFindingInfo);
        BasicArrayList* geographicMapCellPositionBasicArrayList = GeographicPathFinderBase_searchTotalPathN(geographicPathFinderInterface, startPathFindingNodeList, endPathFindingNodeList, totalPaths, multipassState);
        return geographicMapCellPositionBasicArrayList;
}


// throws Exception
static bool PathGenerator_isValid(PathGenerator* this, BasicArrayList* pathList, GeographicMapCellHistory* geographicMapCellHistory) {
        java_throw(java_exception_new("RuntimeException", ""));
}

