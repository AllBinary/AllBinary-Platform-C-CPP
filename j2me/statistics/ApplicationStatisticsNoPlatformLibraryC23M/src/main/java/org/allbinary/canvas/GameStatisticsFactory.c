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
// package org.allbinary.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/canvas/BaseGameStatistics.h"

//NoPlatform
typedef struct GameStatisticsFactory GameStatisticsFactory;
struct GameStatisticsFactory {
    BaseGameStatistics base;
};

static GameStatisticsFactory* GameStatisticsFactory_instance;

GameStatisticsFactory* GameStatisticsFactory_new(void);
GameStatisticsFactory* GameStatisticsFactory_getInstance(void);
void GameStatisticsFactory_add(GameStatisticsFactory* this, const char* string);
const char* GameStatisticsFactory_toString(GameStatisticsFactory* this);

// Static fields with runtime initializers: call this once at startup
void GameStatisticsFactory_staticInit(void) {
    GameStatisticsFactory_instance = GameStatisticsFactory_new();
}

void GameStatisticsFactory_init(GameStatisticsFactory* this) {
    BaseGameStatistics_init(&this->base);
}

GameStatisticsFactory* GameStatisticsFactory_new(void) {
    GameStatisticsFactory* this = calloc(1, sizeof(GameStatisticsFactory));
    GameStatisticsFactory_init(this);
    return this;
}


GameStatisticsFactory* GameStatisticsFactory_getInstance(void) {
        return GameStatisticsFactory_instance;
}


void GameStatisticsFactory_add(GameStatisticsFactory* this, const char* string) {
}


const char* GameStatisticsFactory_toString(GameStatisticsFactory* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

