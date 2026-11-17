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
#include "org/allbinary/logic/NullUtil.h"

typedef struct GameStateFactory GameStateFactory;
struct GameStateFactory {
    int32_t index;
    GameState* NO_GAME_STATE;
    GameState* PLAYING_GAME_STATE;
    GameState* SHOW_END_RESULT_GAME_STATE;
    GameState* SHOW_HIGH_SCORE_GAME_STATE;
};

static Any* GameStateFactory_instance;

GameStateFactory* GameStateFactory_new(void);
GameStateFactory* GameStateFactory_getInstance(void);

void GameStateFactory_init(GameStateFactory* this);
GameState* GameStateFactory_createGameState(GameStateFactory* this, const char* name);

// Static fields with runtime initializers: call this once at startup
void GameStateFactory_staticInit(void) {
    GameStateFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameStateFactory_initFields(GameStateFactory* this) {
    this->index = 0;
    this->NO_GAME_STATE = GameStateFactory_createGameState(this, "NO_GAME_STATE");
    this->PLAYING_GAME_STATE = GameStateFactory_createGameState(this, "PLAYING_GAME_STATE");
    this->SHOW_END_RESULT_GAME_STATE = GameStateFactory_createGameState(this, "SHOW_END_RESULT_GAME_STATE");
    this->SHOW_HIGH_SCORE_GAME_STATE = GameStateFactory_createGameState(this, "SHOW_HIGH_SCORE_GAME_STATE");
}


GameStateFactory* GameStateFactory_getInstance(void) {
        if (GameStateFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameStateFactory_instance = GameStateFactory_new();
        }
        return ((GameStateFactory*) GameStateFactory_instance);
}


void GameStateFactory_init(GameStateFactory* this) {
    GameStateFactory_initFields(this);
}

GameStateFactory* GameStateFactory_new(void) {
    GameStateFactory* this = calloc(1, sizeof(GameStateFactory));
    GameStateFactory_init(this);
    return this;
}


GameState* GameStateFactory_createGameState(GameStateFactory* this, const char* name) {
        return GameState_new(name, this->index++);
}

