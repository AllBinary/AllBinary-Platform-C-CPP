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
#include "org/allbinary/game/layer/AllBinaryTiledLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/building/event/BuildingEventListenerInterface.h"
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#include "org/allbinary/game/media/graphics/geography/map/racetrack/PathFindingInfoFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/pathfinding/BasicGeographicMapExtractedPathsCacheFactory.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"

typedef struct Waypoint Waypoint;
struct Waypoint {
    WaypointBase base;
    BuildingEventListenerInterface BuildingEventListenerInterface_interface;
    LogUtil* logUtil;
    BasicArrayListUtil* basicArrayListUtil;
    PathFindingLayerInterface* ownerLayer;
    BasicArrayList* endList;
    BasicArrayList*** paths;
};


Waypoint* Waypoint_new(PathFindingLayerInterface* ownerLayer, Sound* sound);

void Waypoint_init(Waypoint* this, PathFindingLayerInterface* ownerLayer, Sound* sound);
void Waypoint_setAllBinaryGameLayerManager(Waypoint* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void Waypoint_releaseCachedPaths(Waypoint* this);
BasicArrayList* Waypoint_getPathsListFromCacheOnly(Waypoint* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* Waypoint_getPathsListRunnable(Waypoint* this, GeographicMapCellPosition* geographicMapCellPosition);
GeographicMapCellPosition* Waypoint_getEndGeographicMapCellPosition(Waypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition);
static BasicArrayList* Waypoint_createPaths(Waypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition);
void Waypoint_onEvent(Waypoint* this, AllBinaryEventObject* eventObject);
void Waypoint_onBuildingEvent(Waypoint* this, RTSLayerEvent* event);
static void Waypoint_clearPaths(Waypoint* this);
void Waypoint_reset(Waypoint* this);
void Waypoint_visit(Waypoint* this, PathFindingLayerInterface* unitLayer);

static void Waypoint_initFields(Waypoint* this) {
    this->logUtil = LogUtil_getInstance();
    this->basicArrayListUtil = BasicArrayListUtil_getInstance();
    
    this->endList = BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
    this->paths = this->basicArrayListUtil->NULL_ARRAY_OF_ARRAY;
}


void Waypoint_init(Waypoint* this, PathFindingLayerInterface* ownerLayer, Sound* sound) {
        WaypointBase_init(&this->base, sound);
        Waypoint_initFields(this);
        this->ownerLayer = ownerLayer;
}

Waypoint* Waypoint_new(PathFindingLayerInterface* ownerLayer, Sound* sound) {
    Waypoint* this = calloc(1, sizeof(Waypoint));
    Waypoint_init(this, ownerLayer, sound);
    return this;
}


// throws Exception
void Waypoint_setAllBinaryGameLayerManager(Waypoint* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        WaypointBase_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
        GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) allBinaryGameLayerManager);
        BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
        AllBinaryTiledLayer* tiledLayer = BasicGeographicMap_getAllBinaryTiledLayer(geographicMapInterface);
        if (this->paths != this->basicArrayListUtil->NULL_ARRAY_OF_ARRAY) {
            java_throw(java_exception_new("RuntimeException", ""));
        }
        this->endList = PathFindingLayerInterface_getEndGeographicMapCellPositionList(this->ownerLayer);
        this->paths = ((BasicArrayList***) java_array_new2(sizeof(BasicArrayList*), AllBinaryTiledLayer_getColumns(tiledLayer), AllBinaryTiledLayer_getRows(tiledLayer)));
        Waypoint_clearPaths(this);
}


void Waypoint_releaseCachedPaths(Waypoint* this) {
        for (int32_t columnIndex = java_array_length(this->paths); --columnIndex >= 0; ) {
            for (int32_t rowIndex = java_array_length(this->paths); --rowIndex >= 0; ) {
                BasicArrayList* pathsList = this->paths[columnIndex][rowIndex];
                if (pathsList != BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
                    BasicGeographicMapExtractedPathsCacheFactory_release(BasicGeographicMapExtractedPathsCacheFactory_getInstance(), pathsList);
                }
            }
        }
}


// throws Exception
BasicArrayList* Waypoint_getPathsListFromCacheOnly(Waypoint* this, GeographicMapCellPosition* geographicMapCellPosition) {
        return this->paths[GeographicMapCellPosition_getColumn(geographicMapCellPosition)][GeographicMapCellPosition_getRow(geographicMapCellPosition)];
}


