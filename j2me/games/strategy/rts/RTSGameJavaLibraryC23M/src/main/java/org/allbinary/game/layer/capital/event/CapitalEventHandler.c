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
// package org.allbinary.game.layer.capital.event

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

typedef struct CapitalEventHandler CapitalEventHandler;
struct CapitalEventHandler {
    BasicEventHandler base;
};


CapitalEventHandler* CapitalEventHandler_new(void);

void CapitalEventHandler_init(CapitalEventHandler* this);
void CapitalEventHandler_process(CapitalEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);


void CapitalEventHandler_init(CapitalEventHandler* this) {
    BasicEventHandler_init(&this->base);
}

CapitalEventHandler* CapitalEventHandler_new(void) {
    CapitalEventHandler* this = calloc(1, sizeof(CapitalEventHandler));
    CapitalEventHandler_init(this);
    return this;
}


// throws Exception
void CapitalEventHandler_process(CapitalEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        CapitalEventListenerInterface* capitalEventListenerInterface = (((CapitalEventListenerInterface*) eventListenerInterface));
        CapitalEventListenerInterface_onCapitalChangeEvent(capitalEventListenerInterface, ((CapitalEvent*) eventObject));
}

