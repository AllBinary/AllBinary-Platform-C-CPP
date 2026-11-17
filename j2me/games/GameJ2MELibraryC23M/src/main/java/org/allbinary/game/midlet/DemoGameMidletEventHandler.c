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
// package org.allbinary.game.midlet

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

typedef struct DemoGameMidletEventHandler DemoGameMidletEventHandler;
struct DemoGameMidletEventHandler {
    BasicEventHandler base;
};

static DemoGameMidletEventHandler* DemoGameMidletEventHandler_gameKeyEventHandler;

DemoGameMidletEventHandler* DemoGameMidletEventHandler_new(void);

void DemoGameMidletEventHandler_init(DemoGameMidletEventHandler* this);
DemoGameMidletEventHandler* DemoGameMidletEventHandler_getInstance(void);
void DemoGameMidletEventHandler_process(DemoGameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void DemoGameMidletEventHandler_staticInit(void) {
    DemoGameMidletEventHandler_gameKeyEventHandler = DemoGameMidletEventHandler_new();
}


void DemoGameMidletEventHandler_init(DemoGameMidletEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

DemoGameMidletEventHandler* DemoGameMidletEventHandler_new(void) {
    DemoGameMidletEventHandler* this = calloc(1, sizeof(DemoGameMidletEventHandler));
    DemoGameMidletEventHandler_init(this);
    return this;
}


DemoGameMidletEventHandler* DemoGameMidletEventHandler_getInstance(void) {
        return DemoGameMidletEventHandler_gameKeyEventHandler;
}


// throws Exception
void DemoGameMidletEventHandler_process(DemoGameMidletEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DemoGameMidletEventListener* demoGameMidletEventListener = ((DemoGameMidletEventListener*) eventListenerInterface);
        DemoGameMidletEventListener_onDemoGameMidletEvent(demoGameMidletEventListener, ((DemoGameMidletEvent*) eventObject));
}

