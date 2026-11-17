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
// package org.allbinary.game.state

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameState GameState;
struct GameState {
    const char* name;
};


GameState* GameState_new(const char* name, int32_t state);

void GameState_init(GameState* this, const char* name, int32_t state);
const char* GameState_toString(GameState* this);

static void GameState_initFields(GameState* this) {
    
}


void GameState_init(GameState* this, const char* name, int32_t state) {
    GameState_initFields(this);
        this->name = name;
}

GameState* GameState_new(const char* name, int32_t state) {
    GameState* this = calloc(1, sizeof(GameState));
    GameState_init(this, name, state);
    return this;
}


const char* GameState_toString(GameState* this) {
        return this->name;
}

