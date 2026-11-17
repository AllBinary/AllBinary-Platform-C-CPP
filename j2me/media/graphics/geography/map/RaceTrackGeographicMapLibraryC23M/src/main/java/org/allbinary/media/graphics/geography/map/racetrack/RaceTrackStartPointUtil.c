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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNode.h"

typedef struct RaceTrackStartPointUtil RaceTrackStartPointUtil;
struct RaceTrackStartPointUtil {
    char unused;
};


RaceTrackStartPointUtil* RaceTrackStartPointUtil_new(void);
GPoint* RaceTrackStartPointUtil_get(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t index);

void RaceTrackStartPointUtil_init(RaceTrackStartPointUtil* this) {
}

RaceTrackStartPointUtil* RaceTrackStartPointUtil_new(void) {
    RaceTrackStartPointUtil* this = calloc(1, sizeof(RaceTrackStartPointUtil));
    RaceTrackStartPointUtil_init(this);
    return this;
}


// throws Exception
GPoint* RaceTrackStartPointUtil_get(BasicGeographicMap* geographicMapInterface, PathFindingInfo* pathFindingInfo, int32_t index) {
        BasicArrayList* list = PathFindingInfo_getStartPathFindingNodeList(pathFindingInfo);
        PathFindingNode* startPathFindingNode = ((PathFindingNode*) BasicArrayList_get(list, index));
        GeographicMapCellPosition* geographicMapCellPosition = startPathFindingNode->geographicMapCellPosition;
        GPoint* point = GeographicMapCellPosition_getPoint(geographicMapCellPosition);
        return PointFactory_createXY(PointFactory_getInstance(), GPoint_getX(point), GPoint_getY(point) + JAVA_CALL(BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface), getHalfCellHeight));
}

