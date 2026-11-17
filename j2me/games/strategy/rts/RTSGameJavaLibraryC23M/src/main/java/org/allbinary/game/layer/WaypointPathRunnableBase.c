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
// package org.allbinary.game.layer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/math/LayerDistanceUtil.h"
#include "org/allbinary/thread/PriorityRunnable.h"
#include "org/allbinary/thread/RunnableInterface.h"

typedef struct WaypointPathRunnableBase WaypointPathRunnableBase;
struct WaypointPathRunnableBase {
    RunnableInterface RunnableInterface_interface;
    PriorityRunnable PriorityRunnable_interface;
    LayerDistanceUtil* layerDistanceUtil;
    PathFindingLayerInterface* pathFindingLayer;
    PathFindingLayerInterface* targetPathFindingLayer;
    int32_t priorityP;
    bool runningP;
};


WaypointPathRunnableBase* WaypointPathRunnableBase_new(void);
bool WaypointPathRunnableBase_isRunning(WaypointPathRunnableBase* this);
void WaypointPathRunnableBase_setRunning(WaypointPathRunnableBase* this, bool isRunning);
void WaypointPathRunnableBase_setThread(WaypointPathRunnableBase* this, Thread* thread);
void WaypointPathRunnableBase_setTargetLayer(WaypointPathRunnableBase* this, PathFindingLayerInterface* waypointLayer);
void WaypointPathRunnableBase_setPriority(WaypointPathRunnableBase* this);
PathFindingLayerInterface* WaypointPathRunnableBase_getTargetLayer(WaypointPathRunnableBase* this);
void WaypointPathRunnableBase_setUnitLayer(WaypointPathRunnableBase* this, PathFindingLayerInterface* unitLayer);
int32_t WaypointPathRunnableBase_getPriority(WaypointPathRunnableBase* this);
bool WaypointPathRunnableBase_isDone(WaypointPathRunnableBase* this);
void WaypointPathRunnableBase_run(WaypointPathRunnableBase* this);
void WaypointPathRunnableBase_reset(WaypointPathRunnableBase* this);

static void WaypointPathRunnableBase_initFields(WaypointPathRunnableBase* this) {
    this->layerDistanceUtil = LayerDistanceUtil_getInstance();
    this->pathFindingLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
    this->targetPathFindingLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
    this->priorityP = Integer_MAX_VALUE;
    this->runningP = false;
}

void WaypointPathRunnableBase_init(WaypointPathRunnableBase* this) {
    WaypointPathRunnableBase_initFields(this);
}

WaypointPathRunnableBase* WaypointPathRunnableBase_new(void) {
    WaypointPathRunnableBase* this = calloc(1, sizeof(WaypointPathRunnableBase));
    WaypointPathRunnableBase_init(this);
    return this;
}


bool WaypointPathRunnableBase_isRunning(WaypointPathRunnableBase* this) {
        return this->runningP;
}


void WaypointPathRunnableBase_setRunning(WaypointPathRunnableBase* this, bool isRunning) {
        this->runningP = isRunning;
}


// throws Exception
void WaypointPathRunnableBase_setThread(WaypointPathRunnableBase* this, Thread* thread) {
}


void WaypointPathRunnableBase_setTargetLayer(WaypointPathRunnableBase* this, PathFindingLayerInterface* waypointLayer) {
        this->targetPathFindingLayer = waypointLayer;
        WaypointPathRunnableBase_setPriority(this);
}


void WaypointPathRunnableBase_setPriority(WaypointPathRunnableBase* this) {
        AllBinaryLayer* pathFindingLayer = ((AllBinaryLayer*) this->pathFindingLayer);
        AllBinaryLayer* targetLayer = ((AllBinaryLayer*) this->targetPathFindingLayer);
        if (targetLayer != nullptr) {
            int32_t distance = LayerDistanceUtil_getDistance(this->layerDistanceUtil, targetLayer, pathFindingLayer);
            int32_t distanceCategory = distance / 70;
            this->priorityP = distanceCategory;
        }
}


PathFindingLayerInterface* WaypointPathRunnableBase_getTargetLayer(WaypointPathRunnableBase* this) {
        return this->targetPathFindingLayer;
}


void WaypointPathRunnableBase_setUnitLayer(WaypointPathRunnableBase* this, PathFindingLayerInterface* unitLayer) {
        this->pathFindingLayer = unitLayer;
}


int32_t WaypointPathRunnableBase_getPriority(WaypointPathRunnableBase* this) {
        return this->priorityP;
}


bool WaypointPathRunnableBase_isDone(WaypointPathRunnableBase* this) {
        return true;
}


void WaypointPathRunnableBase_run(WaypointPathRunnableBase* this) {
}


void WaypointPathRunnableBase_reset(WaypointPathRunnableBase* this) {
}

