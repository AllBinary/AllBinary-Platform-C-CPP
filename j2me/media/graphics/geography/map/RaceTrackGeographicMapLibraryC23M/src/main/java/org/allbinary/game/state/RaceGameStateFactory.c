/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct RaceGameStateFactory RaceGameStateFactory;
struct RaceGameStateFactory {
    GameState* START_GAME_STATE;
    GameState* YELLOW_LIGHT_GAME_STATE;
    GameState* RED_LIGHT_GAME_STATE;
};

static Any* RaceGameStateFactory_instance;

RaceGameStateFactory* RaceGameStateFactory_new(void);
RaceGameStateFactory* RaceGameStateFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void RaceGameStateFactory_staticInit(void) {
    RaceGameStateFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void RaceGameStateFactory_initFields(RaceGameStateFactory* this) {
    this->START_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "START_GAME_STATE");
    this->YELLOW_LIGHT_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "YELLOW_LIGHT_GAME_STATE");
    this->RED_LIGHT_GAME_STATE = GameStateFactory_createGameState(GameStateFactory_getInstance(), "RED_LIGHT_GAME_STATE");
}

void RaceGameStateFactory_init(RaceGameStateFactory* this) {
    RaceGameStateFactory_initFields(this);
}

RaceGameStateFactory* RaceGameStateFactory_new(void) {
    RaceGameStateFactory* this = calloc(1, sizeof(RaceGameStateFactory));
    RaceGameStateFactory_init(this);
    return this;
}


RaceGameStateFactory* RaceGameStateFactory_getInstance(void) {
        if (RaceGameStateFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            RaceGameStateFactory_instance = RaceGameStateFactory_new();
        }
        return ((RaceGameStateFactory*) RaceGameStateFactory_instance);
}

