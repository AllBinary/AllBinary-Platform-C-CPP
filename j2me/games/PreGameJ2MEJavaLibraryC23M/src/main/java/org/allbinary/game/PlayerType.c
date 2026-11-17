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

typedef struct PlayerType PlayerType;
struct PlayerType {
    int32_t id;
    const char* name;
};


PlayerType* PlayerType_new(const char* name, int32_t value);

void PlayerType_init(PlayerType* this, const char* name, int32_t value);
int32_t PlayerType_getId(PlayerType* this);
const char* PlayerType_getName(PlayerType* this);
const char* PlayerType_toString(PlayerType* this);

static void PlayerType_initFields(PlayerType* this) {
    
    this->name = StringUtil_getInstance()->EMPTY_STRING;
}


void PlayerType_init(PlayerType* this, const char* name, int32_t value) {
    PlayerType_initFields(this);
        this->name = name;
        this->id = value;
}

PlayerType* PlayerType_new(const char* name, int32_t value) {
    PlayerType* this = calloc(1, sizeof(PlayerType));
    PlayerType_init(this, name, value);
    return this;
}


int32_t PlayerType_getId(PlayerType* this) {
        return this->id;
}


const char* PlayerType_getName(PlayerType* this) {
        return this->name;
}


const char* PlayerType_toString(PlayerType* this) {
        return PlayerType_getName(this);
}

