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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/game/input/GameKey.h"
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct GameInputMapping GameInputMapping;
struct GameInputMapping {
    const char* name;
    GameKey* gameKey;
};


GameInputMapping* GameInputMapping_new(const char* name, GameKey* gameKey);

void GameInputMapping_init(GameInputMapping* this, const char* name, GameKey* gameKey);
static void GameInputMapping_setGameKey(GameInputMapping* this, GameKey* gameKey);
GameKey* GameInputMapping_getGameKey(GameInputMapping* this);
static void GameInputMapping_setName(GameInputMapping* this, const char* name);
const char* GameInputMapping_getName(GameInputMapping* this);

static void GameInputMapping_initFields(GameInputMapping* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
    this->gameKey = GameKey_NULL_GAME_KEY;
}


void GameInputMapping_init(GameInputMapping* this, const char* name, GameKey* gameKey) {
    GameInputMapping_initFields(this);
        GameInputMapping_setName(this, name);
        GameInputMapping_setGameKey(this, gameKey);
}

GameInputMapping* GameInputMapping_new(const char* name, GameKey* gameKey) {
    GameInputMapping* this = calloc(1, sizeof(GameInputMapping));
    GameInputMapping_init(this, name, gameKey);
    return this;
}


static void GameInputMapping_setGameKey(GameInputMapping* this, GameKey* gameKey) {
        this->gameKey = gameKey;
}


GameKey* GameInputMapping_getGameKey(GameInputMapping* this) {
        return this->gameKey;
}


static void GameInputMapping_setName(GameInputMapping* this, const char* name) {
        this->name = name;
}


const char* GameInputMapping_getName(GameInputMapping* this) {
        return this->name;
}

