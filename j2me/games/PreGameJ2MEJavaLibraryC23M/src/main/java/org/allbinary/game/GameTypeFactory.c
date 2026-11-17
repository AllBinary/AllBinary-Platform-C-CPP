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
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct GameTypeFactory GameTypeFactory;
struct GameTypeFactory {
    GameType** NULL_GAME_TYPE_ARRAY;
    GameType* NONE;
    GameType* SINGLE_PLAYER;
    GameType* MULTI_PLAYER;
    GameType* BOT;
};

static GameTypeFactory* GameTypeFactory_instance;

GameTypeFactory* GameTypeFactory_new(void);
GameTypeFactory* GameTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameTypeFactory_staticInit(void) {
    GameTypeFactory_instance = GameTypeFactory_new();
}

static void GameTypeFactory_initFields(GameTypeFactory* this) {
    this->NULL_GAME_TYPE_ARRAY = ((GameType**) java_array_new(sizeof(GameType*), 0));
    this->NONE = GameType_new(StringUtil_getInstance()->NULL_STRING);
    this->SINGLE_PLAYER = GameType_new("Single Player");
    this->MULTI_PLAYER = GameType_new("Multi Player");
    this->BOT = GameType_new("Artificial Player");
}

void GameTypeFactory_init(GameTypeFactory* this) {
    GameTypeFactory_initFields(this);
}

GameTypeFactory* GameTypeFactory_new(void) {
    GameTypeFactory* this = calloc(1, sizeof(GameTypeFactory));
    GameTypeFactory_init(this);
    return this;
}


GameTypeFactory* GameTypeFactory_getInstance(void) {
        return GameTypeFactory_instance;
}

