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
#include "org/allbinary/game/input/event/DownKeyEventHandlerBase.h"

typedef struct DownKeyEventHandler DownKeyEventHandler;
struct DownKeyEventHandler {
    DownKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};

static DownKeyEventHandler* DownKeyEventHandler_instance;
static DownKeyEventHandlerBase** DownKeyEventHandler_instanceArray;

DownKeyEventHandler* DownKeyEventHandler_new(void);
DownKeyEventHandler* DownKeyEventHandler_getInstance(void);
DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForDevice(DownKeyEventHandler* this, int32_t deviceId);
DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForPlayer(DownKeyEventHandler* this, int32_t playerInputId);

void DownKeyEventHandler_init(DownKeyEventHandler* this);
void DownKeyEventHandler_removeAllListeners(DownKeyEventHandler* this);
void DownKeyEventHandler_removeListenerSingleThreaded(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
void DownKeyEventHandler_removeListener(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void DownKeyEventHandler_staticInit(void) {
    DownKeyEventHandler_instance = DownKeyEventHandler_new();
    DownKeyEventHandler_instanceArray = ((DownKeyEventHandlerBase**) java_array_from(sizeof(DownKeyEventHandlerBase*), sizeof((DownKeyEventHandlerBase*[]){ DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new() }) / sizeof(DownKeyEventHandlerBase*), (DownKeyEventHandlerBase*[]){ DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new(), DownKeyEventHandlerBase_new() }));
}

static void DownKeyEventHandler_initFields(DownKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


DownKeyEventHandler* DownKeyEventHandler_getInstance(void) {
        return DownKeyEventHandler_instance;
}


DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForDevice(DownKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return DownKeyEventHandler_instanceArray[playerInputId];
}


DownKeyEventHandlerBase* DownKeyEventHandler_getInstanceForPlayer(DownKeyEventHandler* this, int32_t playerInputId) {
        return DownKeyEventHandler_instanceArray[playerInputId];
}


void DownKeyEventHandler_init(DownKeyEventHandler* this) {
    DownKeyEventHandlerBase_init(&this->base);
    DownKeyEventHandler_initFields(this);
}

DownKeyEventHandler* DownKeyEventHandler_new(void) {
    DownKeyEventHandler* this = calloc(1, sizeof(DownKeyEventHandler));
    DownKeyEventHandler_init(this);
    return this;
}


void DownKeyEventHandler_removeAllListeners(DownKeyEventHandler* this) {
        DownKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length(DownKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(DownKeyEventHandler_instanceArray[index], removeAllListeners);
        }
}


void DownKeyEventHandler_removeListenerSingleThreaded(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(DownKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(DownKeyEventHandler_instanceArray[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


// synchronized
void DownKeyEventHandler_removeListener(DownKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        DownKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(DownKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(DownKeyEventHandler_instanceArray[index], removeListener, eventListenerInterface);
        }
}

