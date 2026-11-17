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
// package org.allbinary.graphics.displayable.event

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

typedef struct DisplayChangeEventHandler DisplayChangeEventHandler;
struct DisplayChangeEventHandler {
    BasicEventHandler base;
};

static DisplayChangeEventHandler* DisplayChangeEventHandler_SINGLETON;

DisplayChangeEventHandler* DisplayChangeEventHandler_new(void);
DisplayChangeEventHandler* DisplayChangeEventHandler_getInstance(void);

void DisplayChangeEventHandler_init(DisplayChangeEventHandler* this);
void DisplayChangeEventHandler_process(DisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void DisplayChangeEventHandler_staticInit(void) {
    DisplayChangeEventHandler_SINGLETON = DisplayChangeEventHandler_new();
}


DisplayChangeEventHandler* DisplayChangeEventHandler_getInstance(void) {
        return DisplayChangeEventHandler_SINGLETON;
}


void DisplayChangeEventHandler_init(DisplayChangeEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

DisplayChangeEventHandler* DisplayChangeEventHandler_new(void) {
    DisplayChangeEventHandler* this = calloc(1, sizeof(DisplayChangeEventHandler));
    DisplayChangeEventHandler_init(this);
    return this;
}


// throws Exception
void DisplayChangeEventHandler_process(DisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DisplayChangeEventListener* displayChangeEventListener = (((DisplayChangeEventListener*) eventListenerInterface));
        DisplayChangeEventListener_onDisplayChangeEvent(displayChangeEventListener, ((DisplayChangeEvent*) eventObject));
}

