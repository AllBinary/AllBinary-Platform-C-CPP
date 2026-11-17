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
// package org.allbinary.game.layer.waypoint.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/identification/Group.h"

typedef struct WaypointEventHandlerFactory WaypointEventHandlerFactory;
struct WaypointEventHandlerFactory {
    char unused;
};

static WaypointEventHandler** WaypointEventHandlerFactory_eventHandlerArray;

WaypointEventHandlerFactory* WaypointEventHandlerFactory_new(void);
WaypointEventHandler* WaypointEventHandlerFactory_getInstance(Group* groupInterface);
void WaypointEventHandlerFactory_removeAll(void);

// Static fields with runtime initializers: call this once at startup
void WaypointEventHandlerFactory_staticInit(void) {
    WaypointEventHandlerFactory_eventHandlerArray = ((WaypointEventHandler**) java_array_from(sizeof(WaypointEventHandler*), sizeof((WaypointEventHandler*[]){ WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new() }) / sizeof(WaypointEventHandler*), (WaypointEventHandler*[]){ WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new(), WaypointEventHandler_new() }));
}

void WaypointEventHandlerFactory_init(WaypointEventHandlerFactory* this) {
}

WaypointEventHandlerFactory* WaypointEventHandlerFactory_new(void) {
    WaypointEventHandlerFactory* this = calloc(1, sizeof(WaypointEventHandlerFactory));
    WaypointEventHandlerFactory_init(this);
    return this;
}


WaypointEventHandler* WaypointEventHandlerFactory_getInstance(Group* groupInterface) {
        int32_t groupId = ((int32_t) Group_getGroupId(groupInterface));
        return WaypointEventHandlerFactory_eventHandlerArray[groupId];
}


void WaypointEventHandlerFactory_removeAll(void) {
        for (int32_t index = java_array_length(WaypointEventHandlerFactory_eventHandlerArray) - 1; index >= 0; index--) {
            JAVA_CALL(WaypointEventHandlerFactory_eventHandlerArray[index], removeAllListeners);
        }
}

