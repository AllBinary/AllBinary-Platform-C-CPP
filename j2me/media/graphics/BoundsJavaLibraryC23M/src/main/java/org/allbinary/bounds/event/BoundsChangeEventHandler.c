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
// package org.allbinary.bounds.event

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

typedef struct BoundsChangeEventHandler BoundsChangeEventHandler;
struct BoundsChangeEventHandler {
    BasicEventHandler base;
};

static BasicEventHandler* BoundsChangeEventHandler_SINGLETON;

BoundsChangeEventHandler* BoundsChangeEventHandler_new(void);

void BoundsChangeEventHandler_init(BoundsChangeEventHandler* this);
BasicEventHandler* BoundsChangeEventHandler_getInstance(void);
void BoundsChangeEventHandler_process(BoundsChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void BoundsChangeEventHandler_staticInit(void) {
    BoundsChangeEventHandler_SINGLETON = BoundsChangeEventHandler_new();
}


void BoundsChangeEventHandler_init(BoundsChangeEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

BoundsChangeEventHandler* BoundsChangeEventHandler_new(void) {
    BoundsChangeEventHandler* this = calloc(1, sizeof(BoundsChangeEventHandler));
    BoundsChangeEventHandler_init(this);
    return this;
}


BasicEventHandler* BoundsChangeEventHandler_getInstance(void) {
        return BoundsChangeEventHandler_SINGLETON;
}


// throws Exception
void BoundsChangeEventHandler_process(BoundsChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        BoundsChangeEventListener* boundsChangeEventListener = ((BoundsChangeEventListener*) eventListenerInterface);
        BoundsChangeEventListener_onBoundsChangeEvent(boundsChangeEventListener, ((BoundsChangeEvent*) eventObject));
}

