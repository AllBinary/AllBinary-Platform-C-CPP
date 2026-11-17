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
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/WaypointBehaviorBase.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct Waypoint2LogHelper Waypoint2LogHelper;
struct Waypoint2LogHelper {
    char unused;
};

static Waypoint2LogHelper* Waypoint2LogHelper_instance;

Waypoint2LogHelper* Waypoint2LogHelper_new(void);
Waypoint2LogHelper* Waypoint2LogHelper_getInstance(void);
void Waypoint2LogHelper_initRange(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange);
void Waypoint2LogHelper_processPossibleTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed);
void Waypoint2LogHelper_processSetTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void Waypoint2LogHelper_processPossibleTargetCloser(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void Waypoint2LogHelper_setTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void Waypoint2LogHelper_setTargetPath(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2LogHelper_setTargetPathIgnoreNewPath(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2);
void Waypoint2LogHelper_processWaypoint(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* targetLayer, int32_t size);
void Waypoint2LogHelper_processWaypointTracked(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2);
void Waypoint2LogHelper_processWaypointTrackedVisit(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition);
void Waypoint2LogHelper_processWaypointTrackedWithoutProgress(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, const char* reason);
void Waypoint2LogHelper_wander(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2LogHelper_targetDestroyed(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2LogHelper_processTargeting(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);
void Waypoint2LogHelper_processTargetingNonWayPoint(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy);
void Waypoint2LogHelper_removeWaypoint(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, const char* reason);
void Waypoint2LogHelper_removeWaypointList(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list);
void Waypoint2LogHelper_removeWaypointClear(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2LogHelper_clearTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void Waypoint2LogHelper_addWaypointFromUser(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);
void Waypoint2LogHelper_targetMovedSoRetarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);

// Static fields with runtime initializers: call this once at startup
void Waypoint2LogHelper_staticInit(void) {
    Waypoint2LogHelper_instance = Waypoint2LogHelper_new();
}

void Waypoint2LogHelper_init(Waypoint2LogHelper* this) {
}

Waypoint2LogHelper* Waypoint2LogHelper_new(void) {
    Waypoint2LogHelper* this = calloc(1, sizeof(Waypoint2LogHelper));
    Waypoint2LogHelper_init(this);
    return this;
}


Waypoint2LogHelper* Waypoint2LogHelper_getInstance(void) {
        return Waypoint2LogHelper_instance;
}


void Waypoint2LogHelper_initRange(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t closeRange, int32_t sensorRange) {
}


void Waypoint2LogHelper_processPossibleTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance, bool isShorterThanCurrentTargetDistance, bool isCurrentTargetDestroyed) {
}


void Waypoint2LogHelper_processSetTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
}


void Waypoint2LogHelper_processPossibleTargetCloser(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
}


void Waypoint2LogHelper_setTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
}


void Waypoint2LogHelper_setTargetPath(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void Waypoint2LogHelper_setTargetPathIgnoreNewPath(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2) {
}


void Waypoint2LogHelper_processWaypoint(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* targetLayer, int32_t size) {
}


void Waypoint2LogHelper_processWaypointTracked(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2) {
}


void Waypoint2LogHelper_processWaypointTrackedVisit(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* geographicMapCellPosition) {
}


void Waypoint2LogHelper_processWaypointTrackedWithoutProgress(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, const char* reason) {
}


void Waypoint2LogHelper_wander(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void Waypoint2LogHelper_targetDestroyed(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void Waypoint2LogHelper_processTargeting(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) {
}


void Waypoint2LogHelper_processTargetingNonWayPoint(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy) {
}


void Waypoint2LogHelper_removeWaypoint(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, PathFindingLayerInterface* waypointLayer, const char* reason) {
}


void Waypoint2LogHelper_removeWaypointList(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior2, BasicArrayList* list) {
}


void Waypoint2LogHelper_removeWaypointClear(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void Waypoint2LogHelper_clearTarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void Waypoint2LogHelper_addWaypointFromUser(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) {
}


void Waypoint2LogHelper_targetMovedSoRetarget(Waypoint2LogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}

