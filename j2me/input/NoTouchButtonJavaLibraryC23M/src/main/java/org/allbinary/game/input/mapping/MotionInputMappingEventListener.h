#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H
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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct InputMappingEvent InputMappingEvent;
typedef struct InputMappingEventListenerInterface InputMappingEventListenerInterface;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
#include "org/allbinary/game/input/mapping/event/InputMappingEventListenerInterface.h"

typedef struct MotionInputMappingEventListener MotionInputMappingEventListener;
struct MotionInputMappingEventListener {
    InputMappingEventListenerInterface InputMappingEventListenerInterface_interface;
};


MotionInputMappingEventListener* MotionInputMappingEventListener_new(void);
void MotionInputMappingEventListener_init(MotionInputMappingEventListener* this);

void MotionInputMappingEventListener_onEvent(MotionInputMappingEventListener* this, AllBinaryEventObject* eventObject);

void MotionInputMappingEventListener_onInputMappingEvent(MotionInputMappingEventListener* this, InputMappingEvent* inputMappingEvent);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionInputMappingEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionInputMappingEventListener_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_MOTIONINPUTMAPPINGEVENTLISTENER_H
