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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/game/layer/WaypointPathRunnableBase.h"

typedef struct WaypointPathRunnable WaypointPathRunnable;
struct WaypointPathRunnable {
    WaypointPathRunnableBase base;
    LogUtil* logUtil;
};


WaypointPathRunnable* WaypointPathRunnable_new(void);

void WaypointPathRunnable_init(WaypointPathRunnable* this);
void WaypointPathRunnable_run(WaypointPathRunnable* this);
bool WaypointPathRunnable_isDone(WaypointPathRunnable* this);

static void WaypointPathRunnable_initFields(WaypointPathRunnable* this) {
    this->logUtil = LogUtil_getInstance();
}


void WaypointPathRunnable_init(WaypointPathRunnable* this) {
    WaypointPathRunnableBase_init(&this->base);
    WaypointPathRunnable_initFields(this);
}

WaypointPathRunnable* WaypointPathRunnable_new(void) {
    WaypointPathRunnable* this = calloc(1, sizeof(WaypointPathRunnable));
    WaypointPathRunnable_init(this);
    return this;
}


void WaypointPathRunnable_run(WaypointPathRunnable* this) {
        JAVA_TRY {
            JAVA_CALL(JAVA_CALL(this->pathFindingLayer, getWaypointRunnableLogHelper), start, this->pathFindingLayer);
            WaypointBehaviorBase* waypointBehavior = JAVA_CALL(this->pathFindingLayer, getWaypointBehavior);
            GeographicMapCellPosition* geographicMapCellPosition = JAVA_CALL(this->pathFindingLayer, getCurrentGeographicMapCellPosition);
            if (geographicMapCellPosition == nullptr) {
                java_throw(java_exception_new("Exception", "Should never be running here"));
            }
            WaypointBehaviorBase_setWaypointPathsList(waypointBehavior, JAVA_CALL(JAVA_CALL(JAVA_CALL(this->targetPathFindingLayer, getWaypointBehavior), getWaypoint), getPathsListRunnable, geographicMapCellPosition));
            JAVA_CALL(JAVA_CALL(this->pathFindingLayer, getWaypointRunnableLogHelper), end, this->pathFindingLayer);
            java_sleep(15LL + (this->priorityP * 2));
        } JAVA_CATCH(Exception, e) {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->RUN, e);
            WaypointPathRunnable_setRunning(this, false);
        } JAVA_END_TRY;
}


bool WaypointPathRunnable_isDone(WaypointPathRunnable* this) {
        return true;
}

