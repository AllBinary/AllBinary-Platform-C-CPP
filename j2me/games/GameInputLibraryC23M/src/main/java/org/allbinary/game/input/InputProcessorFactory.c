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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct InputProcessorFactory InputProcessorFactory;
struct InputProcessorFactory {
    InputProcessor* inputProcessor;
};

static InputProcessorFactory* InputProcessorFactory_instance;

InputProcessorFactory* InputProcessorFactory_new(void);
InputProcessorFactory* InputProcessorFactory_getInstance(void);
InputProcessor* InputProcessorFactory_getInputProcessor(InputProcessorFactory* this);

// Static fields with runtime initializers: call this once at startup
void InputProcessorFactory_staticInit(void) {
    InputProcessorFactory_instance = InputProcessorFactory_new();
}

static void InputProcessorFactory_initFields(InputProcessorFactory* this) {
    this->inputProcessor = InputProcessor_new();
}

void InputProcessorFactory_init(InputProcessorFactory* this) {
    InputProcessorFactory_initFields(this);
}

InputProcessorFactory* InputProcessorFactory_new(void) {
    InputProcessorFactory* this = calloc(1, sizeof(InputProcessorFactory));
    InputProcessorFactory_init(this);
    return this;
}


InputProcessorFactory* InputProcessorFactory_getInstance(void) {
        return InputProcessorFactory_instance;
}


InputProcessor* InputProcessorFactory_getInputProcessor(InputProcessorFactory* this) {
        return this->inputProcessor;
}

