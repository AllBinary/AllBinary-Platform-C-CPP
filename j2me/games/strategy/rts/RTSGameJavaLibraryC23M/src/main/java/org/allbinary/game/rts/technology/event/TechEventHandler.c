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
// package org.allbinary.game.rts.technology.event

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

typedef struct TechEventHandler TechEventHandler;
struct TechEventHandler {
    BasicEventHandler base;
};

static TechEventHandler* TechEventHandler_eventHandler;

TechEventHandler* TechEventHandler_new(void);

void TechEventHandler_init(TechEventHandler* this);
TechEventHandler* TechEventHandler_getInstance(void);
void TechEventHandler_process(TechEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void TechEventHandler_staticInit(void) {
    TechEventHandler_eventHandler = TechEventHandler_new();
}


void TechEventHandler_init(TechEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

TechEventHandler* TechEventHandler_new(void) {
    TechEventHandler* this = calloc(1, sizeof(TechEventHandler));
    TechEventHandler_init(this);
    return this;
}


TechEventHandler* TechEventHandler_getInstance(void) {
        return TechEventHandler_eventHandler;
}


// throws Exception
void TechEventHandler_process(TechEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        TechEventListenerInterface* techEventListenerInterface = (((TechEventListenerInterface*) eventListenerInterface));
        TechEventListenerInterface_onTechEvent(techEventListenerInterface, eventObject);
}

