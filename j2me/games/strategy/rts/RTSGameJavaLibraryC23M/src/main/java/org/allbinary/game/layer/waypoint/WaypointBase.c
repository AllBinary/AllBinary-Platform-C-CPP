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
#include "org/allbinary/game/layer/AllBinaryGameLayerManager.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/media/audio/NoSound.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/media/graphics/geography/pathfinding/MultipassState.h"
#include "org/allbinary/media/graphics/geography/pathfinding/PathFindingInfo.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct WaypointBase WaypointBase;
struct WaypointBase {
    EventListenerInterface EventListenerInterface_interface;
    BasicArrayList* connectedWaypointList;
    Sound* sound;
    AllBinaryGameLayerManager* allBinaryGameLayerManagerP;
};

WaypointBase* WaypointBase_NULL_WAYPOINT_BASE;

WaypointBase* WaypointBase_new(Sound* sound);

void WaypointBase_init(WaypointBase* this, Sound* sound);
Sound* WaypointBase_getSound(WaypointBase* this);
void WaypointBase_setAllBinaryGameLayerManager(WaypointBase* this, AllBinaryGameLayerManager* allBinaryGameLayerManager);
BasicArrayList* WaypointBase_getConnectedWaypointList(WaypointBase* this);
void WaypointBase_onEvent(WaypointBase* this, AllBinaryEventObject* eventObject);
PathFindingInfo* WaypointBase_getPathFindingInfo(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* WaypointBase_getPathsList(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState);
BasicArrayList* WaypointBase_getPathsListRunnable(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition);
BasicArrayList* WaypointBase_getPathsListFromCacheOnly(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition);
void WaypointBase_visit(WaypointBase* this, PathFindingLayerInterface* unitLayer);
void WaypointBase_reset(WaypointBase* this);
int32_t WaypointBase_getType(WaypointBase* this);

// Static fields with runtime initializers: call this once at startup
void WaypointBase_staticInit(void) {
    WaypointBase_NULL_WAYPOINT_BASE = WaypointBase_new(NoSound_getInstance());
}

static void WaypointBase_initFields(WaypointBase* this) {
    this->connectedWaypointList = BasicArrayListD_new();
    
    this->allBinaryGameLayerManagerP = AllBinaryGameLayerManager_getNullInstance();
}


void WaypointBase_init(WaypointBase* this, Sound* sound) {
    WaypointBase_initFields(this);
        this->sound = sound;
}

WaypointBase* WaypointBase_new(Sound* sound) {
    WaypointBase* this = calloc(1, sizeof(WaypointBase));
    WaypointBase_init(this, sound);
    return this;
}


Sound* WaypointBase_getSound(WaypointBase* this) {
        return this->sound;
}


// throws Exception
void WaypointBase_setAllBinaryGameLayerManager(WaypointBase* this, AllBinaryGameLayerManager* allBinaryGameLayerManager) {
        this->allBinaryGameLayerManagerP = allBinaryGameLayerManager;
}


BasicArrayList* WaypointBase_getConnectedWaypointList(WaypointBase* this) {
        return this->connectedWaypointList;
}


void WaypointBase_onEvent(WaypointBase* this, AllBinaryEventObject* eventObject) {
        ForcedLogUtil_log(EventStrings_getInstance()->PERFORMANCE_MESSAGE, this);
}


// throws Exception
PathFindingInfo* WaypointBase_getPathFindingInfo(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
BasicArrayList* WaypointBase_getPathsList(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition, PathFindingInfo* pathFindingInfo, MultipassState* multipassState) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
BasicArrayList* WaypointBase_getPathsListRunnable(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
BasicArrayList* WaypointBase_getPathsListFromCacheOnly(WaypointBase* this, GeographicMapCellPosition* geographicMapCellPosition) {
        java_throw(java_exception_new("RuntimeException", ""));
}


// throws Exception
void WaypointBase_visit(WaypointBase* this, PathFindingLayerInterface* unitLayer) {
}


void WaypointBase_reset(WaypointBase* this) {
}


int32_t WaypointBase_getType(WaypointBase* this) {
        return 0;
}

