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
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/logic/util/event/EventListenerInterface.h"
#include "org/allbinary/logic/util/event/EventStrings.h"
#include "org/allbinary/logic/util/event/handler/BasicEventHandler.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"

typedef struct PressGameKeyEventHandler PressGameKeyEventHandler;
struct PressGameKeyEventHandler {
    BasicEventHandler base;
    BasicArrayList* list;
};

static PressGameKeyEventHandler* PressGameKeyEventHandler_instance;

PressGameKeyEventHandler* PressGameKeyEventHandler_new(void);
PressGameKeyEventHandler* PressGameKeyEventHandler_getInstance(void);

void PressGameKeyEventHandler_init(PressGameKeyEventHandler* this);
void PressGameKeyEventHandler_addListener(PressGameKeyEventHandler* this, PlayerGameInput* playerGameInput);
void PressGameKeyEventHandler_removeAllListeners(PressGameKeyEventHandler* this);
void PressGameKeyEventHandler_removeListener(PressGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface);
void PressGameKeyEventHandler_fireEvent(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject);
void PressGameKeyEventHandler_process(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface);

// Static fields with runtime initializers: call this once at startup
void PressGameKeyEventHandler_staticInit(void) {
    PressGameKeyEventHandler_instance = PressGameKeyEventHandler_new();
}

static void PressGameKeyEventHandler_initFields(PressGameKeyEventHandler* this) {
    this->list = BasicArrayListD_new();
}


PressGameKeyEventHandler* PressGameKeyEventHandler_getInstance(void) {
        return PressGameKeyEventHandler_instance;
}


void PressGameKeyEventHandler_init(PressGameKeyEventHandler* this) {
    BasicEventHandler_init(&this->base);
    PressGameKeyEventHandler_initFields(this);
}

PressGameKeyEventHandler* PressGameKeyEventHandler_new(void) {
    PressGameKeyEventHandler* this = calloc(1, sizeof(PressGameKeyEventHandler));
    PressGameKeyEventHandler_init(this);
    return this;
}


void PressGameKeyEventHandler_addListener(PressGameKeyEventHandler* this, PlayerGameInput* playerGameInput) {
        if (!BasicArrayList_contains(this->list, playerGameInput)) {
            BasicArrayList_add(this->list, playerGameInput);
        }
}


void PressGameKeyEventHandler_removeAllListeners(PressGameKeyEventHandler* this) {
        BasicArrayList_clear(this->list);
        BasicEventHandler_removeAllListeners((&this->base));
}


void PressGameKeyEventHandler_removeListener(PressGameKeyEventHandler* this, EventListenerInterface* eventListenerInterface) {
        BasicArrayList_remove(this->list, eventListenerInterface);
        BasicEventHandler_removeListener((&this->base), eventListenerInterface);
}


// throws Exception
void PressGameKeyEventHandler_fireEvent(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject) {
        for (int32_t index = BasicArrayList_size(this->list); --index >= 0; ) {
            JAVA_TRY {
                PlayerGameInput* playerGameInput = ((PlayerGameInput*) this->list->objectArray[index]);
                PlayerGameInput_onPressGameKeyEvent(playerGameInput, ((GameKeyEvent*) eventObject));
            } JAVA_CATCH(Exception, e) {
                JAVA_CALL(this->logUtil, put, this->commonStrings->EXCEPTION, this, EventStrings_getInstance()->FIRE_EVENT, e);
            } JAVA_END_TRY;
        }
        BasicEventHandler_fireEvent((&this->base), eventObject);
}


// throws Exception
void PressGameKeyEventHandler_process(PressGameKeyEventHandler* this, AllBinaryEventObject* eventObject, EventListenerInterface* eventListenerInterface) {
        PressGameKeyEventListenerInterface* pressGameKeyEventListenerInterface = (((PressGameKeyEventListenerInterface*) eventListenerInterface));
        PressGameKeyEventListenerInterface_onPressGameKeyEvent(pressGameKeyEventListenerInterface, ((GameKeyEvent*) eventObject));
}

