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
// package org.allbinary.layer.event

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

typedef struct ScrollMapEventHandler ScrollMapEventHandler;
struct ScrollMapEventHandler {
    BasicEventHandler base;
};

static ScrollMapEventHandler* ScrollMapEventHandler_SINGLETON;

ScrollMapEventHandler* ScrollMapEventHandler_new(void);

void ScrollMapEventHandler_init(ScrollMapEventHandler* this);
ScrollMapEventHandler* ScrollMapEventHandler_getInstance(void);
void ScrollMapEventHandler_process(ScrollMapEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void ScrollMapEventHandler_staticInit(void) {
    ScrollMapEventHandler_SINGLETON = ScrollMapEventHandler_new();
}


void ScrollMapEventHandler_init(ScrollMapEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

ScrollMapEventHandler* ScrollMapEventHandler_new(void) {
    ScrollMapEventHandler* this = calloc(1, sizeof(ScrollMapEventHandler));
    ScrollMapEventHandler_init(this);
    return this;
}


ScrollMapEventHandler* ScrollMapEventHandler_getInstance(void) {
        return ScrollMapEventHandler_SINGLETON;
}


// throws Exception
void ScrollMapEventHandler_process(ScrollMapEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        ScrollMapEventListenerInterface* scrollMapEventListenerInterface = (((ScrollMapEventListenerInterface*) eventListenerInterface));
        ScrollMapEventListenerInterface_onMoveEvent(scrollMapEventListenerInterface, ((ScrollMapEvent*) eventObject));
}

