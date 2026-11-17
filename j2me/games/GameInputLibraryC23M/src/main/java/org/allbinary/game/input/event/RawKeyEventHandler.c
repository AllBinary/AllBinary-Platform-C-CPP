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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct RawKeyEventHandler RawKeyEventHandler;
struct RawKeyEventHandler {
    LogUtil* logUtil;
    BasicArrayList* eventListenerInterfaceList;
};

static RawKeyEventHandler* RawKeyEventHandler_instance;
static const char* RawKeyEventHandler_TOTAL_LISTENERS = "Total Listeners: ";
static const char* RawKeyEventHandler_LISTENER_LABEL = " Listener: ";

RawKeyEventHandler* RawKeyEventHandler_new(void);
RawKeyEventHandler* RawKeyEventHandler_getInstance(void);

void RawKeyEventHandler_init(RawKeyEventHandler* this);
void RawKeyEventHandler_removeAllListeners(RawKeyEventHandler* this);
void RawKeyEventHandler_addListeners(RawKeyEventHandler* this, BasicArrayList* vector);
void RawKeyEventHandler_addListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);
void RawKeyEventHandler_addListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);
void RawKeyEventHandler_removeListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);
void RawKeyEventHandler_removeListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface);
void RawKeyEventHandler_fireEvent(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated);
void RawKeyEventHandler_process(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface);
BasicArrayList* RawKeyEventHandler_getEventListenerInterfaceListP(RawKeyEventHandler* this);
const char* RawKeyEventHandler_toString(RawKeyEventHandler* this);

// Static fields with runtime initializers: call this once at startup
void RawKeyEventHandler_staticInit(void) {
    RawKeyEventHandler_instance = RawKeyEventHandler_new();
}

static void RawKeyEventHandler_initFields(RawKeyEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    
}


RawKeyEventHandler* RawKeyEventHandler_getInstance(void) {
        return RawKeyEventHandler_instance;
}


void RawKeyEventHandler_init(RawKeyEventHandler* this) {
    RawKeyEventHandler_initFields(this);
        this->eventListenerInterfaceList = BasicArrayListD_new();
}

RawKeyEventHandler* RawKeyEventHandler_new(void) {
    RawKeyEventHandler* this = calloc(1, sizeof(RawKeyEventHandler));
    RawKeyEventHandler_init(this);
    return this;
}


void RawKeyEventHandler_removeAllListeners(RawKeyEventHandler* this) {
        this->eventListenerInterfaceList = BasicArrayListD_new();
}


void RawKeyEventHandler_addListeners(RawKeyEventHandler* this, BasicArrayList* vector) {
        RawKeyEventListener* eventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            eventListenerInterface = ((RawKeyEventListener*) BasicArrayList_get(vector, index));
            RawKeyEventHandler_addListener(this, eventListenerInterface);
        }
}


void RawKeyEventHandler_addListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void RawKeyEventHandler_addListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void RawKeyEventHandler_removeListenerSingleThreaded(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


void RawKeyEventHandler_removeListener(RawKeyEventHandler* this, RawKeyEventListener* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// throws Exception
void RawKeyEventHandler_fireEvent(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated) {
        RawKeyEventListener* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((RawKeyEventListener*) BasicArrayList_get(this->eventListenerInterfaceList, index));
                RawKeyEventHandler_process(this, keyCode, deviceId, repeated, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void RawKeyEventHandler_process(RawKeyEventHandler* this, int32_t keyCode, int32_t deviceId, bool repeated, RawKeyEventListener* eventListenerInterface) {
        RawKeyEventListener_onEventRaw(eventListenerInterface, keyCode, deviceId, repeated);
}


BasicArrayList* RawKeyEventHandler_getEventListenerInterfaceListP(RawKeyEventHandler* this) {
        return this->eventListenerInterfaceList;
}


const char* RawKeyEventHandler_toString(RawKeyEventHandler* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, RawKeyEventHandler_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->eventListenerInterfaceList));
        RawKeyEventListener* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((RawKeyEventListener*) BasicArrayList_get(this->eventListenerInterfaceList, index));
                StringMaker_append(stringBuffer, RawKeyEventHandler_LISTENER_LABEL);
                StringMaker_append(stringBuffer, RawKeyEventListener_toString(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return StringMaker_toString(stringBuffer);
}

