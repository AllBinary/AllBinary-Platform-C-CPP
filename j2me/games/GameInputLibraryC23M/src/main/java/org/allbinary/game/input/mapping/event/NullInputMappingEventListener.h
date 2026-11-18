#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H
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
typedef struct InputMappingEventListenerInterface InputMappingEventListenerInterface;
typedef struct InputMappingEvent InputMappingEvent;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"

typedef struct NullInputMappingEventListener NullInputMappingEventListener;
struct NullInputMappingEventListener {
    InputMappingEventListenerInterface InputMappingEventListenerInterface_interface;
};

extern NullInputMappingEventListener* NullInputMappingEventListener_NULL_INPUT_MAPPING_EVENT_LISTENER;

NullInputMappingEventListener* NullInputMappingEventListener_new(void);
void NullInputMappingEventListener_init(NullInputMappingEventListener* this);

void NullInputMappingEventListener_onInputMappingEvent(NullInputMappingEventListener* this, InputMappingEvent* inputMappingEvent);

void NullInputMappingEventListener_onEvent(NullInputMappingEventListener* this, AllBinaryEventObject* eventObject);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullInputMappingEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullInputMappingEventListener_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_NULLINPUTMAPPINGEVENTLISTENER_H
