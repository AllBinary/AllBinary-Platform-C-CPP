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
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/geological/resources/GeologicalGeographicMapCellPosition.h"
#include "org/allbinary/game/layer/geological/resources/GeologicalResource.h"
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#include "org/allbinary/media/audio/WorkSound.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/math/SmallIntegerSingletonFactory.h"
#include "org/allbinary/game/layer/waypoint/Waypoint.h"

typedef struct WorkWaypoint WorkWaypoint;
struct WorkWaypoint {
    Waypoint base;
};

int32_t WorkWaypoint_ID;

WorkWaypoint* WorkWaypoint_new(PathFindingLayerInterface* ownerLayer);

void WorkWaypoint_init(WorkWaypoint* this, PathFindingLayerInterface* ownerLayer);
void WorkWaypoint_visit(WorkWaypoint* this, UnitLayer* unitLayer);
int32_t WorkWaypoint_getType(WorkWaypoint* this);

// Static fields with runtime initializers: call this once at startup
void WorkWaypoint_staticInit(void) {
    WorkWaypoint_ID = SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory_getInstance(), 25);
}


void WorkWaypoint_init(WorkWaypoint* this, PathFindingLayerInterface* ownerLayer) {
        Waypoint_init(&this->base, ownerLayer, WorkSound_getInstance());
}

WorkWaypoint* WorkWaypoint_new(PathFindingLayerInterface* ownerLayer) {
    WorkWaypoint* this = calloc(1, sizeof(WorkWaypoint));
    WorkWaypoint_init(this, ownerLayer);
    return this;
}


// throws Exception
void WorkWaypoint_visit(WorkWaypoint* this, UnitLayer* unitLayer) {
        if (UnitLayer_getGroupInterface(unitLayer)[0] != PathFindingLayerInterface_getGroupInterface(this->ownerLayer)[0]) {
            return;
        }
        int32_t size = JAVA_CALL(WorkWaypoint_getConnectedWaypointList(this), size);
        if (size > 0) {
            BasicArrayList* occupyList = JAVA_CALL(PathFindingLayerInterface_getGeographicMapCellPositionArea(this->ownerLayer), getOccupyingGeographicMapCellPositionList);
            bool outOfResources = true;
            GeologicalGeographicMapCellPosition* geologicalGeographicMapCellPosition = nullptr;
            GeologicalResource* geologicalResource = nullptr;
            for (int32_t index = BasicArrayList_size(occupyList); --index >= 0; ) {
                geologicalGeographicMapCellPosition = ((GeologicalGeographicMapCellPosition*) BasicArrayList_get(occupyList, index));
                geologicalResource = GeologicalGeographicMapCellPosition_getGeologicalResource(geologicalGeographicMapCellPosition);
                if (GeologicalResource_getTotal(geologicalResource) >= 1) {
                    outOfResources = false;
                    int32_t maxResourceLoad = ((int32_t) UnitLayer_getMaxResourceLoad(unitLayer));
                    GeologicalResource_remove(geologicalResource, maxResourceLoad);
                    UnitLayer_setLoad(unitLayer, maxResourceLoad);
                }
            }
            WaypointInfoHudPaintable* waypointInfoHudPaintable = ((WaypointInfoHudPaintable*) PathFindingLayerInterface_getHudPaintable(this->ownerLayer));
            if (this->ownerLayer == WaypointInfoHudPaintable_getRtsLayer(waypointInfoHudPaintable)) {
                WaypointInfoHudPaintable_updateSelectionInfo(waypointInfoHudPaintable);
            }
            if (!outOfResources) {
                UnitWaypointBehavior* unitWaypointBehavior = ((UnitWaypointBehavior*) UnitLayer_getWaypointBehavior(unitLayer));
                RTSLayer* rtsLayer = nullptr;
                while (JAVA_CALL(WorkWaypoint_getConnectedWaypointList(this), size) > 0) {
                    rtsLayer = ((RTSLayer*) JAVA_CALL(WorkWaypoint_getConnectedWaypointList(this), get, 0));
                    if (RTSLayer_isDestroyed(rtsLayer)) {
                        JAVA_CALL(WorkWaypoint_getConnectedWaypointList(this), remove, rtsLayer);
                    } else {
                        UnitWaypointBehavior_insertWaypoint(unitWaypointBehavior, 0, rtsLayer);
                        break;
                    }
                }
            }
        }
}


int32_t WorkWaypoint_getType(WorkWaypoint* this) {
        return 2;
}

