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
// package org.allbinary.game

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/state/GameState.h"
#include "org/allbinary/game/state/GameStateFactory.h"

typedef struct IntermissionFactory IntermissionFactory;
struct IntermissionFactory {
    GameState* START_LEVEL_INTERMISSION_GAME_STATE;
    GameState* WAIT_LEVEL_INTERMISSION_GAME_STATE;
    GameState* SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE;
    GameState* SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE;
};

static IntermissionFactory* IntermissionFactory_instance;

IntermissionFactory* IntermissionFactory_new(void);
IntermissionFactory* IntermissionFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void IntermissionFactory_staticInit(void) {
    IntermissionFactory_instance = IntermissionFactory_new();
}

static void IntermissionFactory_initFields(IntermissionFactory* this) {
    this->START_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "START_LEVEL_INTERMISSION_GAME_STATE");
    this->WAIT_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "WAIT_LEVEL_INTERMISSION_GAME_STATE");
    this->SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "SHOW_RESULTS_LEVEL_INTERMISSION_GAME_STATE");
    this->SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "SHOW_HIGH_SCORE_LEVEL_INTERMISSION_GAME_STATE");
}

void IntermissionFactory_init(IntermissionFactory* this) {
    IntermissionFactory_initFields(this);
}

IntermissionFactory* IntermissionFactory_new(void) {
    IntermissionFactory* this = calloc(1, sizeof(IntermissionFactory));
    IntermissionFactory_init(this);
    return this;
}


IntermissionFactory* IntermissionFactory_getInstance(void) {
        return IntermissionFactory_instance;
}

