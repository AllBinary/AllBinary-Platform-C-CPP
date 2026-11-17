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
// package org.allbinary.game.layer.building.event

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

typedef struct LocalPlayerBuildingEventHandler LocalPlayerBuildingEventHandler;
struct LocalPlayerBuildingEventHandler {
    BasicEventHandler base;
};

static LocalPlayerBuildingEventHandler* LocalPlayerBuildingEventHandler_eventHandler;

LocalPlayerBuildingEventHandler* LocalPlayerBuildingEventHandler_new(void);

void LocalPlayerBuildingEventHandler_init(LocalPlayerBuildingEventHandler* this);
LocalPlayerBuildingEventHandler* LocalPlayerBuildingEventHandler_getInstance(void);
void LocalPlayerBuildingEventHandler_process(LocalPlayerBuildingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void LocalPlayerBuildingEventHandler_staticInit(void) {
    LocalPlayerBuildingEventHandler_eventHandler = LocalPlayerBuildingEventHandler_new();
}


void LocalPlayerBuildingEventHandler_init(LocalPlayerBuildingEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

LocalPlayerBuildingEventHandler* LocalPlayerBuildingEventHandler_new(void) {
    LocalPlayerBuildingEventHandler* this = calloc(1, sizeof(LocalPlayerBuildingEventHandler));
    LocalPlayerBuildingEventHandler_init(this);
    return this;
}


LocalPlayerBuildingEventHandler* LocalPlayerBuildingEventHandler_getInstance(void) {
        return LocalPlayerBuildingEventHandler_eventHandler;
}


// throws Exception
void LocalPlayerBuildingEventHandler_process(LocalPlayerBuildingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BuildingEventListenerInterface* buildingEventListenerInterface = (((BuildingEventListenerInterface*) eventListenerInterface));
        BuildingEventListenerInterface_onBuildingEvent(buildingEventListenerInterface, ((RTSLayerEvent*) eventObject));
}

