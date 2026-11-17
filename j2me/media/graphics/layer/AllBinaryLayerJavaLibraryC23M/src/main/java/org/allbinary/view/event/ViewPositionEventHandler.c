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
// package org.allbinary.view.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct ViewPositionEventHandler ViewPositionEventHandler;
struct ViewPositionEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static ViewPositionEventHandler* ViewPositionEventHandler_SINGLETON;

ViewPositionEventHandler* ViewPositionEventHandler_new(void);
ViewPositionEventHandler* ViewPositionEventHandler_getInstance(void);

void ViewPositionEventHandler_init(ViewPositionEventHandler* this);
void ViewPositionEventHandler_addListener(ViewPositionEventHandler* this, AllBinaryLayer* layerInterface);
void ViewPositionEventHandler_removeAllListeners(ViewPositionEventHandler* this);
void ViewPositionEventHandler_removeListener(ViewPositionEventHandler* this, EventListenerInterface* eventListenerInterface);
void ViewPositionEventHandler_fireEvent(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject);
void ViewPositionEventHandler_process(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void ViewPositionEventHandler_staticInit(void) {
    ViewPositionEventHandler_SINGLETON = ViewPositionEventHandler_new();
}

static void ViewPositionEventHandler_initFields(ViewPositionEventHandler* this) {
    this->list = BasicArrayListD_new();
}


ViewPositionEventHandler* ViewPositionEventHandler_getInstance(void) {
        return ViewPositionEventHandler_SINGLETON;
}


void ViewPositionEventHandler_init(ViewPositionEventHandler* this) {
    BasicEventHandler_init(&this->base);
    ViewPositionEventHandler_initFields(this);
}

ViewPositionEventHandler* ViewPositionEventHandler_new(void) {
    ViewPositionEventHandler* this = calloc(1, sizeof(ViewPositionEventHandler));
    ViewPositionEventHandler_init(this);
    return this;
}


void ViewPositionEventHandler_addListener(ViewPositionEventHandler* this, AllBinaryLayer* layerInterface) {
        if (!BasicArrayList_contains(this->list, layerInterface)) {
            BasicArrayList_add(this->list, layerInterface);
        }
}


void ViewPositionEventHandler_removeAllListeners(ViewPositionEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void ViewPositionEventHandler_removeListener(ViewPositionEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void ViewPositionEventHandler_fireEvent(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                AllBinaryLayer* layerInterface = ((AllBinaryLayer*) this->list->objectArray[index]);
                AllBinaryLayer_onChangeEvent(layerInterface, ((ViewPositionEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void ViewPositionEventHandler_process(ViewPositionEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        ViewPositionEventListenerInterface* viewPositionEventListenerInterface = (((ViewPositionEventListenerInterface*) eventListenerInterface));
        ViewPositionEventListenerInterface_onChangeEvent(viewPositionEventListenerInterface, ((ViewPositionEvent*) eventObject));
}

