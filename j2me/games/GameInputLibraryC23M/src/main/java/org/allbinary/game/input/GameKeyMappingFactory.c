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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/NullUtil.h"

typedef struct GameKeyMappingFactory GameKeyMappingFactory;
struct GameKeyMappingFactory {
    GameKey** intKeyToGameKey;
};

static Any* GameKeyMappingFactory_instance;

GameKeyMappingFactory* GameKeyMappingFactory_new(void);
GameKeyMappingFactory* GameKeyMappingFactory_getInstance(void);

void GameKeyMappingFactory_init(GameKeyMappingFactory* this);
GameKey* GameKeyMappingFactory_getGameKey(GameKeyMappingFactory* this, int32_t key);
static void GameKeyMappingFactory_setGameKey(GameKeyMappingFactory* this, GameKey* gameKey);

// Static fields with runtime initializers: call this once at startup
void GameKeyMappingFactory_staticInit(void) {
    GameKeyMappingFactory_instance = NullUtil_getInstance()->NULL_OBJECT;
}

static void GameKeyMappingFactory_initFields(GameKeyMappingFactory* this) {
    this->intKeyToGameKey = ((GameKey**) java_array_new(sizeof(GameKey*), InputFactory_getInstance()->MAX));
}


GameKeyMappingFactory* GameKeyMappingFactory_getInstance(void) {
        if (GameKeyMappingFactory_instance == NullUtil_getInstance()->NULL_OBJECT) {
            GameKeyMappingFactory_instance = GameKeyMappingFactory_new();
        }
        return ((GameKeyMappingFactory*) GameKeyMappingFactory_instance);
}


void GameKeyMappingFactory_init(GameKeyMappingFactory* this) {
    GameKeyMappingFactory_initFields(this);
        GameKeyFactory* gameKeyFactory = GameKeyFactory_getInstance();
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->NONE);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->UP);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->DOWN);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->LEFT);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->RIGHT);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_POUND);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_STAR);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM0);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM1);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM2);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM3);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM4);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM5);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM6);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM7);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM8);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->KEY_NUM9);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_A);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_B);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_C);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->GAME_D);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->FIRE);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->LEVEL_DOWN);
        GameKeyMappingFactory_setGameKey(this, gameKeyFactory->LEVEL_UP);
}

GameKeyMappingFactory* GameKeyMappingFactory_new(void) {
    GameKeyMappingFactory* this = calloc(1, sizeof(GameKeyMappingFactory));
    GameKeyMappingFactory_init(this);
    return this;
}


GameKey* GameKeyMappingFactory_getGameKey(GameKeyMappingFactory* this, int32_t key) {
        return this->intKeyToGameKey[key];
}


static void GameKeyMappingFactory_setGameKey(GameKeyMappingFactory* this, GameKey* gameKey) {
        this->intKeyToGameKey[GameKey_getId(gameKey)] = gameKey;
}

