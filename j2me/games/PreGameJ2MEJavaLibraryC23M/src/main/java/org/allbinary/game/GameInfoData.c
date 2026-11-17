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

typedef struct GameInfoData GameInfoData;
struct GameInfoData {
    const char* GAME_TYPE;
    const char* GAME_MODE;
    const char* PLAYER_TYPE;
    const char* HIGHEST_LEVEL;
    const char* CURRENT_LEVEL;
    const char* SOFTWARE_INFORMATION;
};

static GameInfoData* GameInfoData_instance;

GameInfoData* GameInfoData_new(void);
GameInfoData* GameInfoData_getInstance(void);

void GameInfoData_init(GameInfoData* this);

// Static fields with runtime initializers: call this once at startup
void GameInfoData_staticInit(void) {
    GameInfoData_instance = GameInfoData_new();
}

static void GameInfoData_initFields(GameInfoData* this) {
    this->GAME_TYPE = "GAME_TYPE";
    this->GAME_MODE = "GAME_MODE";
    this->PLAYER_TYPE = "PLAYER_TYPE";
    this->HIGHEST_LEVEL = "HIGHEST_LEVEL";
    this->CURRENT_LEVEL = "CURRENT_LEVEL";
    this->SOFTWARE_INFORMATION = "SOFTWARE_INFORMATION";
}


GameInfoData* GameInfoData_getInstance(void) {
        return GameInfoData_instance;
}


void GameInfoData_init(GameInfoData* this) {
    GameInfoData_initFields(this);
}

GameInfoData* GameInfoData_new(void) {
    GameInfoData* this = calloc(1, sizeof(GameInfoData));
    GameInfoData_init(this);
    return this;
}

