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
// package org.allbinary.media.graphics.geography.map

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/layer/AllBinaryGameLayer.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct GeographicMapEventHandler GeographicMapEventHandler;
struct GeographicMapEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static GeographicMapEventHandler* GeographicMapEventHandler_instance;

GeographicMapEventHandler* GeographicMapEventHandler_new(void);
GeographicMapEventHandler* GeographicMapEventHandler_getInstance(void);

void GeographicMapEventHandler_init(GeographicMapEventHandler* this);
void GeographicMapEventHandler_addListener(GeographicMapEventHandler* this, AllBinaryGameLayer* gameLayer);
void GeographicMapEventHandler_removeAllListeners(GeographicMapEventHandler* this);
void GeographicMapEventHandler_removeListener(GeographicMapEventHandler* this, EventListenerInterface* eventListenerInterface);
void GeographicMapEventHandler_fireEvent(GeographicMapEventHandler* this);

// Static fields with runtime initializers: call this once at startup
void GeographicMapEventHandler_staticInit(void) {
    GeographicMapEventHandler_instance = GeographicMapEventHandler_new();
}

static void GeographicMapEventHandler_initFields(GeographicMapEventHandler* this) {
    this->list = BasicArrayListD_new();
}


GeographicMapEventHandler* GeographicMapEventHandler_getInstance(void) {
        return GeographicMapEventHandler_instance;
}


void GeographicMapEventHandler_init(GeographicMapEventHandler* this) {
    BasicEventHandler_init(&this->base);
    GeographicMapEventHandler_initFields(this);
}

GeographicMapEventHandler* GeographicMapEventHandler_new(void) {
    GeographicMapEventHandler* this = calloc(1, sizeof(GeographicMapEventHandler));
    GeographicMapEventHandler_init(this);
    return this;
}


void GeographicMapEventHandler_addListener(GeographicMapEventHandler* this, AllBinaryGameLayer* gameLayer) {
        if (!BasicArrayList_contains(this->list, gameLayer)) {
            BasicArrayList_add(this->list, gameLayer);
        }
}


void GeographicMapEventHandler_removeAllListeners(GeographicMapEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void GeographicMapEventHandler_removeListener(GeographicMapEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


void GeographicMapEventHandler_fireEvent(GeographicMapEventHandler* this) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                AllBinaryGameLayer* gameLayer = ((AllBinaryGameLayer*) BasicArrayList_get(this->list, index));
                AllBinaryGameLayer_move(gameLayer);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
}

