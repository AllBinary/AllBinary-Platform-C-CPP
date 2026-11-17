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
// package org.allbinary.game.configuration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameSpeed GameSpeed;
struct GameSpeed {
    char unused;
};

static GameSpeed* GameSpeed_instance;

GameSpeed* GameSpeed_new(void);
int32_t GameSpeed_getSpeed(GameSpeed* this);
int32_t GameSpeed_getDelay(GameSpeed* this);
GameSpeed* GameSpeed_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void GameSpeed_staticInit(void) {
    GameSpeed_instance = GameSpeed_new();
}

void GameSpeed_init(GameSpeed* this) {
}

GameSpeed* GameSpeed_new(void) {
    GameSpeed* this = calloc(1, sizeof(GameSpeed));
    GameSpeed_init(this);
    return this;
}


int32_t GameSpeed_getSpeed(GameSpeed* this) {
        GameConfiguration* speedGameConfiguration = GameConfigurationCentral_getInstance()->SPEED;
        return (JAVA_CALL(GameConfiguration_getMaxValue(speedGameConfiguration), intValue) - JAVA_CALL(GameConfiguration_getValue(speedGameConfiguration), intValue) + 1);
}


int32_t GameSpeed_getDelay(GameSpeed* this) {
        GameConfiguration* speedGameConfiguration = GameConfigurationCentral_getInstance()->SPEED;
        return 19 * (JAVA_CALL(GameConfiguration_getMaxValue(speedGameConfiguration), intValue) - JAVA_CALL(GameConfiguration_getValue(speedGameConfiguration), intValue));
}


GameSpeed* GameSpeed_getInstance(void) {
        return GameSpeed_instance;
}

