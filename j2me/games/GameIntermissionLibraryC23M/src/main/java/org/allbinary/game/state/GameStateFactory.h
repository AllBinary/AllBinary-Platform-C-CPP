#ifndef ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H
#define ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H
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
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/game/state/GameState.h")
#include "org/allbinary/game/state/GameState.h"
#endif

typedef struct GameStateFactory GameStateFactory;
struct GameStateFactory {
    int32_t index;
    GameState* NO_GAME_STATE;
    GameState* PLAYING_GAME_STATE;
    GameState* SHOW_END_RESULT_GAME_STATE;
    GameState* SHOW_HIGH_SCORE_GAME_STATE;
};


GameStateFactory* GameStateFactory_new(void);

GameStateFactory* GameStateFactory_getInstance(void);

void GameStateFactory_init(GameStateFactory* this);

GameState* GameStateFactory_createGameState(GameStateFactory* this, const char* name);
#define GameStateFactory_new0 GameStateFactory_new
#define GameStateFactory_init0 GameStateFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameStateFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameStateFactory_register(void);


#endif // ORG_ALLBINARY_GAME_STATE_GAMESTATEFACTORY_H
