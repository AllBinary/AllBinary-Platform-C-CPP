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

typedef struct RTSLayer2LogHelper RTSLayer2LogHelper;
struct RTSLayer2LogHelper {
    char unused;
};

static RTSLayer2LogHelper* RTSLayer2LogHelper_instance;

RTSLayer2LogHelper* RTSLayer2LogHelper_new(void);
RTSLayer2LogHelper* RTSLayer2LogHelper_getInstance(void);
void RTSLayer2LogHelper_steeringUp(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2LogHelper_steeringFireOrStop(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2LogHelper_buildingAbove(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2LogHelper_buildingChaseLeft(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2LogHelper_buildingChaseRight(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2LogHelper_buildingDown(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void RTSLayer2LogHelper_buildingChaseDown(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2LogHelper_buildingChaseUp(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle);
void RTSLayer2LogHelper_buildingLeft(RTSLayer2LogHelper* this);
void RTSLayer2LogHelper_buildingRight(RTSLayer2LogHelper* this);

// Static fields with runtime initializers: call this once at startup
void RTSLayer2LogHelper_staticInit(void) {
    RTSLayer2LogHelper_instance = RTSLayer2LogHelper_new();
}

void RTSLayer2LogHelper_init(RTSLayer2LogHelper* this) {
}

RTSLayer2LogHelper* RTSLayer2LogHelper_new(void) {
    RTSLayer2LogHelper* this = calloc(1, sizeof(RTSLayer2LogHelper));
    RTSLayer2LogHelper_init(this);
    return this;
}


RTSLayer2LogHelper* RTSLayer2LogHelper_getInstance(void) {
        return RTSLayer2LogHelper_instance;
}


void RTSLayer2LogHelper_steeringUp(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
}


void RTSLayer2LogHelper_steeringFireOrStop(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
}


void RTSLayer2LogHelper_buildingAbove(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
}


void RTSLayer2LogHelper_buildingChaseLeft(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
}


void RTSLayer2LogHelper_buildingChaseRight(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
}


void RTSLayer2LogHelper_buildingDown(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
}


void RTSLayer2LogHelper_buildingChaseDown(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
}


void RTSLayer2LogHelper_buildingChaseUp(RTSLayer2LogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface, int32_t angle) {
}


void RTSLayer2LogHelper_buildingLeft(RTSLayer2LogHelper* this) {
}


void RTSLayer2LogHelper_buildingRight(RTSLayer2LogHelper* this) {
}

