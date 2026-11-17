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
#include "org/allbinary/game/input/event/UpGameKeyEventHandlerBase.h"

typedef struct UpGameKeyEventHandler UpGameKeyEventHandler;
struct UpGameKeyEventHandler {
    UpGameKeyEventHandlerBase base;
    LocalPlayerInputIdFactory* playerInputIdFactory;
};

static UpGameKeyEventHandler* UpGameKeyEventHandler_instance;
static UpGameKeyEventHandlerBase** UpGameKeyEventHandler_instanceArray;

UpGameKeyEventHandler* UpGameKeyEventHandler_new(void);
UpGameKeyEventHandler* UpGameKeyEventHandler_getInstance(void);
UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForDevice(UpGameKeyEventHandler* this, int32_t deviceId);
UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForPlayer(UpGameKeyEventHandler* this, int32_t playerInputId);

void UpGameKeyEventHandler_init(UpGameKeyEventHandler* this);
void UpGameKeyEventHandler_removeAllListeners(UpGameKeyEventHandler* this);
void UpGameKeyEventHandler_removeListenerSingleThreaded(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
void UpGameKeyEventHandler_removeListener(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void UpGameKeyEventHandler_staticInit(void) {
    UpGameKeyEventHandler_instance = UpGameKeyEventHandler_new();
    UpGameKeyEventHandler_instanceArray = ((UpGameKeyEventHandlerBase**) java_array_from(sizeof(UpGameKeyEventHandlerBase*), sizeof((UpGameKeyEventHandlerBase*[]){ UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new() }) / sizeof(UpGameKeyEventHandlerBase*), (UpGameKeyEventHandlerBase*[]){ UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new(), UpGameKeyEventHandlerBase_new() }));
}

static void UpGameKeyEventHandler_initFields(UpGameKeyEventHandler* this) {
    this->playerInputIdFactory = LocalPlayerInputIdFactory_getInstance();
}


UpGameKeyEventHandler* UpGameKeyEventHandler_getInstance(void) {
        return UpGameKeyEventHandler_instance;
}


UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForDevice(UpGameKeyEventHandler* this, int32_t deviceId) {
        int32_t playerInputId = LocalPlayerInputIdFactory_getPlayerForDevice(this->playerInputIdFactory, deviceId);
        return UpGameKeyEventHandler_instanceArray[playerInputId];
}


UpGameKeyEventHandlerBase* UpGameKeyEventHandler_getInstanceForPlayer(UpGameKeyEventHandler* this, int32_t playerInputId) {
        return UpGameKeyEventHandler_instanceArray[playerInputId];
}


void UpGameKeyEventHandler_init(UpGameKeyEventHandler* this) {
    UpGameKeyEventHandlerBase_init(&this->base);
    UpGameKeyEventHandler_initFields(this);
}

UpGameKeyEventHandler* UpGameKeyEventHandler_new(void) {
    UpGameKeyEventHandler* this = calloc(1, sizeof(UpGameKeyEventHandler));
    UpGameKeyEventHandler_init(this);
    return this;
}


void UpGameKeyEventHandler_removeAllListeners(UpGameKeyEventHandler* this) {
        UpGameKeyEventHandlerBase_removeAllListeners((&this->base));
        for (int32_t index = java_array_length(UpGameKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(UpGameKeyEventHandler_instanceArray[index], removeAllListeners);
        }
}


void UpGameKeyEventHandler_removeListenerSingleThreaded(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpGameKeyEventHandlerBase_removeListenerSingleThreaded((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(UpGameKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(UpGameKeyEventHandler_instanceArray[index], removeListenerSingleThreaded, eventListenerInterface);
        }
}


void UpGameKeyEventHandler_removeListener(UpGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        UpGameKeyEventHandlerBase_removeListener((&this->base), eventListenerInterface);
        for (int32_t index = java_array_length(UpGameKeyEventHandler_instanceArray) - 1; index >= 0; index--) {
            JAVA_CALL(UpGameKeyEventHandler_instanceArray[index], removeListener, eventListenerInterface);
        }
}

