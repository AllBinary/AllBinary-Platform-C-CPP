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
// package org.allbinary.media.graphics.geography.map.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/game/layer/geographic/map/MiniMapLayer.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"

typedef struct GeographicMapCellPositionEventHandler GeographicMapCellPositionEventHandler;
struct GeographicMapCellPositionEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static GeographicMapCellPositionEventHandler* GeographicMapCellPositionEventHandler_instance;

GeographicMapCellPositionEventHandler* GeographicMapCellPositionEventHandler_new(void);
GeographicMapCellPositionEventHandler* GeographicMapCellPositionEventHandler_getInstance(void);

void GeographicMapCellPositionEventHandler_init(GeographicMapCellPositionEventHandler* this);
void GeographicMapCellPositionEventHandler_addListener(GeographicMapCellPositionEventHandler* this, MiniMapLayer* miniMapLayer);
void GeographicMapCellPositionEventHandler_removeAllListeners(GeographicMapCellPositionEventHandler* this);
void GeographicMapCellPositionEventHandler_removeListener(GeographicMapCellPositionEventHandler* this, EventListenerInterface* eventListenerInterface);
void GeographicMapCellPositionEventHandler_fireEvent(GeographicMapCellPositionEventHandler* this, AllBinaryEventObject* eventObject);
void GeographicMapCellPositionEventHandler_fireRemoveEvent(GeographicMapCellPositionEventHandler* this, AllBinaryEventObject* eventObject);
void GeographicMapCellPositionEventHandler_process(GeographicMapCellPositionEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void GeographicMapCellPositionEventHandler_staticInit(void) {
    GeographicMapCellPositionEventHandler_instance = GeographicMapCellPositionEventHandler_new();
}

static void GeographicMapCellPositionEventHandler_initFields(GeographicMapCellPositionEventHandler* this) {
    this->list = BasicArrayListD_new();
}


GeographicMapCellPositionEventHandler* GeographicMapCellPositionEventHandler_getInstance(void) {
        return GeographicMapCellPositionEventHandler_instance;
}


void GeographicMapCellPositionEventHandler_init(GeographicMapCellPositionEventHandler* this) {
    BasicEventHandler_init(&this->base);
    GeographicMapCellPositionEventHandler_initFields(this);
}

GeographicMapCellPositionEventHandler* GeographicMapCellPositionEventHandler_new(void) {
    GeographicMapCellPositionEventHandler* this = calloc(1, sizeof(GeographicMapCellPositionEventHandler));
    GeographicMapCellPositionEventHandler_init(this);
    return this;
}


void GeographicMapCellPositionEventHandler_addListener(GeographicMapCellPositionEventHandler* this, MiniMapLayer* miniMapLayer) {
        if (!BasicArrayList_contains(this->list, miniMapLayer)) {
            BasicArrayList_add(this->list, miniMapLayer);
        }
}


void GeographicMapCellPositionEventHandler_removeAllListeners(GeographicMapCellPositionEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void GeographicMapCellPositionEventHandler_removeListener(GeographicMapCellPositionEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void GeographicMapCellPositionEventHandler_fireEvent(GeographicMapCellPositionEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                MiniMapLayer* miniMapLayer = ((MiniMapLayer*) BasicArrayList_get(this->list, index));
                MiniMapLayer_onGeographicMapCellPositionEvent(miniMapLayer, ((GeographicMapCellPositionEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
// synchronized
void GeographicMapCellPositionEventHandler_fireRemoveEvent(GeographicMapCellPositionEventHandler* this, AllBinaryEventObject* eventObject) {
        BasicArrayList* list = this->eventListenerInterfaceList;
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                MiniMapLayer* miniMapLayer = ((MiniMapLayer*) BasicArrayList_get(this->list, index));
                MiniMapLayer_onRemoveGeographicMapCellPositionEvent(miniMapLayer, ((GeographicMapCellPositionEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        EventListenerInterface* eventListenerInterface = nullptr;
        GeographicMapCellPositionEventListenerInterface* geographicMapCellPositionEventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(list);
        for (int32_t index = 0; index < size; index++) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(list, index));
                geographicMapCellPositionEventListenerInterface = (((GeographicMapCellPositionEventListenerInterface*) eventListenerInterface));
                GeographicMapCellPositionEventListenerInterface_onRemoveGeographicMapCellPositionEvent(geographicMapCellPositionEventListenerInterface, ((GeographicMapCellPositionEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
}


// throws Exception
void GeographicMapCellPositionEventHandler_process(GeographicMapCellPositionEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        GeographicMapCellPositionEventListenerInterface* geographicMapCellPositionEventListenerInterface = (((GeographicMapCellPositionEventListenerInterface*) eventListenerInterface));
        GeographicMapCellPositionEventListenerInterface_onGeographicMapCellPositionEvent(geographicMapCellPositionEventListenerInterface, ((GeographicMapCellPositionEvent*) eventObject));
}

