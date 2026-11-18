#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H
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
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct AllBinaryEventObject AllBinaryEventObject;
#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct InputMappingEvent InputMappingEvent;
struct InputMappingEvent {
    AllBinaryEventObject base;
    InputToGameKeyMapping* inputToGameKeyMapping;
};


InputMappingEvent* InputMappingEvent_new(void* anyType);

void InputMappingEvent_init(InputMappingEvent* this, void* anyType);

void InputMappingEvent_setInputToGameKeyMapping(InputMappingEvent* this, InputToGameKeyMapping* inputToGameKeyMapping);

InputToGameKeyMapping* InputMappingEvent_getInputToGameKeyMapping(InputMappingEvent* this);
#define InputMappingEvent_new1 InputMappingEvent_new
#define InputMappingEvent_init1 InputMappingEvent_init
#ifndef InputMappingEvent_getSource
#define InputMappingEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef InputMappingEvent_setSource
#define InputMappingEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputMappingEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputMappingEvent_register(void);

#if __has_include("org/allbinary/game/input/mapping/InputToGameKeyMapping.h")
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_EVENT_INPUTMAPPINGEVENT_H
