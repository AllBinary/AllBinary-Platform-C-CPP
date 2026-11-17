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
// package org.allbinary.game.input.form

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AdvancedRTSGameLayer.h"
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/RTSLayer.h"
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/game/layer/unit/UnitLayer.h"
#include "org/allbinary/game/layer/unit/UnitWaypointBehavior.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"

typedef struct AssignWaypointsUtil AssignWaypointsUtil;
struct AssignWaypointsUtil {
    LogUtil* logUtil;
    RTSLayerEvent* WAYPOINT_EVENT;
};

static AssignWaypointsUtil* AssignWaypointsUtil_instance;

AssignWaypointsUtil* AssignWaypointsUtil_new(void);
AssignWaypointsUtil* AssignWaypointsUtil_getInstance(void);
void AssignWaypointsUtil_set(AssignWaypointsUtil* this, UnitLayer* unitLayer, AdvancedRTSGameLayer* ownerAdvancedRTSGameLayer);

// Static fields with runtime initializers: call this once at startup
void AssignWaypointsUtil_staticInit(void) {
    AssignWaypointsUtil_instance = AssignWaypointsUtil_new();
}

static void AssignWaypointsUtil_initFields(AssignWaypointsUtil* this) {
    this->logUtil = LogUtil_getInstance();
    this->WAYPOINT_EVENT = RTSLayerEvent_new(NullPathFindingLayer_NULL_PATH_FINDING_LAYER);
}

void AssignWaypointsUtil_init(AssignWaypointsUtil* this) {
    AssignWaypointsUtil_initFields(this);
}

AssignWaypointsUtil* AssignWaypointsUtil_new(void) {
    AssignWaypointsUtil* this = calloc(1, sizeof(AssignWaypointsUtil));
    AssignWaypointsUtil_init(this);
    return this;
}


AssignWaypointsUtil* AssignWaypointsUtil_getInstance(void) {
        return AssignWaypointsUtil_instance;
}


void AssignWaypointsUtil_set(AssignWaypointsUtil* this, UnitLayer* unitLayer, AdvancedRTSGameLayer* ownerAdvancedRTSGameLayer) {
        JAVA_TRY {
            BasicArrayList* list = JAVA_CALL(AdvancedRTSGameLayer_getWaypointBehavior(ownerAdvancedRTSGameLayer), getOwnedWaypointList);
            UnitWaypointBehavior* unitWaypointBehavior = ((UnitWaypointBehavior*) UnitLayer_getWaypointBehavior(unitLayer));
            for (int32_t index = BasicArrayList_size(list) - 1; index >= 0; index--) {
                RTSLayer* waypointLayer = ((RTSLayer*) BasicArrayList_get(list, index));
                RTSLayerEvent_setRtsLayer(this->WAYPOINT_EVENT, waypointLayer);
                UnitWaypointBehavior_onWaypointEvent(unitWaypointBehavior, this->WAYPOINT_EVENT);
            }
            PathFindingLayerInterface* waypointLayer = PrimaryWaypointHelper_getWaypointLayer(PrimaryWaypointHelper_getInstance());
            if (waypointLayer != NullPathFindingLayer_NULL_PATH_FINDING_LAYER) {
                RTSLayerEvent_setRtsLayer(this->WAYPOINT_EVENT, waypointLayer);
                UnitWaypointBehavior_onWaypointEvent(unitWaypointBehavior, this->WAYPOINT_EVENT);
            }
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, "set", e);
        } JAVA_END_TRY;
}

