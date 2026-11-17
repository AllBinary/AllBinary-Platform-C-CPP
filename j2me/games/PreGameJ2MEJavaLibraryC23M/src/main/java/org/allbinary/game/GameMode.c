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

typedef struct GameMode GameMode;
struct GameMode {
    const char* name;
};

GameMode* GameMode_NONE;
GameMode* GameMode_SERVER;
GameMode* GameMode_CLIENT;

GameMode* GameMode_new(const char* name);

void GameMode_init(GameMode* this, const char* name);
static void GameMode_setName(GameMode* this, const char* name);
const char* GameMode_getName(GameMode* this);
const char* GameMode_toString(GameMode* this);

// Static fields with runtime initializers: call this once at startup
void GameMode_staticInit(void) {
    GameMode_NONE = GameMode_new(StringUtil_getInstance()->NULL_STRING);
    GameMode_SERVER = GameMode_new("Server");
    GameMode_CLIENT = GameMode_new("Client");
}

static void GameMode_initFields(GameMode* this) {
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void GameMode_init(GameMode* this, const char* name) {
    GameMode_initFields(this);
        GameMode_setName(this, name);
}

GameMode* GameMode_new(const char* name) {
    GameMode* this = calloc(1, sizeof(GameMode));
    GameMode_init(this, name);
    return this;
}


static void GameMode_setName(GameMode* this, const char* name) {
        this->name = name;
}


const char* GameMode_getName(GameMode* this) {
        return this->name;
}


const char* GameMode_toString(GameMode* this) {
        return GameMode_getName(this);
}

