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
// package org.allbinary.game.layer.waypoint

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct WaypointLayerInterface WaypointLayerInterface;
struct WaypointLayerInterface {
    void (*init)(void* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);
    BasicArrayList* (*getMoveOutOfBuildAreaPath)(void* this, GeographicMapCellPosition* geographicMapCellPosition);
    void (*setClosestGeographicMapCellHistory)(void* this, BasicArrayList* pathsList);
    void (*teleportTo)(void* this, GeographicMapCellPosition* geographicMapCellPosition);
    void (*setLoad)(void* this, int32_t resource);
    BasicArrayList* (*getSurroundingGeographicMapCellPositionList)(void* this);
    bool (*isSelected)(void* this);
    bool (*shouldAddWaypointFromBuilding)(void* this);
    bool (*isShowMoreCaptionStates)(void* this);
    void (*trackTo)(void* this, const char* reason);
    void (*trackToDXY)(void* this, int32_t dx, int32_t dy);
    bool (*buildingChase)(void* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);
    TrackingEvent* (*getTrackingEvent)(void* this);
    void (*allStop)(void* this);
    bool (*isWaypointListEmptyOrOnlyTargets)(void* this);
    GeographicMapCellPosition* (*getCurrentGeographicMapCellPosition)(void* this);
    GeographicMapCellPosition* (*getTopLeftGeographicMapCellPosition)(void* this);
    CaptionAnimationHelperBase* (*getCaptionAnimationHelper)(void* this);
    WaypointBehaviorBase* (*getWaypointBehavior)(void* this);
    WaypointLogHelper* (*getWaypointLogHelper)(void* this);
    Waypoint2LogHelper* (*getWaypoint2LogHelper)(void* this);
    WaypointRunnableLogHelper* (*getWaypointRunnableLogHelper)(void* this);
};


