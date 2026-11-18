#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYEVENTSOURCEINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEKEYEVENTSOURCEINTERFACE_H
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

typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
struct GameKeyEventSourceInterface {
    int32_t (*getSourceId)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyEventSourceInterface_staticInit(void);

static inline int32_t GameKeyEventSourceInterface_getSourceId(void* this) {
    return ((__typeof__(((GameKeyEventSourceInterface*) nullptr)->getSourceId)) java_method_of(this, "getSourceId"))(this);
}


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEKEYEVENTSOURCEINTERFACE_H
