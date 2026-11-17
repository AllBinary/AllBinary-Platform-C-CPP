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
// package org.allbinary.game.terrain

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct TerrainEventHandler TerrainEventHandler;
struct TerrainEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static ABHashtable* TerrainEventHandler_hashtable;

TerrainEventHandler* TerrainEventHandler_new(void);
void TerrainEventHandler_init(void);
TerrainEventHandler* TerrainEventHandler_getInstance(Any* anyType);

void TerrainEventHandler_init(TerrainEventHandler* this);
void TerrainEventHandler_addListener(TerrainEventHandler* this, TerrainEventListener* terrainEventListener);
void TerrainEventHandler_removeAllListeners(TerrainEventHandler* this);
void TerrainEventHandler_removeListener(TerrainEventHandler* this, EventListenerInterface* eventListenerInterface);
void TerrainEventHandler_fireEvent(TerrainEventHandler* this, AllBinaryEventObject* eventObject);
void TerrainEventHandler_process(TerrainEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void TerrainEventHandler_staticInit(void) {
    TerrainEventHandler_hashtable = StdUtil_getInstance()->NULL_TABLE;
}

static void TerrainEventHandler_initFields(TerrainEventHandler* this) {
    this->list = BasicArrayListD_new();
}


void TerrainEventHandler_init(void) {
        TerrainEventHandler_hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


TerrainEventHandler* TerrainEventHandler_getInstance(Any* anyType) {
        Any* eventHandlerCanBeNull = JAVA_CALL(TerrainEventHandler_hashtable, get, anyType);
        if (eventHandlerCanBeNull == nullptr) {
            eventHandlerCanBeNull = TerrainEventHandler_new();
            JAVA_CALL(TerrainEventHandler_hashtable, put, anyType, eventHandlerCanBeNull);
        }
        return ((TerrainEventHandler*) eventHandlerCanBeNull);
}


void TerrainEventHandler_init(TerrainEventHandler* this) {
    BasicEventHandler_init(&this->base);
    TerrainEventHandler_initFields(this);
}

TerrainEventHandler* TerrainEventHandler_new(void) {
    TerrainEventHandler* this = calloc(1, sizeof(TerrainEventHandler));
    TerrainEventHandler_init(this);
    return this;
}


void TerrainEventHandler_addListener(TerrainEventHandler* this, TerrainEventListener* terrainEventListener) {
        if (!BasicArrayList_contains(this->list, terrainEventListener)) {
            BasicArrayList_add(this->list, terrainEventListener);
        }
}


void TerrainEventHandler_removeAllListeners(TerrainEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void TerrainEventHandler_removeListener(TerrainEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void TerrainEventHandler_fireEvent(TerrainEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                TerrainEventListener* terrainEventListener = ((TerrainEventListener*) BasicArrayList_get(this->list, index));
                TerrainEventListener_onTerrainEvent(terrainEventListener, ((TerrainEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void TerrainEventHandler_process(TerrainEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        TerrainEventListenerInterface* terrainEventListenerInterface = ((TerrainEventListenerInterface*) eventListenerInterface);
        TerrainEventListenerInterface_onTerrainEvent(terrainEventListenerInterface, ((TerrainEvent*) eventObject));
}

