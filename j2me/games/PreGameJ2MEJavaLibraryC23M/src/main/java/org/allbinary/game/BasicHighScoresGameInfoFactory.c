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

typedef struct BasicHighScoresGameInfoFactory BasicHighScoresGameInfoFactory;
struct BasicHighScoresGameInfoFactory {
    GameInfo* MULTI_PLAYER_SERVER;
    GameInfo* SINGLE_PLAYER_SERVER;
};

static BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_SINGLETON;

BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_new(void);
BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void BasicHighScoresGameInfoFactory_staticInit(void) {
    BasicHighScoresGameInfoFactory_SINGLETON = BasicHighScoresGameInfoFactory_new();
}

static void BasicHighScoresGameInfoFactory_initFields(BasicHighScoresGameInfoFactory* this) {
    this->MULTI_PLAYER_SERVER = GameInfo_new(GameTypeFactory_getInstance()->MULTI_PLAYER, GameMode_SERVER, PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 0, 0);
    this->SINGLE_PLAYER_SERVER = GameInfo_new(GameTypeFactory_getInstance()->SINGLE_PLAYER, GameMode_SERVER, PlayerTypesFactory_getInstance()->PLAYER_TYPE_ONE, 0, 0);
}

void BasicHighScoresGameInfoFactory_init(BasicHighScoresGameInfoFactory* this) {
    BasicHighScoresGameInfoFactory_initFields(this);
}

BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_new(void) {
    BasicHighScoresGameInfoFactory* this = calloc(1, sizeof(BasicHighScoresGameInfoFactory));
    BasicHighScoresGameInfoFactory_init(this);
    return this;
}


BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_getInstance(void) {
        return BasicHighScoresGameInfoFactory_SINGLETON;
}

