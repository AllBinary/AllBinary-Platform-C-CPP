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
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct WaypointLogHelper WaypointLogHelper;
struct WaypointLogHelper {
    char unused;
};

static WaypointLogHelper* WaypointLogHelper_instance;

WaypointLogHelper* WaypointLogHelper_new(void);
WaypointLogHelper* WaypointLogHelper_getInstance(void);
void WaypointLogHelper_onWaypointEvent(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);
void WaypointLogHelper_addWaypointFromBuilding(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer);
void WaypointLogHelper_addWaypointFromBuildingList(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list);
void WaypointLogHelper_insertWaypoint(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName);
void WaypointLogHelper_insertWaypointList(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName, BasicArrayList* list);
void WaypointLogHelper_setRandomGeographicMapCellHistoryList(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);
void WaypointLogHelper_moveAwayFromBuilding(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void WaypointLogHelper_needToMove(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior);
void WaypointLogHelper_setRandomGeographicMapCellHistory(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void WaypointLogHelper_setCurrentPathGeographicMapCellPosition(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition);
void WaypointLogHelper_setNextUnvisitedPathGeographicMapCellPosition(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition);

// Static fields with runtime initializers: call this once at startup
void WaypointLogHelper_staticInit(void) {
    WaypointLogHelper_instance = WaypointLogHelper_new();
}

void WaypointLogHelper_init(WaypointLogHelper* this) {
}

WaypointLogHelper* WaypointLogHelper_new(void) {
    WaypointLogHelper* this = calloc(1, sizeof(WaypointLogHelper));
    WaypointLogHelper_init(this);
    return this;
}


WaypointLogHelper* WaypointLogHelper_getInstance(void) {
        return WaypointLogHelper_instance;
}


void WaypointLogHelper_onWaypointEvent(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) {
}


void WaypointLogHelper_addWaypointFromBuilding(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer) {
}


void WaypointLogHelper_addWaypointFromBuildingList(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, PathFindingLayerInterface* advancedRTSGameLayer, BasicArrayList* list) {
}


void WaypointLogHelper_insertWaypoint(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName) {
}


void WaypointLogHelper_insertWaypointList(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t index, CollidableDestroyableDamageableLayer* rtsLayer, const char* waypointName, BasicArrayList* list) {
}


void WaypointLogHelper_setRandomGeographicMapCellHistoryList(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) {
}


void WaypointLogHelper_moveAwayFromBuilding(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void WaypointLogHelper_needToMove(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, WaypointBehaviorBase* unitWaypointBehavior) {
}


void WaypointLogHelper_setRandomGeographicMapCellHistory(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void WaypointLogHelper_setCurrentPathGeographicMapCellPosition(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingCurrentPathGeographicMapCellPosition, GeographicMapCellPosition* currentPathGeographicMapCellPosition) {
}


void WaypointLogHelper_setNextUnvisitedPathGeographicMapCellPosition(WaypointLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* existingNextUnvisitedPathGeographicMapCellPosition, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition) {
}

