#ifndef ORG_ALLBINARY_GAME_STATE_GAMESTATECOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_GAME_STATE_GAMESTATECOMPOSITEINTERFACE_H
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
// package org.allbinary.game.state

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameState GameState;

typedef struct GameStateCompositeInterface GameStateCompositeInterface;
struct GameStateCompositeInterface {
    void (*setGameState)(void* this, GameState* gameState);
    GameState* (*getGameState)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameStateCompositeInterface_staticInit(void);

static inline void GameStateCompositeInterface_setGameState(void* this, GameState* gameState) {
    ((__typeof__(((GameStateCompositeInterface*) nullptr)->setGameState)) java_method_of(this, "setGameState"))(this, gameState);
}

static inline GameState* GameStateCompositeInterface_getGameState(void* this) {
    return ((__typeof__(((GameStateCompositeInterface*) nullptr)->getGameState)) java_method_of(this, "getGameState"))(this);
}


#endif // ORG_ALLBINARY_GAME_STATE_GAMESTATECOMPOSITEINTERFACE_H
