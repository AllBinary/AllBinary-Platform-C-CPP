#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORINTERFACE_H
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
typedef struct BasicArrayList BasicArrayList;

typedef struct GameInputProcessorInterface GameInputProcessorInterface;
struct GameInputProcessorInterface {
    void (*onInput)(void* this, BasicArrayList* list);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputProcessorInterface_staticInit(void);

static inline void GameInputProcessorInterface_onInput(void* this, BasicArrayList* list) {
    ((__typeof__(((GameInputProcessorInterface*) nullptr)->onInput)) java_method_of(this, "onInput"))(this, list);
}


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEINPUTPROCESSORINTERFACE_H
