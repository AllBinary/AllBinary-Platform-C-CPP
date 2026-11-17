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
#include "org/allbinary/game/input/PlayerGameInput.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct UpKeyEventHandlerBase UpKeyEventHandlerBase;
struct UpKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};

static const char* UpKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* UpKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";

UpKeyEventHandlerBase* UpKeyEventHandlerBase_new(void);

void UpKeyEventHandlerBase_init(UpKeyEventHandlerBase* this);
void UpKeyEventHandlerBase_addListener(UpKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);
void UpKeyEventHandlerBase_removeAllListeners(UpKeyEventHandlerBase* this);
void UpKeyEventHandlerBase_removeListenerSingleThreaded(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void UpKeyEventHandlerBase_removeListener(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void UpKeyEventHandlerBase_fireEventForInteger(UpKeyEventHandlerBase* this, int32_t eventObject);
void UpKeyEventHandlerBase_processForInteger(UpKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface);
const char* UpKeyEventHandlerBase_toString(UpKeyEventHandlerBase* this);

static void UpKeyEventHandlerBase_initFields(UpKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void UpKeyEventHandlerBase_init(UpKeyEventHandlerBase* this) {
    BasicEventHandler_init(&this->base);
    UpKeyEventHandlerBase_initFields(this);
}

UpKeyEventHandlerBase* UpKeyEventHandlerBase_new(void) {
    UpKeyEventHandlerBase* this = calloc(1, sizeof(UpKeyEventHandlerBase));
    UpKeyEventHandlerBase_init(this);
    return this;
}


void UpKeyEventHandlerBase_addListener(UpKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void UpKeyEventHandlerBase_removeAllListeners(UpKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void UpKeyEventHandlerBase_removeListenerSingleThreaded(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void UpKeyEventHandlerBase_removeListener(UpKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void UpKeyEventHandlerBase_fireEventForInteger(UpKeyEventHandlerBase* this, int32_t eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onUpKeyEvent(playerGameInput, eventObject);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < JAVA_CALL(this->eventListenerInterfaceList, size)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) JAVA_CALL(this->eventListenerInterfaceList, get, index));
                UpKeyEventHandlerBase_processForInteger(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void UpKeyEventHandlerBase_processForInteger(UpKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface) {
        UpKeyEventListenerInterface* upKeyEventListenerInterface = ((UpKeyEventListenerInterface*) eventListenerInterface);
        UpKeyEventListenerInterface_onUpKeyEvent(upKeyEventListenerInterface, eventObject);
}


const char* UpKeyEventHandlerBase_toString(UpKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, UpKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        for (int32_t index = 0; index < BasicArrayList_size(this->list); index++) {
            JAVA_TRY {
                EventListenerInterface* eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, UpKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, EventListenerInterface_toString(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
        }
        return StringMaker_toString(stringBuffer);
}

