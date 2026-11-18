#ifndef ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUTCOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUTCOMPOSITEINTERFACE_H
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
typedef struct GameInputInterface GameInputInterface;
typedef struct PlayerGameInput PlayerGameInput;
#include "org/allbinary/game/input/GameInputInterface.h"

typedef struct PlayerGameInputCompositeInterface PlayerGameInputCompositeInterface;
struct PlayerGameInputCompositeInterface {
    PlayerGameInput* (*getPlayerGameInput)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PlayerGameInputCompositeInterface_staticInit(void);

static inline PlayerGameInput* PlayerGameInputCompositeInterface_getPlayerGameInput(void* this) {
    return ((__typeof__(((PlayerGameInputCompositeInterface*) nullptr)->getPlayerGameInput)) java_method_of(this, "getPlayerGameInput"))(this);
}
#define PlayerGameInputCompositeInterface_processInput GameInputInterface_processInput
#define PlayerGameInputCompositeInterface_initInputProcessors GameInputInterface_initInputProcessors


#endif // ORG_ALLBINARY_GAME_INPUT_PLAYERGAMEINPUTCOMPOSITEINTERFACE_H
