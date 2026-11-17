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
// package org.allbinary.game.configuration.persistance

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameDifficultyFactory GameDifficultyFactory;
struct GameDifficultyFactory {
    int32_t level;
};

static GameDifficultyFactory* GameDifficultyFactory_instance;

GameDifficultyFactory* GameDifficultyFactory_new(void);
GameDifficultyFactory* GameDifficultyFactory_getInstance(void);
void GameDifficultyFactory_setLevel(GameDifficultyFactory* this, int32_t level);
int32_t GameDifficultyFactory_getLevel(GameDifficultyFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameDifficultyFactory_staticInit(void) {
    GameDifficultyFactory_instance = GameDifficultyFactory_new();
}

static void GameDifficultyFactory_initFields(GameDifficultyFactory* this) {
    this->level = 0;
}

void GameDifficultyFactory_init(GameDifficultyFactory* this) {
    GameDifficultyFactory_initFields(this);
}

GameDifficultyFactory* GameDifficultyFactory_new(void) {
    GameDifficultyFactory* this = calloc(1, sizeof(GameDifficultyFactory));
    GameDifficultyFactory_init(this);
    return this;
}


GameDifficultyFactory* GameDifficultyFactory_getInstance(void) {
        return GameDifficultyFactory_instance;
}


void GameDifficultyFactory_setLevel(GameDifficultyFactory* this, int32_t level) {
        this->level = level;
}


int32_t GameDifficultyFactory_getLevel(GameDifficultyFactory* this) {
        return this->level;
}

