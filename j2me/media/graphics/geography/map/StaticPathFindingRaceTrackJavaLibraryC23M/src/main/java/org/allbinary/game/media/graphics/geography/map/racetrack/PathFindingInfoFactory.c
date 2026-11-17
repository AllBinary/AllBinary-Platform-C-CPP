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
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/BasePathFindingInfoFactory.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackRoadsGeographicMapCellHistoryFactory.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingNodeCostInfoFactoryBase.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct PathFindingInfoFactory PathFindingInfoFactory;
struct PathFindingInfoFactory {
    BasePathFindingInfoFactory base;
};

static PathFindingInfoFactory* PathFindingInfoFactory_instance;

PathFindingInfoFactory* PathFindingInfoFactory_new(void);
PathFindingInfoFactory* PathFindingInfoFactory_getInstance(void);

void PathFindingInfoFactory_init(PathFindingInfoFactory* this);
PathFindingInfo* PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** graphArray);

// Static fields with runtime initializers: call this once at startup
void PathFindingInfoFactory_staticInit(void) {
    PathFindingInfoFactory_instance = PathFindingInfoFactory_new();
}


PathFindingInfoFactory* PathFindingInfoFactory_getInstance(void) {
        return PathFindingInfoFactory_instance;
}


void PathFindingInfoFactory_init(PathFindingInfoFactory* this) {
    BasePathFindingInfoFactory_init(&this->base);
}

PathFindingInfoFactory* PathFindingInfoFactory_new(void) {
    PathFindingInfoFactory* this = calloc(1, sizeof(PathFindingInfoFactory));
    PathFindingInfoFactory_init(this);
    return this;
}


// throws Exception
PathFindingInfo* PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory* this, BasicGeographicMap* geographicMapInterface, int32_t** graphArray) {
        CommonStrings* commonStrings = CommonStrings_getInstance();
        PreLogUtil_put(commonStrings->START, this, commonStrings->GET_INSTANCE);
        PathFindingInfo* pathFindingInfo = PathFindingInfo_new(PathFindingNodeCostInfoFactoryBase_new(), BasicArrayListS_new(1), BasicArrayListS_new(1));
        RaceTrackRoadsGeographicMapCellHistoryFactory_init(RaceTrackRoadsGeographicMapCellHistoryFactory_getInstance());
        PathFindingInfoFactory_init(this, geographicMapInterface, pathFindingInfo, graphArray);
        return pathFindingInfo;
}

