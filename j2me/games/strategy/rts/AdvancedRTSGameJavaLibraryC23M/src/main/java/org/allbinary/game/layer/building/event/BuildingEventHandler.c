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

typedef struct BuildingEventHandler BuildingEventHandler;
struct BuildingEventHandler {
    BasicEventHandler base;
};

static BuildingEventHandler* BuildingEventHandler_eventHandler;

BuildingEventHandler* BuildingEventHandler_new(void);

void BuildingEventHandler_init(BuildingEventHandler* this);
BuildingEventHandler* BuildingEventHandler_getInstance(void);
void BuildingEventHandler_process(BuildingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void BuildingEventHandler_staticInit(void) {
    BuildingEventHandler_eventHandler = BuildingEventHandler_new();
}


void BuildingEventHandler_init(BuildingEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

BuildingEventHandler* BuildingEventHandler_new(void) {
    BuildingEventHandler* this = calloc(1, sizeof(BuildingEventHandler));
    BuildingEventHandler_init(this);
    return this;
}


BuildingEventHandler* BuildingEventHandler_getInstance(void) {
        return BuildingEventHandler_eventHandler;
}


// throws Exception
void BuildingEventHandler_process(BuildingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BuildingEventListenerInterface* buildingEventListenerInterface = (((BuildingEventListenerInterface*) eventListenerInterface));
        BuildingEventListenerInterface_onBuildingEvent(buildingEventListenerInterface, ((RTSLayerEvent*) eventObject));
}

