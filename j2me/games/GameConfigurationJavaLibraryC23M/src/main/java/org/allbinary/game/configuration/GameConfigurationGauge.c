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
// #include "javax/microedition/lcdui/Gauge.h"

typedef struct GameConfigurationGauge GameConfigurationGauge;
struct GameConfigurationGauge {
    Gauge base;
};


GameConfigurationGauge* GameConfigurationGauge_new(GameConfiguration* gameConfiguration);

void GameConfigurationGauge_init(GameConfigurationGauge* this, GameConfiguration* gameConfiguration);


void GameConfigurationGauge_init(GameConfigurationGauge* this, GameConfiguration* gameConfiguration) {
        Gauge_init(&this->base, GameConfiguration_getName(gameConfiguration), JAVA_CALL(GameConfiguration_isModifiable(gameConfiguration), booleanValue), JAVA_CALL(GameConfiguration_getMaxValue(gameConfiguration), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue), JAVA_CALL(GameConfiguration_getValue(gameConfiguration), intValue) - JAVA_CALL(GameConfiguration_getMinValue(gameConfiguration), intValue));
}

GameConfigurationGauge* GameConfigurationGauge_new(GameConfiguration* gameConfiguration) {
    GameConfigurationGauge* this = calloc(1, sizeof(GameConfigurationGauge));
    GameConfigurationGauge_init(this, gameConfiguration);
    return this;
}

