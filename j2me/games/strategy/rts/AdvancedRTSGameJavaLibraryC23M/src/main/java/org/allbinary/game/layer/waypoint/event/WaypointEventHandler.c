/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2002 AllBinary 
 *  
 * By agreeing to this license you and any business entity you represent are 
 * legally bound to the AllBinary Open License Version 1 legal agreement. 
 *  
 * You may obtain the AllBinary Open License Version 1 legal agreement from 
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository. 
 *  
 * Created By: Travis Berthelot  
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
#include "org/allbinary/game/layer/RTSLayerEvent.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct WaypointEventHandler WaypointEventHandler;
struct WaypointEventHandler {
    BasicEventHandler base;
};


WaypointEventHandler* WaypointEventHandler_new(void);

void WaypointEventHandler_init(WaypointEventHandler* this);
void WaypointEventHandler_process(WaypointEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);


void WaypointEventHandler_init(WaypointEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

WaypointEventHandler* WaypointEventHandler_new(void) {
    WaypointEventHandler* this = calloc(1, sizeof(WaypointEventHandler));
    WaypointEventHandler_init(this);
    return this;
}


// throws Exception
void WaypointEventHandler_process(WaypointEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        WaypointEventListenerInterface* waypointEventListenerInterface = (((WaypointEventListenerInterface*) eventListenerInterface));
        WaypointEventListenerInterface_onWaypointEvent(waypointEventListenerInterface, ((RTSLayerEvent*) eventObject));
}

