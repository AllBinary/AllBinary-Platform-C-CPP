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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/LocalPlayerInputIdFactory.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/game/input/event/DownGameKeyEventHandlerBase.h"

typedef struct DownGameKeyEventHandler DownGameKeyEventHandler;
struct DownGameKeyEventHandler {
    DownGameKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};

static DownGameKeyEventHandler* DownGameKeyEventHandler_instance;
static DownGameKeyEventHandlerBase** DownGameKeyEventHandler_instanceArray;

DownGameKeyEventHandler* DownGameKeyEventHandler_new(void);
DownGameKeyEventHandler* DownGameKeyEventHandler_getInstance(void);
DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForDevice(DownGameKeyEventHandler* this, int32_t deviceId);
DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForPlayer(DownGameKeyEventHandler* this, int32_t playerInputId);

void DownGameKeyEventHandler_init(DownGameKeyEventHandler* this);
void DownGameKeyEventHandler_removeAllListeners(DownGameKeyEventHandler* this);
void DownGameKeyEventHandler_removeListenerSingleThreaded(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
void DownGameKeyEventHandler_removeListener(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void DownGameKeyEventHandler_staticInit(void) {
    DownGameKeyEventHandler_instance = DownGameKeyEventHandler_new();
    DownGameKeyEventHandler_instanceArray = ((DownGameKeyEventHandlerBase**) java_array_from(sizeof(DownGameKeyEventHandlerBase*), sizeof((DownGameKeyEventHandlerBase*[]){ DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new() }) / sizeof(DownGameKeyEventHandlerBase*), (DownGameKeyEventHandlerBase*[]){ DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new(), DownGameKeyEventHandlerBase_new() }));
}

static void DownGameKeyEventHandler_initFields(DownGameKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


DownGameKeyEventHandler* DownGameKeyEventHandler_getInstance(void) {
        return DownGameKeyEventHandler_instance;
}


DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForDevice(DownGameKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return DownGameKeyEventHandler_instanceArray[playerInputId];
}


DownGameKeyEventHandlerBase* DownGameKeyEventHandler_getInstanceForPlayer(DownGameKeyEventHandler* this, int32_t playerInputId) {
        return DownGameKeyEventHandler_instanceArray[playerInputId];
}


void DownGameKeyEventHandler_init(DownGameKeyEventHandler* this) {
    DownGameKeyEventHandlerBase_init(&this->base);
    DownGameKeyEventHandler_initFields(this);
}

DownGameKeyEventHandler* DownGameKeyEventHandler_new(void) {
    DownGameKeyEventHandler* this = calloc(1, sizeof(DownGameKeyEventHandler));
    DownGameKeyEventHandler_init(this);
    return this;
}


void DownGameKeyEventHandler_removeAllListeners(DownGameKeyEventHandler* this) {
        DownGameKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length(DownGameKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(DownGameKeyEventHandler_instanceArray[index], removeAllListeners);
        }
}


void DownGameKeyEventHandler_removeListenerSingleThreaded(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownGameKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(DownGameKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(DownGameKeyEventHandler_instanceArray[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


// synchronized
void DownGameKeyEventHandler_removeListener(DownGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownGameKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(DownGameKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(DownGameKeyEventHandler_instanceArray[index], removeListener, eventListenerInterface);
        }
}

