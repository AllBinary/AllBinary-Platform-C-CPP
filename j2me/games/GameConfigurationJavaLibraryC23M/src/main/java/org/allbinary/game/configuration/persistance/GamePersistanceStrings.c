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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GamePersistanceStrings GamePersistanceStrings;
struct GamePersistanceStrings {
    const char* SAVED_GAME_RECORD_ID;
    const char* SAVED_GAME_CONFIGURATION_RECORD_ID;
    const char* DEFAULT_INPUT_MAPPING_RECORD_ID;
    const char* SAVED_INPUT_CONFIGURATION_RECORD_ID;
};

static GamePersistanceStrings* GamePersistanceStrings_instance;

GamePersistanceStrings* GamePersistanceStrings_new(void);
GamePersistanceStrings* GamePersistanceStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GamePersistanceStrings_staticInit(void) {
    GamePersistanceStrings_instance = GamePersistanceStrings_new();
}

static void GamePersistanceStrings_initFields(GamePersistanceStrings* this) {
    this->SAVED_GAME_RECORD_ID = "_SG";
    this->SAVED_GAME_CONFIGURATION_RECORD_ID = "_SGC";
    this->DEFAULT_INPUT_MAPPING_RECORD_ID = "_DIM";
    this->SAVED_INPUT_CONFIGURATION_RECORD_ID = "_SIC";
}

void GamePersistanceStrings_init(GamePersistanceStrings* this) {
    GamePersistanceStrings_initFields(this);
}

GamePersistanceStrings* GamePersistanceStrings_new(void) {
    GamePersistanceStrings* this = calloc(1, sizeof(GamePersistanceStrings));
    GamePersistanceStrings_init(this);
    return this;
}


GamePersistanceStrings* GamePersistanceStrings_getInstance(void) {
        return GamePersistanceStrings_instance;
}

