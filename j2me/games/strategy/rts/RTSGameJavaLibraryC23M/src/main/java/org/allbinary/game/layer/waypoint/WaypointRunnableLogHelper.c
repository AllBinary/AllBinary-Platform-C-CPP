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

typedef struct WaypointRunnableLogHelper WaypointRunnableLogHelper;
struct WaypointRunnableLogHelper {
    char unused;
};

static WaypointRunnableLogHelper* WaypointRunnableLogHelper_instance;

WaypointRunnableLogHelper* WaypointRunnableLogHelper_new(void);
WaypointRunnableLogHelper* WaypointRunnableLogHelper_getInstance(void);
void WaypointRunnableLogHelper_start(WaypointRunnableLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);
void WaypointRunnableLogHelper_end(WaypointRunnableLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface);

// Static fields with runtime initializers: call this once at startup
void WaypointRunnableLogHelper_staticInit(void) {
    WaypointRunnableLogHelper_instance = WaypointRunnableLogHelper_new();
}

void WaypointRunnableLogHelper_init(WaypointRunnableLogHelper* this) {
}

WaypointRunnableLogHelper* WaypointRunnableLogHelper_new(void) {
    WaypointRunnableLogHelper* this = calloc(1, sizeof(WaypointRunnableLogHelper));
    WaypointRunnableLogHelper_init(this);
    return this;
}


WaypointRunnableLogHelper* WaypointRunnableLogHelper_getInstance(void) {
        return WaypointRunnableLogHelper_instance;
}


void WaypointRunnableLogHelper_start(WaypointRunnableLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
}


void WaypointRunnableLogHelper_end(WaypointRunnableLogHelper* this, PathFindingLayerInterface* pathFindingLayerInterface) {
}

