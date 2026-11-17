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
// package org.allbinary.logic.util.event.handler

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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandlerInterface.h"

typedef struct BasicEventHandler BasicEventHandler;
struct BasicEventHandler {
    BasicEventHandlerInterface BasicEventHandlerInterface_interface;
    LogUtil* logUtil;
    BasicArrayList* eventListenerInterfaceList;
};

const char* BasicEventHandler_PERFORMANCE_MESSAGE = "Use Custom onEvent Methods for needed optimization";

BasicEventHandler* BasicEventHandler_new(void);

void BasicEventHandler_init(BasicEventHandler* this);
const char* BasicEventHandler_toString(BasicEventHandler* this);
void BasicEventHandler_removeAllListeners(BasicEventHandler* this);
void BasicEventHandler_addListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);
void BasicEventHandler_addListenerInterface(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);
void BasicEventHandler_removeListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);
void BasicEventHandler_removeListener(BasicEventHandler* this, EventListenerInterface* eventListenerInterface);
void BasicEventHandler_fireEvent(BasicEventHandler* this, AllBinaryEventObject* eventObject);
void BasicEventHandler_process(BasicEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
BasicArrayList* BasicEventHandler_getEventListenerInterfaceListP(BasicEventHandler* this);

static void BasicEventHandler_initFields(BasicEventHandler* this) {
    this->logUtil = LogUtil_getInstance();
    
}


void BasicEventHandler_init(BasicEventHandler* this) {
    BasicEventHandler_initFields(this);
        this->eventListenerInterfaceList = BasicArrayListD_new();
}

BasicEventHandler* BasicEventHandler_new(void) {
    BasicEventHandler* this = calloc(1, sizeof(BasicEventHandler));
    BasicEventHandler_init(this);
    return this;
}


const char* BasicEventHandler_toString(BasicEventHandler* this) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* LISTENER = " Listener: ";
        StringMaker_append(stringBuffer, "Total Listeners: ");
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->eventListenerInterfaceList));
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t index = 0;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) this->eventListenerInterfaceList->objectArray[index]);
                StringMaker_append(stringBuffer, LISTENER);
                StringMaker_append(stringBuffer, StringUtil_toString(StringUtil_getInstance(), eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return StringMaker_toString(stringBuffer);
}


// synchronized
void BasicEventHandler_removeAllListeners(BasicEventHandler* this) {
        this->eventListenerInterfaceList = BasicArrayListD_new();
}


void BasicEventHandler_addListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


// synchronized
void BasicEventHandler_addListenerInterface(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        if (!BasicArrayList_contains(this->eventListenerInterfaceList, eventListenerInterface)) {
            BasicArrayList_add(this->eventListenerInterfaceList, eventListenerInterface);
        }
}


void BasicEventHandler_removeListenerSingleThreaded(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// synchronized
void BasicEventHandler_removeListener(BasicEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->eventListenerInterfaceList, eventListenerInterface);
}


// throws Exception
// synchronized
void BasicEventHandler_fireEvent(BasicEventHandler* this, AllBinaryEventObject* eventObject) {
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < BasicArrayList_size(this->eventListenerInterfaceList)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) this->eventListenerInterfaceList->objectArray[index]);
                BasicEventHandler_process(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                CommonStrings* commonStrings = CommonStrings_getInstance();
                LogUtil_put(this->logUtil, commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void BasicEventHandler_process(BasicEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        EventListenerInterface_onEvent(eventListenerInterface, eventObject);
}


BasicArrayList* BasicEventHandler_getEventListenerInterfaceListP(BasicEventHandler* this) {
        return this->eventListenerInterfaceList;
}

