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

typedef struct GamePersistanceSingleton GamePersistanceSingleton;
struct GamePersistanceSingleton {
    KeyValuePersistance base;
};

static GamePersistanceSingleton* GamePersistanceSingleton_GAME_PERSISTANCE;

GamePersistanceSingleton* GamePersistanceSingleton_new(void);
GamePersistanceSingleton* GamePersistanceSingleton_getInstance(void);

void GamePersistanceSingleton_init(GamePersistanceSingleton* this);

// Static fields with runtime initializers: call this once at startup
void GamePersistanceSingleton_staticInit(void) {
    GamePersistanceSingleton_GAME_PERSISTANCE = GamePersistanceSingleton_new();
}


GamePersistanceSingleton* GamePersistanceSingleton_getInstance(void) {
        return GamePersistanceSingleton_GAME_PERSISTANCE;
}


void GamePersistanceSingleton_init(GamePersistanceSingleton* this) {
        KeyValuePersistance_init(&this->base, GamePersistanceStrings_getInstance()->SAVED_GAME_RECORD_ID);
}

GamePersistanceSingleton* GamePersistanceSingleton_new(void) {
    GamePersistanceSingleton* this = calloc(1, sizeof(GamePersistanceSingleton));
    GamePersistanceSingleton_init(this);
    return this;
}

