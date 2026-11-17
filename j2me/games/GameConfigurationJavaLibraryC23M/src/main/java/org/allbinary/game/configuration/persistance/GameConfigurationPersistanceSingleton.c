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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/configuration/persistance/KeyValuePersistance.h"

typedef struct GameConfigurationPersistanceSingleton GameConfigurationPersistanceSingleton;
struct GameConfigurationPersistanceSingleton {
    KeyValuePersistance base;
};

static GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_GAME_PERSISTANCE;

GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_new(void);
GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_getInstance(void);

void GameConfigurationPersistanceSingleton_init(GameConfigurationPersistanceSingleton* this);

// Static fields with runtime initializers: call this once at startup
void GameConfigurationPersistanceSingleton_staticInit(void) {
    GameConfigurationPersistanceSingleton_GAME_PERSISTANCE = GameConfigurationPersistanceSingleton_new();
}


GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_getInstance(void) {
        return GameConfigurationPersistanceSingleton_GAME_PERSISTANCE;
}


void GameConfigurationPersistanceSingleton_init(GameConfigurationPersistanceSingleton* this) {
        KeyValuePersistance_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_GAME_CONFIGURATION_RECORD_ID);
}

GameConfigurationPersistanceSingleton* GameConfigurationPersistanceSingleton_new(void) {
    GameConfigurationPersistanceSingleton* this = calloc(1, sizeof(GameConfigurationPersistanceSingleton));
    GameConfigurationPersistanceSingleton_init(this);
    return this;
}

