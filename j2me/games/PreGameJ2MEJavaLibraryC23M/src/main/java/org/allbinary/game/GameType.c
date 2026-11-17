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

typedef struct GameType GameType;
struct GameType {
    const char* name;
};


GameType* GameType_new(const char* name);

void GameType_init(GameType* this, const char* name);
const char* GameType_toString(GameType* this);

static void GameType_initFields(GameType* this) {
    
}


void GameType_init(GameType* this, const char* name) {
    GameType_initFields(this);
        this->name = name;
}

GameType* GameType_new(const char* name) {
    GameType* this = calloc(1, sizeof(GameType));
    GameType_init(this, name);
    return this;
}


const char* GameType_toString(GameType* this) {
        return this->name;
}

