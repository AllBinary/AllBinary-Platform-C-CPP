/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// package org.allbinary.game.input.mapping.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"

typedef struct NullInputMappingEventListener NullInputMappingEventListener;
struct NullInputMappingEventListener {
    InputMappingEventListenerInterface InputMappingEventListenerInterface_interface;
};

NullInputMappingEventListener* NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER;

NullInputMappingEventListener* NullInputMappingEventListener_new(void);
void NullInputMappingEventListener_onInputMappingEvent(NullInputMappingEventListener* this, InputMappingEvent* inputMappingEvent);
void NullInputMappingEventListener_onEvent(NullInputMappingEventListener* this, AllBinaryEventObject* eventObject);

// Static fields with runtime initializers: call this once at startup
void NullInputMappingEventListener_staticInit(void) {
    NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER = NullInputMappingEventListener_new();
}

void NullInputMappingEventListener_init(NullInputMappingEventListener* this) {
}

NullInputMappingEventListener* NullInputMappingEventListener_new(void) {
    NullInputMappingEventListener* this = calloc(1, sizeof(NullInputMappingEventListener));
    NullInputMappingEventListener_init(this);
    return this;
}


// throws Exception
void NullInputMappingEventListener_onInputMappingEvent(NullInputMappingEventListener* this, InputMappingEvent* inputMappingEvent) {
}


void NullInputMappingEventListener_onEvent(NullInputMappingEventListener* this, AllBinaryEventObject* eventObject) {
}

