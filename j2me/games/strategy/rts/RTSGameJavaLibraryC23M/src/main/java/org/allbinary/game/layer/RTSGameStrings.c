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

typedef struct RTSGameStrings RTSGameStrings;
struct RTSGameStrings {
    const char* DRAG_TO_SPOT;
    const char* NOT_YOURS;
    const char* NEW_UNIT;
    const char* NEW_WAYPOINT;
    const char* BUILDING;
    const char* UPGRADE;
    const char* DOWNGRADE;
    const char* NO_MONEY;
    const char* SPOT_TAKEN;
    const char* BUILDING_COLLISION;
    const char* STRUCTURE_TO_CLOSE;
    const char* MAP_EDGE;
    const char* ROAD_COLLISION;
    const char* SELECT_BUILD_SPOT;
    const char* BUILD_ON_PATH;
    const char* DRAGGABLE;
};

static RTSGameStrings* RTSGameStrings_instance;

RTSGameStrings* RTSGameStrings_new(void);
RTSGameStrings* RTSGameStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RTSGameStrings_staticInit(void) {
    RTSGameStrings_instance = RTSGameStrings_new();
}

static void RTSGameStrings_initFields(RTSGameStrings* this) {
    this->DRAG_TO_SPOT = "Please Drag";
    this->NOT_YOURS = "Not Yours";
    this->NEW_UNIT = "New Unit";
    this->NEW_WAYPOINT = "New Waypoint";
    this->BUILDING = "Building";
    this->UPGRADE = "Upgrading";
    this->DOWNGRADE = "Downgrading";
    this->NO_MONEY = "Not Enough Money";
    this->SPOT_TAKEN = "Spot Taken";
    this->BUILDING_COLLISION = "Building Collision";
    this->STRUCTURE_TO_CLOSE = "Building To Close";
    this->MAP_EDGE = "Map Edge";
    this->ROAD_COLLISION = "Road Collision";
    this->SELECT_BUILD_SPOT = "Select Build Spot";
    this->BUILD_ON_PATH = "Not On Path";
    this->DRAGGABLE = "Draggable";
}

void RTSGameStrings_init(RTSGameStrings* this) {
    RTSGameStrings_initFields(this);
}

RTSGameStrings* RTSGameStrings_new(void) {
    RTSGameStrings* this = calloc(1, sizeof(RTSGameStrings));
    RTSGameStrings_init(this);
    return this;
}


RTSGameStrings* RTSGameStrings_getInstance(void) {
        return RTSGameStrings_instance;
}

