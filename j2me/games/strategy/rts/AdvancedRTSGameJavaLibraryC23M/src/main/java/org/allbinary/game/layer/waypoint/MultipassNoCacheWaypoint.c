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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/graphics/geography/map/BasicGeographicMap.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellTypeFactory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCompositeInterface.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/CustomMapGenerator.h"
#include "org/allbinary/media/graphics/geography/map/racetrack/RaceTrackGeographicMap.h"
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathGenerator.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"

typedef struct MultipassNoCacheWaypoint MultipassNoCacheWaypoint;
struct MultipassNoCacheWaypoint {
    WaypointBase base;
    BuildingEventListenerInterface BuildingEventListenerInterface_interface;
    LogUtil* logUtil;
    PathFindingLayerInterface* ownerLayer;
};


MultipassNoCacheWaypoint* MultipassNoCacheWaypoint_new(PathFindingLayerInterface* ownerLayer, Sound* sound);

void MultipassNoCacheWaypoint_init(MultipassNoCacheWaypoint* this, PathFindingLayerInterface* ownerLayer, Sound* sound);
void MultipassNoCacheWaypoint_setAllBinaryGameLayerManager(MultipassNoCacheWaypoint* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
void MultipassNoCacheWaypoint_releaseCachedPaths(MultipassNoCacheWaypoint* this);
PathFindingInfo* MultipassNoCacheWaypoint_getPathFindingInfo(MultipassNoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* MultipassNoCacheWaypoint_getPathsList(MultipassNoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState);
GeographicMapCellPosition* MultipassNoCacheWaypoint_getEndGeographicMapCellPosition(MultipassNoCacheWaypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition);
void MultipassNoCacheWaypoint_onEvent(MultipassNoCacheWaypoint* this, AllBinaryEventObject* eventObject);
void MultipassNoCacheWaypoint_onBuildingEvent(MultipassNoCacheWaypoint* this, RTSLayerEvent* event);
void MultipassNoCacheWaypoint_reset(MultipassNoCacheWaypoint* this);
void MultipassNoCacheWaypoint_visit(MultipassNoCacheWaypoint* this, PathFindingLayerInterface* unitLayer);

static void MultipassNoCacheWaypoint_initFields(MultipassNoCacheWaypoint* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void MultipassNoCacheWaypoint_init(MultipassNoCacheWaypoint* this, PathFindingLayerInterface* ownerLayer, Sound* sound) {
        WaypointBase_init(&this->base, sound);
        MultipassNoCacheWaypoint_initFields(this);
        this->ownerLayer = ownerLayer;
}

MultipassNoCacheWaypoint* MultipassNoCacheWaypoint_new(PathFindingLayerInterface* ownerLayer, Sound* sound) {
    MultipassNoCacheWaypoint* this = calloc(1, sizeof(MultipassNoCacheWaypoint));
    MultipassNoCacheWaypoint_init(this, ownerLayer, sound);
    return this;
}


// throws Exception
void MultipassNoCacheWaypoint_setAllBinaryGameLayerManager(MultipassNoCacheWaypoint* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        WaypointBase_setAllBinaryGameLayerManager((&this->base), allBinaryGameLayerManager);
}


void MultipassNoCacheWaypoint_releaseCachedPaths(MultipassNoCacheWaypoint* this) {
}


// throws Exception
PathFindingInfo* MultipassNoCacheWaypoint_getPathFindingInfo(MultipassNoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition) {
        GeographicMapCellPosition* startGeographicMapCellPosition = geographicMapCellPosition;
        GeographicMapCellPosition* endGeographicMapCellPosition = MultipassNoCacheWaypoint_getEndGeographicMapCellPosition(this, startGeographicMapCellPosition);
        if (endGeographicMapCellPosition == nullptr) {
            return PathFindingInfo_NULL_PATH_FINDING_INFO;
        }
        if (startGeographicMapCellPosition == endGeographicMapCellPosition) {
            if (PathFindingLayerInterface_shouldHandleStartSameAsEnd(this->ownerLayer)) {
                return PathFindingInfo_NULL_PATH_FINDING_INFO;
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
        return pathFindingInfo;
}


// throws Exception
BasicArrayList* MultipassNoCacheWaypoint_getPathsList(MultipassNoCacheWaypoint* this, GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState) {
        JAVA_TRY {
            if (pathFindingInfo == nullptr) {
                LogUtil_putF(this->logUtil, java_concat("pathFindingInfo: ", java_string_of(pathFindingInfo)), this, "getPathsList");
                return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
            }
            GeographicMapCompositeInterface* geographicMapCompositeInterface = ((GeographicMapCompositeInterface*) this->allBinaryGameLayerManagerP);
            BasicGeographicMap* geographicMapInterface = GeographicMapCompositeInterface_getGeographicMapInterface(geographicMapCompositeInterface)[0];
            BasicArrayList* list = PathGenerator_createN(PathGenerator_getInstance(), geographicMapInterface, pathFindingInfo, 2, multipassState);
            if (list != nullptr && list != BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance())) {
                if (BasicArrayList_size(list) < 1) {
                    java_throw(java_exception_new("Exception", "Path may have been cleared by clearing caching"));
                }
                return list;
            }
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "getPathsList", e);
            return BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
        } JAVA_END_TRY;
}


// throws Exception
GeographicMapCellPosition* MultipassNoCacheWaypoint_getEndGeographicMapCellPosition(MultipassNoCacheWaypoint* this, GeographicMapCellPosition* startGeographicMapCellPosition) {
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


void MultipassNoCacheWaypoint_onEvent(MultipassNoCacheWaypoint* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
void MultipassNoCacheWaypoint_onBuildingEvent(MultipassNoCacheWaypoint* this, RTSLayerEvent* event) {
}


void MultipassNoCacheWaypoint_reset(MultipassNoCacheWaypoint* this) {
        JAVA_CALL(MultipassNoCacheWaypoint_getConnectedWaypointList(this), clear);
}


// throws Exception
void MultipassNoCacheWaypoint_visit(MultipassNoCacheWaypoint* this, PathFindingLayerInterface* unitLayer) {
        if (PathFindingLayerInterface_getGroupInterface(unitLayer)[0] != PathFindingLayerInterface_getGroupInterface(this->ownerLayer)[0]) {
            return;
        }
        int32_t size = JAVA_CALL(MultipassNoCacheWaypoint_getConnectedWaypointList(this), size);
        if (size > 0) {
            UnitWaypointBehavior* unitWaypointBehavior = ((UnitWaypointBehavior*) PathFindingLayerInterface_getWaypointBehavior(unitLayer));
            while (JAVA_CALL(MultipassNoCacheWaypoint_getConnectedWaypointList(this), size) > 0) {
                CollidableDestroyableDamageableLayer* rtsLayer = ((CollidableDestroyableDamageableLayer*) JAVA_CALL(MultipassNoCacheWaypoint_getConnectedWaypointList(this), get, 0));
                if (CollidableDestroyableDamageableLayer_isDestroyed(rtsLayer)) {
                    JAVA_CALL(MultipassNoCacheWaypoint_getConnectedWaypointList(this), remove, rtsLayer);
                } else {
                    PathFindingLayerInterface_handleCost(unitLayer, this->ownerLayer);
                    UnitWaypointBehavior_insertWaypoint(unitWaypointBehavior, 0, rtsLayer);
                    break;
                }
            }
        }
}

