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

typedef struct UpGameKeyEventHandlerBase UpGameKeyEventHandlerBase;
struct UpGameKeyEventHandlerBase {
    BasicEventHandler base;
    BasicArrayList* list;
};

static const char* UpGameKeyEventHandlerBase_TOTAL_LISTENERS = " Total PlayerGameInput Listeners: ";
static const char* UpGameKeyEventHandlerBase_LISTENER_LABEL = " PlayerGameInput Listener: ";

UpGameKeyEventHandlerBase* UpGameKeyEventHandlerBase_new(void);

void UpGameKeyEventHandlerBase_init(UpGameKeyEventHandlerBase* this);
void UpGameKeyEventHandlerBase_addListener(UpGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput);
void UpGameKeyEventHandlerBase_removeAllListeners(UpGameKeyEventHandlerBase* this);
void UpGameKeyEventHandlerBase_removeListenerSingleThreaded(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void UpGameKeyEventHandlerBase_removeListener(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface);
void UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject);
void UpGameKeyEventHandlerBase_process(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);
const char* UpGameKeyEventHandlerBase_toString(UpGameKeyEventHandlerBase* this);

static void UpGameKeyEventHandlerBase_initFields(UpGameKeyEventHandlerBase* this) {
    this->list = BasicArrayListD_new();
}


void UpGameKeyEventHandlerBase_init(UpGameKeyEventHandlerBase* this) {
    BasicEventHandler_init(&this->base);
    UpGameKeyEventHandlerBase_initFields(this);
}

UpGameKeyEventHandlerBase* UpGameKeyEventHandlerBase_new(void) {
    UpGameKeyEventHandlerBase* this = calloc(1, sizeof(UpGameKeyEventHandlerBase));
    UpGameKeyEventHandlerBase_init(this);
    return this;
}


void UpGameKeyEventHandlerBase_addListener(UpGameKeyEventHandlerBase* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void UpGameKeyEventHandlerBase_removeAllListeners(UpGameKeyEventHandlerBase* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void UpGameKeyEventHandlerBase_removeListenerSingleThreaded(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListenerSingleThreaded((&this->base), eventListenerInterface);
}


// synchronized
void UpGameKeyEventHandlerBase_removeListener(UpGameKeyEventHandlerBase* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void UpGameKeyEventHandlerBase_fireEvent(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onUpGameKeyEvent(playerGameInput, ((GameKeyEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void UpGameKeyEventHandlerBase_process(UpGameKeyEventHandlerBase* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        UpGameKeyEventListenerInterface* upGameKeyEventListenerInterface = ((UpGameKeyEventListenerInterface*) eventListenerInterface);
        UpGameKeyEventListenerInterface_onUpGameKeyEvent(upGameKeyEventListenerInterface, ((GameKeyEvent*) eventObject));
}


const char* UpGameKeyEventHandlerBase_toString(UpGameKeyEventHandlerBase* this) {
        StringMaker* stringBuffer = StringMaker_new();
        int32_t size = BasicArrayList_size(this->list);
        StringMaker_append(stringBuffer, BasicEventHandler_toString((&this->base)));
        StringMaker_append(stringBuffer, UpGameKeyEventHandlerBase_TOTAL_LISTENERS);
        StringMaker_appendint(stringBuffer, size);
        for (int32_t index = 0; index < size; index++) {
            JAVA_TRY {
                EventListenerInterface* eventListenerInterface = ((EventListenerInterface*) BasicArrayList_get(this->list, index));
                StringMaker_append(stringBuffer, UpGameKeyEventHandlerBase_LISTENER_LABEL);
                StringMaker_append(stringBuffer, EventListenerInterface_toString(eventListenerInterface));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, this->commonStrings->TOSTRING, e);
            } JAVA_END_TRY;
        }
        return StringMaker_toString(stringBuffer);
}

