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

typedef struct GameStrings GameStrings;
struct GameStrings {
    const char* PROCESS_TICK;
    const char* ON_GAME_INITIALIZED;
    const char* UPDATESURFACE;
    const char* ON_SET_DISPLAYABLE;
    const char* UNPAUSE;
    const char* TOGGLE_MENU;
    const char* SET_GAME_OVER;
    const char* GAME_STATE;
    const char* SET_GAME_STATE;
    const char* STOP_GAME_CANVAS_RUNNABLE_INTERFACE;
};

static GameStrings* GameStrings_instance;

GameStrings* GameStrings_new(void);
GameStrings* GameStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameStrings_staticInit(void) {
    GameStrings_instance = GameStrings_new();
}

static void GameStrings_initFields(GameStrings* this) {
    this->PROCESS_TICK = "processTick";
    this->ON_GAME_INITIALIZED = "onGameInitialized";
    this->UPDATESURFACE = "updateSurface";
    this->ON_SET_DISPLAYABLE = "onSetDisplayable";
    this->UNPAUSE = "unPause";
    this->TOGGLE_MENU = "toggleMenu";
    this->SET_GAME_OVER = "setGameOver";
    this->GAME_STATE = "Game State: ";
    this->SET_GAME_STATE = "setGameState";
    this->STOP_GAME_CANVAS_RUNNABLE_INTERFACE = "stopGameCanvasRunnableInterface";
}

void GameStrings_init(GameStrings* this) {
    GameStrings_initFields(this);
}

GameStrings* GameStrings_new(void) {
    GameStrings* this = calloc(1, sizeof(GameStrings));
    GameStrings_init(this);
    return this;
}


GameStrings* GameStrings_getInstance(void) {
        return GameStrings_instance;
}

