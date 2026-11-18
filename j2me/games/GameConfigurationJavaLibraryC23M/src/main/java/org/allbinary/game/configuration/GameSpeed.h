#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_H
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
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct GameConfiguration GameConfiguration;

typedef struct GameSpeed GameSpeed;
struct GameSpeed {
    char unused;
};


GameSpeed* GameSpeed_new(void);
void GameSpeed_init(GameSpeed* this);

int32_t GameSpeed_getSpeed(GameSpeed* this);

int32_t GameSpeed_getDelay(GameSpeed* this);

GameSpeed* GameSpeed_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameSpeed_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameSpeed_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_GAMESPEED_H
