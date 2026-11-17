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
// package org.allbinary.android.input.motion.event

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
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct AnalogControllerConfigurationEventHandler AnalogControllerConfigurationEventHandler;
struct AnalogControllerConfigurationEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_instance;

AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_new(void);
AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_getInstance(void);

void AnalogControllerConfigurationEventHandler_init(AnalogControllerConfigurationEventHandler* this);
void AnalogControllerConfigurationEventHandler_addListener(AnalogControllerConfigurationEventHandler* this, AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface);
void AnalogControllerConfigurationEventHandler_removeAllListeners(AnalogControllerConfigurationEventHandler* this);
void AnalogControllerConfigurationEventHandler_removeListener(AnalogControllerConfigurationEventHandler* this, EventListenerInterface* eventListenerInterface);
void AnalogControllerConfigurationEventHandler_fireEvent(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject);
void AnalogControllerConfigurationEventHandler_process(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void AnalogControllerConfigurationEventHandler_staticInit(void) {
    AnalogControllerConfigurationEventHandler_instance = AnalogControllerConfigurationEventHandler_new();
}

static void AnalogControllerConfigurationEventHandler_initFields(AnalogControllerConfigurationEventHandler* this) {
    this->list = BasicArrayListD_new();
}


AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_getInstance(void) {
        return AnalogControllerConfigurationEventHandler_instance;
}


void AnalogControllerConfigurationEventHandler_init(AnalogControllerConfigurationEventHandler* this) {
    BasicEventHandler_init(&this->base);
    AnalogControllerConfigurationEventHandler_initFields(this);
}

AnalogControllerConfigurationEventHandler* AnalogControllerConfigurationEventHandler_new(void) {
    AnalogControllerConfigurationEventHandler* this = calloc(1, sizeof(AnalogControllerConfigurationEventHandler));
    AnalogControllerConfigurationEventHandler_init(this);
    return this;
}


void AnalogControllerConfigurationEventHandler_addListener(AnalogControllerConfigurationEventHandler* this, AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface) {
        if (!BasicArrayList_contains(this->list, analogControllerConfigurationEventListenerInterface)) {
            BasicArrayList_add(this->list, analogControllerConfigurationEventListenerInterface);
        }
}


void AnalogControllerConfigurationEventHandler_removeAllListeners(AnalogControllerConfigurationEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void AnalogControllerConfigurationEventHandler_removeListener(AnalogControllerConfigurationEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void AnalogControllerConfigurationEventHandler_fireEvent(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                AnalogControllerConfigurationEventListenerInterface* playerGameInput = ((AnalogControllerConfigurationEventListenerInterface*) this->list->objectArray[index]);
                AnalogControllerConfigurationEventListenerInterface_onAnalogControllerConfigurationEvent(playerGameInput, ((AnalogControllerConfigurationEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void AnalogControllerConfigurationEventHandler_process(AnalogControllerConfigurationEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        AnalogControllerConfigurationEventListenerInterface* analogControllerConfigurationEventListenerInterface = (((AnalogControllerConfigurationEventListenerInterface*) eventListenerInterface));
        AnalogControllerConfigurationEventListenerInterface_onAnalogControllerConfigurationEvent(analogControllerConfigurationEventListenerInterface, ((AnalogControllerConfigurationEvent*) eventObject));
}

