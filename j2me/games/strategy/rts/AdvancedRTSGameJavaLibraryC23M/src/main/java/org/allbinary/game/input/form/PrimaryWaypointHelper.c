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
#include "org/allbinary/game/layer/NullPathFindingLayer.h"
#include "org/allbinary/game/layer/PathFindingLayerInterface.h"
#include "org/allbinary/game/layer/waypoint/WaypointLayer.h"

typedef struct PrimaryWaypointHelper PrimaryWaypointHelper;
struct PrimaryWaypointHelper {
    PathFindingLayerInterface* waypointLayer;
};

static PrimaryWaypointHelper* PrimaryWaypointHelper_instance;

PrimaryWaypointHelper* PrimaryWaypointHelper_new(void);
PrimaryWaypointHelper* PrimaryWaypointHelper_getInstance(void);

void PrimaryWaypointHelper_init(PrimaryWaypointHelper* this);
PathFindingLayerInterface* PrimaryWaypointHelper_getWaypointLayer(PrimaryWaypointHelper* this);
void PrimaryWaypointHelper_setWaypointLayer(PrimaryWaypointHelper* this, WaypointLayer* waypointLayer);

// Static fields with runtime initializers: call this once at startup
void PrimaryWaypointHelper_staticInit(void) {
    PrimaryWaypointHelper_instance = PrimaryWaypointHelper_new();
}

static void PrimaryWaypointHelper_initFields(PrimaryWaypointHelper* this) {
    this->waypointLayer = NullPathFindingLayer_NULL_PATH_FINDING_LAYER;
}


PrimaryWaypointHelper* PrimaryWaypointHelper_getInstance(void) {
        return PrimaryWaypointHelper_instance;
}


void PrimaryWaypointHelper_init(PrimaryWaypointHelper* this) {
    PrimaryWaypointHelper_initFields(this);
}

PrimaryWaypointHelper* PrimaryWaypointHelper_new(void) {
    PrimaryWaypointHelper* this = calloc(1, sizeof(PrimaryWaypointHelper));
    PrimaryWaypointHelper_init(this);
    return this;
}


PathFindingLayerInterface* PrimaryWaypointHelper_getWaypointLayer(PrimaryWaypointHelper* this) {
        return this->waypointLayer;
}


void PrimaryWaypointHelper_setWaypointLayer(PrimaryWaypointHelper* this, WaypointLayer* waypointLayer) {
        this->waypointLayer = waypointLayer;
}

