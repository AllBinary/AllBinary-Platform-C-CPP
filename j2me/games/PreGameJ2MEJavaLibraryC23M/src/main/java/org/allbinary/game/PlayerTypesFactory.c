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

typedef struct PlayerTypesFactory PlayerTypesFactory;
struct PlayerTypesFactory {
    PlayerType* PLAYER_TYPE_ONE;
    PlayerType* PLAYER_TYPE_TWO;
    PlayerType* PLAYER_TYPE_THREE;
};

static PlayerTypesFactory* PlayerTypesFactory_SINGLETON;

PlayerTypesFactory* PlayerTypesFactory_new(void);
PlayerTypesFactory* PlayerTypesFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void PlayerTypesFactory_staticInit(void) {
    PlayerTypesFactory_SINGLETON = PlayerTypesFactory_new();
}

static void PlayerTypesFactory_initFields(PlayerTypesFactory* this) {
    this->PLAYER_TYPE_ONE = PlayerType_new("Player Type One", 0);
    this->PLAYER_TYPE_TWO = PlayerType_new("Player Type Two", 1);
    this->PLAYER_TYPE_THREE = PlayerType_new("Player Type Three", 2);
}

void PlayerTypesFactory_init(PlayerTypesFactory* this) {
    PlayerTypesFactory_initFields(this);
}

PlayerTypesFactory* PlayerTypesFactory_new(void) {
    PlayerTypesFactory* this = calloc(1, sizeof(PlayerTypesFactory));
    PlayerTypesFactory_init(this);
    return this;
}


PlayerTypesFactory* PlayerTypesFactory_getInstance(void) {
        return PlayerTypesFactory_SINGLETON;
}

