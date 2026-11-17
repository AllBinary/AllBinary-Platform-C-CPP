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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#include "org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"

typedef struct NoCacheWaypoint NoCacheWaypoint;
struct NoCacheWaypoint {
    WaypointBase base;
    BuildingEventListenerInterface BuildingEventListenerInterface_interface;
    PathFindingLayerInterface* ownerLayer;
};


NoCacheWaypoint* NoCacheWaypoint_new(PathFindingLayerInterface* ownerLayer, Sound* sound);

void NoCacheWaypoint_init(NoCacheWaypoint* this, PathFindingLayerInterface* ownerLayer, Sound* sound);
void NoCacheWaypoint_setAllBinaryGameLayerManager(NoCacheWaypoint* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void NoCacheWaypoint_releaseCachedPaths(NoCacheWaypoint* this);
BasicArrayList* NoCacheWaypoint_getPathsListFromCacheOnly(NoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* NoCacheWaypoint_getPathsListRunnable(NoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* NoCacheWaypoint_getEndGeographicMapCellPosition(NoCacheWaypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition);
static BasicArrayList* NoCacheWaypoint_createPaths(NoCacheWaypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition);
void NoCacheWaypoint_onEvent(NoCacheWaypoint* this, AllBinaryEventObject* eventObject);
void NoCacheWaypoint_onBuildingEvent(NoCacheWaypoint* this, RTSLayerEvent* event);
void NoCacheWaypoint_reset(NoCacheWaypoint* this);
void NoCacheWaypoint_visit(NoCacheWaypoint* this, PathFindingLayerInterface* unitLayer);

static void NoCacheWaypoint_initFields(NoCacheWaypoint* this) {
    
}


void NoCacheWaypoint_init(NoCacheWaypoint* this, PathFindingLayerInterface* ownerLayer, Sound* sound) {
        WaypointBase_init(&this->base, sound);
        NoCacheWaypoint_initFields(this);
        this->ownerLayer = ownerLayer;
}

NoCacheWaypoint* NoCacheWaypoint_new(PathFindingLayerInterface* ownerLayer, Sound* sound) {
    NoCacheWaypoint* this = calloc(1, sizeof(NoCacheWaypoint));
    NoCacheWaypoint_init(this, ownerLayer, sound);
    return this;
}


// throws Exception
void NoCacheWaypoint_setAllBinaryGameLayerManager(NoCacheWaypoint* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        WaypointBase_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
}


void NoCacheWaypoint_releaseCachedPaths(NoCacheWaypoint* this) {
}


// throws Exception
BasicArrayList* NoCacheWaypoint_getPathsListFromCacheOnly(NoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition) {
        return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}


// throws Exception
BasicArrayList* NoCacheWaypoint_getPathsListRunnable(NoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition) {
        return NoCacheWaypoint_createPaths(this, geographicMapCellPosition);
}


// throws Exception
GeographicMapCellPosition* NoCacheWaypoint_getEndGeographicMapCellPosition(NoCacheWaypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition) {
        BasicArrayList* endList = PathFindingLayerInterface_getEndGeographicMapCellPositionList(this->ownerLayer);
        GeographicMapCellPosition* endGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayListUtil_getRandom(BasicArrayListUtil_getInstance(), endList));
        if (startGeographicMapCellPosition == endGeographicMapCellPosition) {
            for (int32_t index = BasicArrayList_size(endList) - 1; index >= 0; index--) {
                endGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(endList, index));
                if (startGeographicMapCellPosition != endGeographicMapCellPosition) {
                    break;
                }
            }
        }
        return endGeographicMapCellPosition;
}


// throws Exception
static BasicArrayList* NoCacheWaypoint_createPaths(NoCacheWaypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition) {
        GeographicMapCellPosition* endGeographicMapCellPosition = NoCacheWaypoint_getEndGeographicMapCellPosition(this, startGeographicMapCellPosition);
        if (endGeographicMapCellPosition == nullptr) {
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        }
        if (startGeographicMapCellPosition == endGeographicMapCellPosition) {
            if (PathFindingLayerInterface_shouldHandleStartSameAsEnd(this->ownerLayer)) {
                return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
            } else {
                java_throw(java_exception_new("Exception", java_concat("Start should not be End: ", java_string_of(endGeographicMapCellPosition))));
            }
        }
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        RaceTrackGeographicMap* raceTrackGeographicMap = ((RaceTrackGeographicMap*) geographicMapInterface);
        GeographicMapCellTypeFactory* raceTrackGeographicMapCellTypeFactory = RaceTrackGeographicMap_getGeographicMapCellTypeFactory(raceTrackGeographicMap);
        CustomMapGenerator* customMapGenerator = ((CustomMapGenerator*) RaceTrackGeographicMap_getCustomMapGenerator(raceTrackGeographicMap));
        CustomMapGenerator_copyMapIntoCustomMap(customMapGenerator);
        int32_t** customMapArray = CustomMapGenerator_getCustomMapArray(customMapGenerator);
        customMapArray[GeographicMapCellPosition_getRow(startGeographicMapCellPosition)][GeographicMapCellPosition_getColumn(startGeographicMapCellPosition)] = GeographicMapCellTypeFactory_getStartType(raceTrackGeographicMapCellTypeFactory);
        customMapArray[GeographicMapCellPosition_getRow(endGeographicMapCellPosition)][GeographicMapCellPosition_getColumn(endGeographicMapCellPosition)] = GeographicMapCellTypeFactory_getEndType(raceTrackGeographicMapCellTypeFactory);
        PathFindingInfo* pathFindingInfo = PathFindingInfoFactory_getInstancePathFindingInfo(PathFindingInfoFactory_getInstance(), raceTrackGeographicMap, customMapArray);
        BasicArrayList* list = PathGenerator_getInstanceNoCache(PathGenerator_getInstance(), geographicMapInterface, pathFindingInfo, 2);
        if (BasicArrayList_size(list) < 1) {
            java_throw(java_exception_new("Exception", "Path may have been cleared by clearing caching"));
        }
        return list;
}


void NoCacheWaypoint_onEvent(NoCacheWaypoint* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void NoCacheWaypoint_onBuildingEvent(NoCacheWaypoint* this, RTSLayerEvent* event) {
}


void NoCacheWaypoint_reset(NoCacheWaypoint* this) {
        JAVA_CALL(NoCacheWaypoint_getConnectedWaypointList(this), clear);
}


// throws Exception
void NoCacheWaypoint_visit(NoCacheWaypoint* this, PathFindingLayerInterface* unitLayer) {
        if (PathFindingLayerInterface_getGroupInterface(unitLayer)[0] != PathFindingLayerInterface_getGroupInterface(this->ownerLayer)[0]) {
            return;
        }
        int32_t size = JAVA_CALL(NoCacheWaypoint_getConnectedWaypointList(this), size);
        if (size > 0) {
            UnitWaypointBehavior* unitWaypointBehavior = ((UnitWaypointBehavior*) PathFindingLayerInterface_getWaypointBehavior(unitLayer));
            while (JAVA_CALL(NoCacheWaypoint_getConnectedWaypointList(this), size) > 0) {
                CollidableDestroyableDamageableLayer* rtsLayer = ((CollidableDestroyableDamageableLayer*) JAVA_CALL(NoCacheWaypoint_getConnectedWaypointList(this), get, 0));
                if (CollidableDestroyableDamageableLayer_isDestroyed(rtsLayer)) {
                    JAVA_CALL(NoCacheWaypoint_getConnectedWaypointList(this), remove, rtsLayer);
                } else {
                    PathFindingLayerInterface_handleCost(unitLayer, this->ownerLayer);
                    UnitWaypointBehavior_insertWaypoint(unitWaypointBehavior, 0, rtsLayer);
                    break;
                }
            }
        }
}

