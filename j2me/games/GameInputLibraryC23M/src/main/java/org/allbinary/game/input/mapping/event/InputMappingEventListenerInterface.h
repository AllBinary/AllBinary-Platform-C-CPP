#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENTLISTENERINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENTLISTENERINTERFACE_H
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
// package org.allbinary.game.input.mapping.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct InputMappingEvent InputMappingEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct InputMappingEventListenerInterface InputMappingEventListenerInterface;
struct InputMappingEventListenerInterface {
    void (*onInputMappingEvent)(void* this, InputMappingEvent* inputMappingEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputMappingEventListenerInterface_staticInit(void);

static inline void InputMappingEventListenerInterface_onInputMappingEvent(void* this, InputMappingEvent* inputMappingEvent) {
    ((__typeof__(((InputMappingEventListenerInterface*) nullptr)->onInputMappingEvent)) java_method_of(this, "onInputMappingEvent"))(this, inputMappingEvent);
}
#define InputMappingEventListenerInterface_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENTLISTENERINTERFACE_H
