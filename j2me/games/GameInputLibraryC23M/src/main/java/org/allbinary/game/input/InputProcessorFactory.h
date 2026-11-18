#ifndef ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H
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
typedef struct InputProcessor InputProcessor;
#if __has_include("org/allbinary/game/input/InputProcessor.h")
#include "org/allbinary/game/input/InputProcessor.h"
#endif

typedef struct InputProcessorFactory InputProcessorFactory;
struct InputProcessorFactory {
    InputProcessor* inputProcessor;
};


InputProcessorFactory* InputProcessorFactory_new(void);
void InputProcessorFactory_init(InputProcessorFactory* this);

InputProcessorFactory* InputProcessorFactory_getInstance(void);

InputProcessor* InputProcessorFactory_getInputProcessor(InputProcessorFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InputProcessorFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InputProcessorFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_INPUTPROCESSORFACTORY_H
