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
// package org.allbinary.game.input

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

typedef struct CompleteMotionGestureInputEventHandler CompleteMotionGestureInputEventHandler;
struct CompleteMotionGestureInputEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_SINGLETON;

CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_new(void);
CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_getInstance(void);

void CompleteMotionGestureInputEventHandler_init(CompleteMotionGestureInputEventHandler* this);
void CompleteMotionGestureInputEventHandler_addListener(CompleteMotionGestureInputEventHandler* this, CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener);
void CompleteMotionGestureInputEventHandler_removeAllListeners(CompleteMotionGestureInputEventHandler* this);
void CompleteMotionGestureInputEventHandler_removeListener(CompleteMotionGestureInputEventHandler* this, EventListenerInterface* eventListenerInterface);
void CompleteMotionGestureInputEventHandler_fireEvent(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject);
void CompleteMotionGestureInputEventHandler_process(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void CompleteMotionGestureInputEventHandler_staticInit(void) {
    CompleteMotionGestureInputEventHandler_SINGLETON = CompleteMotionGestureInputEventHandler_new();
}

static void CompleteMotionGestureInputEventHandler_initFields(CompleteMotionGestureInputEventHandler* this) {
    this->list = BasicArrayListD_new();
}


CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_getInstance(void) {
        return CompleteMotionGestureInputEventHandler_SINGLETON;
}


void CompleteMotionGestureInputEventHandler_init(CompleteMotionGestureInputEventHandler* this) {
    BasicEventHandler_init(&this->base);
    CompleteMotionGestureInputEventHandler_initFields(this);
}

CompleteMotionGestureInputEventHandler* CompleteMotionGestureInputEventHandler_new(void) {
    CompleteMotionGestureInputEventHandler* this = calloc(1, sizeof(CompleteMotionGestureInputEventHandler));
    CompleteMotionGestureInputEventHandler_init(this);
    return this;
}


void CompleteMotionGestureInputEventHandler_addListener(CompleteMotionGestureInputEventHandler* this, CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener) {
        if (!BasicArrayList_contains(this->list, completeMotionGestureInputEventListener)) {
            BasicArrayList_add(this->list, completeMotionGestureInputEventListener);
        }
}


void CompleteMotionGestureInputEventHandler_removeAllListeners(CompleteMotionGestureInputEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void CompleteMotionGestureInputEventHandler_removeListener(CompleteMotionGestureInputEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void CompleteMotionGestureInputEventHandler_fireEvent(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                CompleteMotionGestureInputEventListener* completeMotionGestureInputEventListener = ((CompleteMotionGestureInputEventListener*) this->list->objectArray[index]);
                CompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(completeMotionGestureInputEventListener, ((CompleteMotionGestureInputEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void CompleteMotionGestureInputEventHandler_process(CompleteMotionGestureInputEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        CompleteMotionGestureInputEventListenerInterface* completeMotionGestureInputEventListenerInterface = ((CompleteMotionGestureInputEventListenerInterface*) eventListenerInterface);
        CompleteMotionGestureInputEventListenerInterface_onCompleteMotionGestureInputEvent(completeMotionGestureInputEventListenerInterface, ((CompleteMotionGestureInputEvent*) eventObject));
}

