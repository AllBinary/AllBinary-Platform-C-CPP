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
#include "org/allbinary/game/input/event/UpKeyEventHandlerBase.h"

typedef struct UpKeyEventHandler UpKeyEventHandler;
struct UpKeyEventHandler {
    UpKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};

static UpKeyEventHandler* UpKeyEventHandler_instance;
static UpKeyEventHandlerBase** UpKeyEventHandler_instanceArray;

UpKeyEventHandler* UpKeyEventHandler_new(void);
UpKeyEventHandler* UpKeyEventHandler_getInstance(void);
UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForDevice(UpKeyEventHandler* this, int32_t deviceId);
UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForPlayer(UpKeyEventHandler* this, int32_t playerInputId);

void UpKeyEventHandler_init(UpKeyEventHandler* this);
void UpKeyEventHandler_removeAllListeners(UpKeyEventHandler* this);
void UpKeyEventHandler_removeListenerSingleThreaded(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
void UpKeyEventHandler_removeListener(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void UpKeyEventHandler_staticInit(void) {
    UpKeyEventHandler_instance = UpKeyEventHandler_new();
    UpKeyEventHandler_instanceArray = ((UpKeyEventHandlerBase**) java_array_from(sizeof(UpKeyEventHandlerBase*), sizeof((UpKeyEventHandlerBase*[]){ UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new() }) / sizeof(UpKeyEventHandlerBase*), (UpKeyEventHandlerBase*[]){ UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new(), UpKeyEventHandlerBase_new() }));
}

static void UpKeyEventHandler_initFields(UpKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


UpKeyEventHandler* UpKeyEventHandler_getInstance(void) {
        return UpKeyEventHandler_instance;
}


UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForDevice(UpKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return UpKeyEventHandler_instanceArray[playerInputId];
}


UpKeyEventHandlerBase* UpKeyEventHandler_getInstanceForPlayer(UpKeyEventHandler* this, int32_t playerInputId) {
        return UpKeyEventHandler_instanceArray[playerInputId];
}


void UpKeyEventHandler_init(UpKeyEventHandler* this) {
    UpKeyEventHandlerBase_init(&this->base);
    UpKeyEventHandler_initFields(this);
}

UpKeyEventHandler* UpKeyEventHandler_new(void) {
    UpKeyEventHandler* this = calloc(1, sizeof(UpKeyEventHandler));
    UpKeyEventHandler_init(this);
    return this;
}


void UpKeyEventHandler_removeAllListeners(UpKeyEventHandler* this) {
        UpKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length(UpKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(UpKeyEventHandler_instanceArray[index], removeAllListeners);
        }
}


void UpKeyEventHandler_removeListenerSingleThreaded(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(UpKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(UpKeyEventHandler_instanceArray[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


void UpKeyEventHandler_removeListener(UpKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(UpKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(UpKeyEventHandler_instanceArray[index], removeListener, eventListenerInterface);
        }
}

