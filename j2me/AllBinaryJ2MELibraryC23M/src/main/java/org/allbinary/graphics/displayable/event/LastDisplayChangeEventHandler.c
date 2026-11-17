/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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

typedef struct LastDisplayChangeEventHandler LastDisplayChangeEventHandler;
struct LastDisplayChangeEventHandler {
    BasicEventHandler base;
};

static LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_SINGLETON;

LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_new(void);
LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_getInstance(void);

void LastDisplayChangeEventHandler_init(LastDisplayChangeEventHandler* this);
void LastDisplayChangeEventHandler_process(LastDisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void LastDisplayChangeEventHandler_staticInit(void) {
    LastDisplayChangeEventHandler_SINGLETON = LastDisplayChangeEventHandler_new();
}


LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_getInstance(void) {
        return LastDisplayChangeEventHandler_SINGLETON;
}


void LastDisplayChangeEventHandler_init(LastDisplayChangeEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

LastDisplayChangeEventHandler* LastDisplayChangeEventHandler_new(void) {
    LastDisplayChangeEventHandler* this = calloc(1, sizeof(LastDisplayChangeEventHandler));
    LastDisplayChangeEventHandler_init(this);
    return this;
}


// throws Exception
void LastDisplayChangeEventHandler_process(LastDisplayChangeEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DisplayChangeEventListener* displayChangeEventListener = (((DisplayChangeEventListener*) eventListenerInterface));
        DisplayChangeEventListener_onDisplayChangeEvent(displayChangeEventListener, ((DisplayChangeEvent*) eventObject));
}

