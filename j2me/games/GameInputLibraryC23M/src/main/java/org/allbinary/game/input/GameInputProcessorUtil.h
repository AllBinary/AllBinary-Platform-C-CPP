#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORUTIL_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORUTIL_H
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
typedef struct GameInputProcessor GameInputProcessor;
typedef struct InputFactory InputFactory;

typedef struct GameInputProcessorUtil GameInputProcessorUtil;
struct GameInputProcessorUtil {
    char unused;
};


GameInputProcessorUtil* GameInputProcessorUtil_new(void);
void GameInputProcessorUtil_init(GameInputProcessorUtil* this);

void GameInputProcessorUtil_initMethod(GameInputProcessor** inputProcessorArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputProcessorUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputProcessorUtil_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORUTIL_H
