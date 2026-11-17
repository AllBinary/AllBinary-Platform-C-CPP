/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
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
// package org.allbinary.game.tracking

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct TrackingEventHandler TrackingEventHandler;
struct TrackingEventHandler {
    BasicEventHandler base;
};

static TrackingEventHandler* TrackingEventHandler_instance;

TrackingEventHandler* TrackingEventHandler_new(void);
TrackingEventHandler* TrackingEventHandler_getInstance(void);

void TrackingEventHandler_init(TrackingEventHandler* this);
void TrackingEventHandler_process(TrackingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void TrackingEventHandler_staticInit(void) {
    TrackingEventHandler_instance = TrackingEventHandler_new();
}


TrackingEventHandler* TrackingEventHandler_getInstance(void) {
        return TrackingEventHandler_instance;
}


void TrackingEventHandler_init(TrackingEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

TrackingEventHandler* TrackingEventHandler_new(void) {
    TrackingEventHandler* this = calloc(1, sizeof(TrackingEventHandler));
    TrackingEventHandler_init(this);
    return this;
}


// throws Exception
void TrackingEventHandler_process(TrackingEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        TrackingEventListenerInterface* trackingEventListenerInterface = ((TrackingEventListenerInterface*) eventListenerInterface);
        TrackingEventListenerInterface_onMovement(trackingEventListenerInterface, ((TrackingEvent*) eventObject));
}

