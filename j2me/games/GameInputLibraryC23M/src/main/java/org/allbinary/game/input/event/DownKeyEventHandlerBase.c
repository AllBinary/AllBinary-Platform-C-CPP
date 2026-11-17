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

typedef struct DownKeyEventHandlerBase DownKeyEventHandlerBase;
struct DownKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};

static const char* DownKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* DownKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";

DownKeyEventHandlerBase* DownKeyEventHandlerBase_new(void);

void DownKeyEventHandlerBase_init(DownKeyEventHandlerBase* this);
void DownKeyEventHandlerBase_addListener(DownKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);
void DownKeyEventHandlerBase_removeAllListeners(DownKeyEventHandlerBase* this);
void DownKeyEventHandlerBase_removeListenerSingleThreaded(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void DownKeyEventHandlerBase_removeListener(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void DownKeyEventHandlerBase_fireEventI(DownKeyEventHandlerBase* this, int32_t eventObject);
void DownKeyEventHandlerBase_fireEventForGameKeyEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject);
void DownKeyEventHandlerBase_processI(DownKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface);
void DownKeyEventHandlerBase_processEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject, EventListenerInterface* eventListenerInterface);
const char* DownKeyEventHandlerBase_toString(DownKeyEventHandlerBase* this);

static void DownKeyEventHandlerBase_initFields(DownKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void DownKeyEventHandlerBase_init(DownKeyEventHandlerBase* this) {
    BasicEventHandler_init(&this->base);
    DownKeyEventHandlerBase_initFields(this);
}

DownKeyEventHandlerBase* DownKeyEventHandlerBase_new(void) {
    DownKeyEventHandlerBase* this = calloc(1, sizeof(DownKeyEventHandlerBase));
    DownKeyEventHandlerBase_init(this);
    return this;
}


void DownKeyEventHandlerBase_addListener(DownKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void DownKeyEventHandlerBase_removeAllListeners(DownKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void DownKeyEventHandlerBase_removeListenerSingleThreaded(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void DownKeyEventHandlerBase_removeListener(DownKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void DownKeyEventHandlerBase_fireEventI(DownKeyEventHandlerBase* this, int32_t eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onDownKey(playerGameInput, eventObject);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < JAVA_CALL(this->eventListenerInterfaceList, size)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) JAVA_CALL(this->eventListenerInterfaceList, get, index));
                DownKeyEventHandlerBase_processI(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void DownKeyEventHandlerBase_fireEventForGameKeyEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject) {
        int32_t size = BasicArrayList_size(this->list);
        for (int32_t index = size; --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onDownKeyEvent(playerGameInput, eventObject);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        int32_t index = 0;
        EventListenerInterface* eventListenerInterface = nullptr;
        while (index < JAVA_CALL(this->eventListenerInterfaceList, size)) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) JAVA_CALL(this->eventListenerInterfaceList, get, index));
                DownKeyEventHandlerBase_processEvent(this, eventObject, eventListenerInterface);
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
            index++;
        }
}


// throws Exception
void DownKeyEventHandlerBase_processI(DownKeyEventHandlerBase* this, int32_t eventObject, EventListenerInterface* eventListenerInterface) {
        DownKeyEventListenerInterface* downKeyEventListenerInterface = ((DownKeyEventListenerInterface*) eventListenerInterface);
        DownKeyEventListenerInterface_onDownKey(downKeyEventListenerInterface, eventObject);
}


// throws Exception
void DownKeyEventHandlerBase_processEvent(DownKeyEventHandlerBase* this, GameKeyEvent* eventObject, EventListenerInterface* eventListenerInterface) {
        DownKeyEventListenerInterface* downKeyEventListenerInterface = ((DownKeyEventListenerInterface*) eventListenerInterface);
        DownKeyEventListenerInterface_onDownKeyEvent(downKeyEventListenerInterface, eventObject);
}


const char* DownKeyEventHandlerBase_toString(DownKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, DownKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        EventListenerInterface* eventListenerInterface = nullptr;
        for (int32_t index = 0; index < BasicArrayList_size(this->list); index++) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, DownKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, EventListenerInterface_toString(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
        }
        return StringMaker_toString(stringBuffer);
}

