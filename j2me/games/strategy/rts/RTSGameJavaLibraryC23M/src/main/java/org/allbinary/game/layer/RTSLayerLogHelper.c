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
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/math/NamedAngle.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellHistory.h"
#include "org/allbinary/media/graphics/geography/map/GeographicMapCellPosition.h"
#include "org/allbinary/util/BasicArrayList.h"

typedef struct RTSLayerLogHelper RTSLayerLogHelper;
struct RTSLayerLogHelper {
    char unused;
};

static RTSLayerLogHelper* RTSLayerLogHelper_instance;

RTSLayerLogHelper* RTSLayerLogHelper_new(void);
RTSLayerLogHelper* RTSLayerLogHelper_getInstance(void);
void RTSLayerLogHelper_setClosestGeographicMapCellHistory(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList);
void RTSLayerLogHelper_trackTo(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, const char* reason);
void RTSLayerLogHelper_turnTo(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle);
void RTSLayerLogHelper_doneMoving(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_closeEnough(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_movingLeft(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_movingRight(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_movingUp(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_movingDown(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_currentMoveEnded(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_evade(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_rotateLeft(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_rotateRight(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_handle(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle);
void RTSLayerLogHelper_noRotation(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer);
void RTSLayerLogHelper_notOnPath(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList);

// Static fields with runtime initializers: call this once at startup
void RTSLayerLogHelper_staticInit(void) {
    RTSLayerLogHelper_instance = RTSLayerLogHelper_new();
}

void RTSLayerLogHelper_init(RTSLayerLogHelper* this) {
}

RTSLayerLogHelper* RTSLayerLogHelper_new(void) {
    RTSLayerLogHelper* this = calloc(1, sizeof(RTSLayerLogHelper));
    RTSLayerLogHelper_init(this);
    return this;
}


RTSLayerLogHelper* RTSLayerLogHelper_getInstance(void) {
        return RTSLayerLogHelper_instance;
}


void RTSLayerLogHelper_setClosestGeographicMapCellHistory(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, BasicArrayList* pathsList) {
}


void RTSLayerLogHelper_trackTo(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellPosition* nextUnvisitedPathGeographicMapCellPosition, int32_t dx, int32_t dy, const char* reason) {
}


void RTSLayerLogHelper_turnTo(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, int32_t dx, int32_t dy, AngleInfo* angleInfo, int32_t angle, NamedAngle* movementAngle, bool evading, int32_t targetAngle) {
}


void RTSLayerLogHelper_doneMoving(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_closeEnough(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_movingLeft(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_movingRight(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_movingUp(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_movingDown(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_currentMoveEnded(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_evade(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_rotateLeft(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_rotateRight(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_handle(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, NamedAngle* movementAngle) {
}


void RTSLayerLogHelper_noRotation(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer) {
}


void RTSLayerLogHelper_notOnPath(RTSLayerLogHelper* this, PathFindingLayerInterface* associatedAdvancedRTSGameLayer, GeographicMapCellHistory* geographicMapCellHistory, GeographicMapCellPosition* currentGeographicMapCellPosition, BasicArrayList* pathList) {
}