// throws Exception
BasicArrayList* Waypoint_getPathsListRunnable(Waypoint* this, GeographicMapCellPosition* geographicMapCellPosition) {
        BasicArrayList* pathsList = this->paths[GeographicMapCellPosition_getColumn(geographicMapCellPosition)][GeographicMapCellPosition_getRow(geographicMapCellPosition)];
        if (pathsList == BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil)) {
            pathsList = Waypoint_createPaths(this, geographicMapCellPosition);
            this->paths[GeographicMapCellPosition_getColumn(geographicMapCellPosition)][GeographicMapCellPosition_getRow(geographicMapCellPosition)] = pathsList;
        }
        return pathsList;
}


GeographicMapCellPosition* Waypoint_getEndGeographicMapCellPosition(Waypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition) {
        GeographicMapCellPosition* endGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayListUtil_getRandom(this->basicArrayListUtil, this->endList));
        if (startGeographicMapCellPosition == endGeographicMapCellPosition) {
            for (int32_t index = BasicArrayList_size(this->endList) - 1; index >= 0; index--) {
                endGeographicMapCellPosition = ((GeographicMapCellPosition*) BasicArrayList_get(this->endList, index));
                if (startGeographicMapCellPosition != endGeographicMapCellPosition) {
                    break;
                }
            }
        }
        return endGeographicMapCellPosition;
}


// throws Exception
static BasicArrayList* Waypoint_createPaths(Waypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition) {
        if (BasicArrayList_size(this->endList) == 0) {
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        }
        GeographicMapCellPosition* endGeographicMapCellPosition = Waypoint_getEndGeographicMapCellPosition(this, startGeographicMapCellPosition);
        if (endGeographicMapCellPosition == nullptr) {
            return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
        }
        if (startGeographicMapCellPosition == endGeographicMapCellPosition) {
            if (PathFindingLayerInterface_shouldHandleStartSameAsEnd(this->ownerLayer)) {
                return BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
            } else {
                java_throw(java_exception_new("Exception", java_concat("Start should not be End: ", java_string_of(BasicArrayList_size(this->endList)))));
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


void Waypoint_onEvent(Waypoint* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void Waypoint_onBuildingEvent(Waypoint* this, RTSLayerEvent* event) {
        Waypoint_clearPaths(this);
}


static void Waypoint_clearPaths(Waypoint* this) {
        for (int32_t columnIndex = java_array_length(this->paths); --columnIndex >= 0; ) {
            for (int32_t rowIndex = java_array_length(this->paths); --rowIndex >= 0; ) {
                this->paths[columnIndex][rowIndex] = BasicArrayListUtil_getImmutableInstance(this->basicArrayListUtil);
            }
        }
}


void Waypoint_reset(Waypoint* this) {
        JAVA_CALL(Waypoint_getConnectedWaypointList(this), clear);
        Waypoint_releaseCachedPaths(this);
}


// throws Exception
void Waypoint_visit(Waypoint* this, PathFindingLayerInterface* unitLayer) {
        if (PathFindingLayerInterface_getGroupInterface(unitLayer)[0] != PathFindingLayerInterface_getGroupInterface(this->ownerLayer)[0]) {
            return;
        }
        int32_t size = JAVA_CALL(Waypoint_getConnectedWaypointList(this), size);
        if (size > 0) {
            UnitWaypointBehavior* unitWaypointBehavior = ((UnitWaypointBehavior*) PathFindingLayerInterface_getWaypointBehavior(unitLayer));
            while (JAVA_CALL(Waypoint_getConnectedWaypointList(this), size) > 0) {
                CollidableDestroyableDamageableLayer* rtsLayer = ((CollidableDestroyableDamageableLayer*) JAVA_CALL(Waypoint_getConnectedWaypointList(this), get, 0));
                if (CollidableDestroyableDamageableLayer_isDestroyed(rtsLayer)) {
                    JAVA_CALL(Waypoint_getConnectedWaypointList(this), remove, rtsLayer);
                } else {
                    PathFindingLayerInterface_handleCost(unitLayer, this->ownerLayer);
                    UnitWaypointBehavior_insertWaypoint(unitWaypointBehavior, 0, rtsLayer);
                    break;
                }
            }
        }
}

