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
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct LayerManagerEventHandler LayerManagerEventHandler;
struct LayerManagerEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
    const char* CREATE;
    const char* DELETE;
};

static LayerManagerEventHandler* LayerManagerEventHandler_instance;

LayerManagerEventHandler* LayerManagerEventHandler_new(void);
LayerManagerEventHandler* LayerManagerEventHandler_getInstance(void);

void LayerManagerEventHandler_init(LayerManagerEventHandler* this);
void LayerManagerEventHandler_addListener(LayerManagerEventHandler* this, LayerManagerEventListener* layerManagerEventListener);
void LayerManagerEventHandler_removeAllListeners(LayerManagerEventHandler* this);
void LayerManagerEventHandler_removeListener(LayerManagerEventHandler* this, EventListenerInterface* eventListenerInterface);
void LayerManagerEventHandler_fireEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject);
void LayerManagerEventHandler_fireDeleteEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject);
void LayerManagerEventHandler_process(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void LayerManagerEventHandler_staticInit(void) {
    LayerManagerEventHandler_instance = LayerManagerEventHandler_new();
}

static void LayerManagerEventHandler_initFields(LayerManagerEventHandler* this) {
    this->list = BasicArrayListD_new();
    this->CREATE = "Create";
    this->DELETE = "Delete";
}


LayerManagerEventHandler* LayerManagerEventHandler_getInstance(void) {
        return LayerManagerEventHandler_instance;
}


void LayerManagerEventHandler_init(LayerManagerEventHandler* this) {
    BasicEventHandler_init(&this->base);
    LayerManagerEventHandler_initFields(this);
}

LayerManagerEventHandler* LayerManagerEventHandler_new(void) {
    LayerManagerEventHandler* this = calloc(1, sizeof(LayerManagerEventHandler));
    LayerManagerEventHandler_init(this);
    return this;
}


void LayerManagerEventHandler_addListener(LayerManagerEventHandler* this, LayerManagerEventListener* layerManagerEventListener) {
        if (!BasicArrayList_contains(this->list, layerManagerEventListener)) {
            BasicArrayList_add(this->list, layerManagerEventListener);
        }
}


void LayerManagerEventHandler_removeAllListeners(LayerManagerEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void LayerManagerEventHandler_removeListener(LayerManagerEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void LayerManagerEventHandler_fireEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                LayerManagerEventListener* layerManagerEventListener = ((LayerManagerEventListener*) this->list->objectArray[index]);
                LayerManagerEventListener_onCreateLayerManagerEvent(layerManagerEventListener, ((LayerManagerEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
// synchronized
void LayerManagerEventHandler_fireDeleteEvent(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                LayerManagerEventListener* layerManagerEventListener = ((LayerManagerEventListener*) this->list->objectArray[index]);
                LayerManagerEventListener_onDeleteLayerManagerEvent(layerManagerEventListener, ((LayerManagerEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicArrayList* eventListenerInterfaceList = this->eventListenerInterfaceList;
        EventListenerInterface* eventListenerInterface = nullptr;
        LayerManagerEventListenerInterface* layerManagerEventListenerInterface = nullptr;
        int32_t listenerIndex = 0;
        while (listenerIndex < BasicArrayList_size(eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) eventListenerInterfaceList->objectArray[listenerIndex]);
                layerManagerEventListenerInterface = (((LayerManagerEventListenerInterface*) eventListenerInterface));
                LayerManagerEventListenerInterface_onDeleteLayerManagerEvent(layerManagerEventListenerInterface, ((LayerManagerEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            listenerIndex++;
        }
}


// throws Exception
void LayerManagerEventHandler_process(LayerManagerEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        LayerManagerEventListenerInterface* layerManagerEventListenerInterface = (((LayerManagerEventListenerInterface*) eventListenerInterface));
        LayerManagerEventListenerInterface_onCreateLayerManagerEvent(layerManagerEventListenerInterface, ((LayerManagerEvent*) eventObject));
}

