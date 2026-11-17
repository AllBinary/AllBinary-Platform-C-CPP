/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/caption/CaptionAnimationHelperBase.h"
#include "org/allbinary/game/identification/Group.h"
#include "org/allbinary/game/layer/waypoint/Waypoint2LogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointLogHelper.h"
#include "org/allbinary/game/layer/waypoint/WaypointRunnableLogHelper.h"
#include "org/allbinary/game/tracking/TrackingEvent.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"

typedef struct NullPathFindingLayer NullPathFindingLayer;
struct NullPathFindingLayer {
    PathFindingLayerInterface PathFindingLayerInterface_interface;
};

NullPathFindingLayer* NullPathFindingLayer_NULL_PATH_FINDING_LAYER;

NullPathFindingLayer* NullPathFindingLayer_new(void);
const char* NullPathFindingLayer_getName(NullPathFindingLayer* this);
BasicArrayList* NullPathFindingLayer_getEndGeographicMapCellPositionList(NullPathFindingLayer* this);
bool NullPathFindingLayer_shouldHandleStartSameAsEnd(NullPathFindingLayer* this);
GeographicMapCellPositionAreaBase* NullPathFindingLayer_getGeographicMapCellPositionArea(NullPathFindingLayer* this);
SelectionHudPaintable* NullPathFindingLayer_getHudPaintable(NullPathFindingLayer* this);
void NullPathFindingLayer_handleCost(NullPathFindingLayer* this, PathFindingLayerInterface* ownerLayer);
PathFindingLayerInterface* NullPathFindingLayer_getParentLayer(NullPathFindingLayer* this);
RTSLayer2LogHelper* NullPathFindingLayer_getRTSLayer2LogHelper(NullPathFindingLayer* this);
void NullPathFindingLayer_setTarget(NullPathFindingLayer* this, PathFindingLayerInterface* targetGameLayer);
void NullPathFindingLayer_init(NullPathFindingLayer* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList);
BasicArrayList* NullPathFindingLayer_getMoveOutOfBuildAreaPath(NullPathFindingLayer* this, GeographicMapCellPosition* geographicMapCellPosition);
void NullPathFindingLayer_setClosestGeographicMapCellHistory(NullPathFindingLayer* this, BasicArrayList* pathsList);
void NullPathFindingLayer_teleportTo(NullPathFindingLayer* this, GeographicMapCellPosition* geographicMapCellPosition);
void NullPathFindingLayer_setLoad(NullPathFindingLayer* this, int32_t resource);
BasicArrayList* NullPathFindingLayer_getSurroundingGeographicMapCellPositionList(NullPathFindingLayer* this);
bool NullPathFindingLayer_isSelected(NullPathFindingLayer* this);
bool NullPathFindingLayer_shouldAddWaypointFromBuilding(NullPathFindingLayer* this);
bool NullPathFindingLayer_isShowMoreCaptionStates(NullPathFindingLayer* this);
void NullPathFindingLayer_trackTo(NullPathFindingLayer* this, const char* reason);
void NullPathFindingLayer_trackToDXY(NullPathFindingLayer* this, int32_t dx, int32_t dy);
bool NullPathFindingLayer_buildingChase(NullPathFindingLayer* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition);
TrackingEvent* NullPathFindingLayer_getTrackingEvent(NullPathFindingLayer* this);
void NullPathFindingLayer_allStop(NullPathFindingLayer* this);
bool NullPathFindingLayer_isWaypointListEmptyOrOnlyTargets(NullPathFindingLayer* this);
GeographicMapCellPosition* NullPathFindingLayer_getCurrentGeographicMapCellPosition(NullPathFindingLayer* this);
GeographicMapCellPosition* NullPathFindingLayer_getTopLeftGeographicMapCellPosition(NullPathFindingLayer* this);
CaptionAnimationHelperBase* NullPathFindingLayer_getCaptionAnimationHelper(NullPathFindingLayer* this);
WaypointBehaviorBase* NullPathFindingLayer_getWaypointBehavior(NullPathFindingLayer* this);
WaypointLogHelper* NullPathFindingLayer_getWaypointLogHelper(NullPathFindingLayer* this);
Waypoint2LogHelper* NullPathFindingLayer_getWaypoint2LogHelper(NullPathFindingLayer* this);
WaypointRunnableLogHelper* NullPathFindingLayer_getWaypointRunnableLogHelper(NullPathFindingLayer* this);
Group** NullPathFindingLayer_getGroupInterface(NullPathFindingLayer* this);
bool NullPathFindingLayer_isDestroyed(NullPathFindingLayer* this);
int32_t NullPathFindingLayer_getSourceId(NullPathFindingLayer* this);

