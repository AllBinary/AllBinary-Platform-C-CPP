/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2003 AllBinary 
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
#include "org/allbinary/game/layer/special/CollidableDestroyableDamageableLayer.h"
#include "org/allbinary/game/layer/waypoint/WaypointBase.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/tick/TickableInterface.h"
#include "org/allbinary/layer/AllBinaryLayerManager.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayListS.h"

typedef struct WaypointBehaviorBase WaypointBehaviorBase;
struct WaypointBehaviorBase {
    TickableInterface TickableInterface_interface;
    BasicArrayList* ownedWaypointList;
    bool waypointOverridesAttacking;
    WaypointBase* waypoint;
    BasicArrayList* steeringVisitorList;
};


WaypointBehaviorBase* WaypointBehaviorBase_new(void);

void WaypointBehaviorBase_init(WaypointBehaviorBase* this);
const char* WaypointBehaviorBase_getName(WaypointBehaviorBase* this);
bool WaypointBehaviorBase_isRunning(WaypointBehaviorBase* this);
void WaypointBehaviorBase_processTick(WaypointBehaviorBase* this, AllBinaryLayerManager* allBinaryLayerManager);
BasicArrayList* WaypointBehaviorBase_getOwnedWaypointList(WaypointBehaviorBase* this);
WaypointBase* WaypointBehaviorBase_getWaypoint(WaypointBehaviorBase* this);
void WaypointBehaviorBase_setWaypoint(WaypointBehaviorBase* this, WaypointBase* waypoint);
BasicArrayList* WaypointBehaviorBase_getSteeringVisitorList(WaypointBehaviorBase* this);
const char* WaypointBehaviorBase_getMovementLogicAsString(WaypointBehaviorBase* this);
bool WaypointBehaviorBase_isWaypointListEmptyOrOnlyTargets(WaypointBehaviorBase* this);
bool WaypointBehaviorBase_isInSensorRange(WaypointBehaviorBase* this, CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance);
CollidableDestroyableDamageableLayer* WaypointBehaviorBase_getCurrentTargetLayerInterface(WaypointBehaviorBase* this);
const char* WaypointBehaviorBase_getCurrentTargetingStateString(WaypointBehaviorBase* this);
bool WaypointBehaviorBase_isTrackingWaypoint(WaypointBehaviorBase* this);
GeographicMapCellPosition* WaypointBehaviorBase_getCurrentPathGeographicMapCellPosition(WaypointBehaviorBase* this);
GeographicMapCellHistory* WaypointBehaviorBase_getCurrentGeographicMapCellHistory(WaypointBehaviorBase* this);
bool WaypointBehaviorBase_isWaypointOverridesAttacking(WaypointBehaviorBase* this);
GeographicMapCellPosition* WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(WaypointBehaviorBase* this);
bool WaypointBehaviorBase_needToMove(WaypointBehaviorBase* this);
void WaypointBehaviorBase_setWaypointPathsList(WaypointBehaviorBase* this, BasicArrayList* waypointPathsList);
BasicArrayList* WaypointBehaviorBase_getWaypointPathsList(WaypointBehaviorBase* this);
void WaypointBehaviorBase_setTarget(WaypointBehaviorBase* this, PathFindingLayerInterface* layerInterface);
void WaypointBehaviorBase_setTargetWithDistance(WaypointBehaviorBase* this, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance);
void WaypointBehaviorBase_clearTarget(WaypointBehaviorBase* this);
void WaypointBehaviorBase_updatePathOnTargetMove(WaypointBehaviorBase* this, const char* reason);

static void WaypointBehaviorBase_initFields(WaypointBehaviorBase* this) {
    
    this->waypointOverridesAttacking = true;
    this->waypoint = WaypointBase_NULL_WAYPOINT_BASE;
    this->steeringVisitorList = BasicArrayListD_new();
}


void WaypointBehaviorBase_init(WaypointBehaviorBase* this) {
    WaypointBehaviorBase_initFields(this);
        this->ownedWaypointList = BasicArrayListS_new(1);
}

WaypointBehaviorBase* WaypointBehaviorBase_new(void) {
    WaypointBehaviorBase* this = calloc(1, sizeof(WaypointBehaviorBase));
    WaypointBehaviorBase_init(this);
    return this;
}


const char* WaypointBehaviorBase_getName(WaypointBehaviorBase* this) {
        return java_class_of(this);
}


bool WaypointBehaviorBase_isRunning(WaypointBehaviorBase* this) {
        return false;
}


// throws Exception
void WaypointBehaviorBase_processTick(WaypointBehaviorBase* this, AllBinaryLayerManager* allBinaryLayerManager) {
}


BasicArrayList* WaypointBehaviorBase_getOwnedWaypointList(WaypointBehaviorBase* this) {
        return this->ownedWaypointList;
}


WaypointBase* WaypointBehaviorBase_getWaypoint(WaypointBehaviorBase* this) {
        return this->waypoint;
}


void WaypointBehaviorBase_setWaypoint(WaypointBehaviorBase* this, WaypointBase* waypoint) {
        this->waypoint = waypoint;
}


BasicArrayList* WaypointBehaviorBase_getSteeringVisitorList(WaypointBehaviorBase* this) {
        return this->steeringVisitorList;
}


const char* WaypointBehaviorBase_getMovementLogicAsString(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool WaypointBehaviorBase_isWaypointListEmptyOrOnlyTargets(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool WaypointBehaviorBase_isInSensorRange(WaypointBehaviorBase* this, CollidableDestroyableDamageableLayer* layerInterface, int32_t targetDistance) {
        java_throw(java_exception_new("RuntimeException", ""));
}


CollidableDestroyableDamageableLayer* WaypointBehaviorBase_getCurrentTargetLayerInterface(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* WaypointBehaviorBase_getCurrentTargetingStateString(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool WaypointBehaviorBase_isTrackingWaypoint(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GeographicMapCellPosition* WaypointBehaviorBase_getCurrentPathGeographicMapCellPosition(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


GeographicMapCellHistory* WaypointBehaviorBase_getCurrentGeographicMapCellHistory(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool WaypointBehaviorBase_isWaypointOverridesAttacking(WaypointBehaviorBase* this) {
        return this->waypointOverridesAttacking;
}


GeographicMapCellPosition* WaypointBehaviorBase_getNextUnvisitedPathGeographicMapCellPosition(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


bool WaypointBehaviorBase_needToMove(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


void WaypointBehaviorBase_setWaypointPathsList(WaypointBehaviorBase* this, BasicArrayList* waypointPathsList) {
        java_throw(java_exception_new("RuntimeException", ""));
}


BasicArrayList* WaypointBehaviorBase_getWaypointPathsList(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void WaypointBehaviorBase_setTarget(WaypointBehaviorBase* this, PathFindingLayerInterface* layerInterface) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void WaypointBehaviorBase_setTargetWithDistance(WaypointBehaviorBase* this, PathFindingLayerInterface* layerInterface, int32_t anotherTargetDistance) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void WaypointBehaviorBase_clearTarget(WaypointBehaviorBase* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void WaypointBehaviorBase_updatePathOnTargetMove(WaypointBehaviorBase* this, const char* reason) {
}

