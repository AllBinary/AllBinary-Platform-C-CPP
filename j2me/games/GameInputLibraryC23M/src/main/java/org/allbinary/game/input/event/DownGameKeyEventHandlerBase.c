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
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct DownGameKeyEventHandlerBase DownGameKeyEventHandlerBase;
struct DownGameKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};

static const char* DownGameKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* DownGameKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";

DownGameKeyEventHandlerBase* DownGameKeyEventHandlerBase_new(void);

void DownGameKeyEventHandlerBase_init(DownGameKeyEventHandlerBase* this);
void DownGameKeyEventHandlerBase_addListener(DownGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);
void DownGameKeyEventHandlerBase_removeAllListeners(DownGameKeyEventHandlerBase* this);
void DownGameKeyEventHandlerBase_removeListenerSingleThreaded(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void DownGameKeyEventHandlerBase_removeListener(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject);
void DownGameKeyEventHandlerBase_process(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
const char* DownGameKeyEventHandlerBase_toString(DownGameKeyEventHandlerBase* this);

static void DownGameKeyEventHandlerBase_initFields(DownGameKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void DownGameKeyEventHandlerBase_init(DownGameKeyEventHandlerBase* this) {
    BasicEventHandler_init(&this->base);
    DownGameKeyEventHandlerBase_initFields(this);
}

DownGameKeyEventHandlerBase* DownGameKeyEventHandlerBase_new(void) {
    DownGameKeyEventHandlerBase* this = calloc(1, sizeof(DownGameKeyEventHandlerBase));
    DownGameKeyEventHandlerBase_init(this);
    return this;
}


void DownGameKeyEventHandlerBase_addListener(DownGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void DownGameKeyEventHandlerBase_removeAllListeners(DownGameKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void DownGameKeyEventHandlerBase_removeListenerSingleThreaded(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void DownGameKeyEventHandlerBase_removeListener(DownGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void DownGameKeyEventHandlerBase_fireEvent(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onDownGameKeyEvent(playerGameInput, ((GameKeyEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void DownGameKeyEventHandlerBase_process(DownGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        DownGameKeyEventListenerInterface* downGameKeyEventListenerInterface = ((DownGameKeyEventListenerInterface*) eventListenerInterface);
        DownGameKeyEventListenerInterface_onDownGameKeyEvent(downGameKeyEventListenerInterface, ((GameKeyEvent*) eventObject));
}


const char* DownGameKeyEventHandlerBase_toString(DownGameKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, DownGameKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, BasicArrayList_size(this->list));
        EventListenerInterface* eventListenerInterface = nullptr;
        int32_t size = BasicArrayList_size(this->list);
        int32_t index = 0;
        while (index < size) {
            JAVA_TRY {
                eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, DownGameKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, EventListenerInterface_toString(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
            index++;
        }
        return StringMaker_toString(stringBuffer);
}