// Static fields with runtime initializers: call this once at startup
void NullPathFindingLayer_staticInit(void) {
    NullPathFindingLayer_NULL_PATH_FINDING_LAYER = NullPathFindingLayer_new();
}

void NullPathFindingLayer_init(NullPathFindingLayer* this) {
}

NullPathFindingLayer* NullPathFindingLayer_new(void) {
    NullPathFindingLayer* this = calloc(1, sizeof(NullPathFindingLayer));
    NullPathFindingLayer_init(this);
    return this;
}


const char* NullPathFindingLayer_getName(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
BasicArrayList* NullPathFindingLayer_getEndGeographicMapCellPositionList(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullPathFindingLayer_shouldHandleStartSameAsEnd(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GeographicMapCellPositionAreaBase* NullPathFindingLayer_getGeographicMapCellPositionArea(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


SelectionHudPaintable* NullPathFindingLayer_getHudPaintable(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_handleCost(NullPathFindingLayer* this, PathFindingLayerInterface* ownerLayer) {
        java_throw(java_exception_new("RuntimeException", ""));
}


PathFindingLayerInterface* NullPathFindingLayer_getParentLayer(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


RTSLayer2LogHelper* NullPathFindingLayer_getRTSLayer2LogHelper(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_setTarget(NullPathFindingLayer* this, PathFindingLayerInterface* targetGameLayer) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_init(NullPathFindingLayer* this, GeographicMapCellHistory* geographicMapCellHistory, BasicArrayList* geographicMapCellPositionBasicArrayList) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicArrayList* NullPathFindingLayer_getMoveOutOfBuildAreaPath(NullPathFindingLayer* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_setClosestGeographicMapCellHistory(NullPathFindingLayer* this, BasicArrayList* pathsList) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullPathFindingLayer_teleportTo(NullPathFindingLayer* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_setLoad(NullPathFindingLayer* this, int32_t resource) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
BasicArrayList* NullPathFindingLayer_getSurroundingGeographicMapCellPositionList(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullPathFindingLayer_isSelected(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullPathFindingLayer_shouldAddWaypointFromBuilding(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullPathFindingLayer_isShowMoreCaptionStates(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_trackTo(NullPathFindingLayer* this, const char* reason) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void NullPathFindingLayer_trackToDXY(NullPathFindingLayer* this, int32_t dx, int32_t dy) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
bool NullPathFindingLayer_buildingChase(NullPathFindingLayer* this, AllBinaryLayer* allbinaryLayer, GeographicMapCellPosition* cellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


TrackingEvent* NullPathFindingLayer_getTrackingEvent(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void NullPathFindingLayer_allStop(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool NullPathFindingLayer_isWaypointListEmptyOrOnlyTargets(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellPosition* NullPathFindingLayer_getCurrentGeographicMapCellPosition(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
GeographicMapCellPosition* NullPathFindingLayer_getTopLeftGeographicMapCellPosition(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


CaptionAnimationHelperBase* NullPathFindingLayer_getCaptionAnimationHelper(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


WaypointBehaviorBase* NullPathFindingLayer_getWaypointBehavior(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


WaypointLogHelper* NullPathFindingLayer_getWaypointLogHelper(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Waypoint2LogHelper* NullPathFindingLayer_getWaypoint2LogHelper(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


WaypointRunnableLogHelper* NullPathFindingLayer_getWaypointRunnableLogHelper(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


Group** NullPathFindingLayer_getGroupInterface(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
bool NullPathFindingLayer_isDestroyed(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


int32_t NullPathFindingLayer_getSourceId(NullPathFindingLayer* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

