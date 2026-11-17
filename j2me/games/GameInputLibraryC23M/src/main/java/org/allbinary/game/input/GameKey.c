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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/game/input/Input.h"

typedef struct GameKey GameKey;
struct GameKey {
    Input base;
};

GameKey* GameKey_NULL_GAME_KEY;

GameKey* GameKey_new(int32_t key, const char* name);

void GameKey_init(GameKey* this, int32_t key, const char* name);
const char* GameKey_toString(GameKey* this);

// Static fields with runtime initializers: call this once at startup
void GameKey_staticInit(void) {
    GameKey_NULL_GAME_KEY = GameKey_new(-1, StringUtil_getInstance()->NULL_STRING);
}


void GameKey_init(GameKey* this, int32_t key, const char* name) {
        Input_init(&this->base, key, name);
}

GameKey* GameKey_new(int32_t key, const char* name) {
    GameKey* this = calloc(1, sizeof(GameKey));
    GameKey_init(this, key, name);
    return this;
}


const char* GameKey_toString(GameKey* this) {
        return JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "GameKey "), append, Input_toString((&this->base))), toString);
}

