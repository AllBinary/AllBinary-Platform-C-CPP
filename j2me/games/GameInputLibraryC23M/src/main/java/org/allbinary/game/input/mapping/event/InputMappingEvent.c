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
#include "org/allbinary/game/input/mapping/InputToGameKeyMapping.h"
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"

typedef struct InputMappingEvent InputMappingEvent;
struct InputMappingEvent {
    AllBinaryEventObject base;
    InputToGameKeyMapping* inputToGameKeyMapping;
};


InputMappingEvent* InputMappingEvent_new(Any* anyType);

void InputMappingEvent_init(InputMappingEvent* this, Any* anyType);
void InputMappingEvent_setInputToGameKeyMapping(InputMappingEvent* this, InputToGameKeyMapping* inputToGameKeyMapping);
InputToGameKeyMapping* InputMappingEvent_getInputToGameKeyMapping(InputMappingEvent* this);

static void InputMappingEvent_initFields(InputMappingEvent* this) {
    this->inputToGameKeyMapping = InputToGameKeyMapping_getNullInstance();
}


void InputMappingEvent_init(InputMappingEvent* this, Any* anyType) {
        AllBinaryEventObject_init(&this->base, anyType);
        InputMappingEvent_initFields(this);
}

InputMappingEvent* InputMappingEvent_new(Any* anyType) {
    InputMappingEvent* this = calloc(1, sizeof(InputMappingEvent));
    InputMappingEvent_init(this, anyType);
    return this;
}


void InputMappingEvent_setInputToGameKeyMapping(InputMappingEvent* this, InputToGameKeyMapping* inputToGameKeyMapping) {
        this->inputToGameKeyMapping = inputToGameKeyMapping;
}


InputToGameKeyMapping* InputMappingEvent_getInputToGameKeyMapping(InputMappingEvent* this) {
        return this->inputToGameKeyMapping;
}

