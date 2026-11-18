#ifndef ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H
#define ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H
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


GameDifficultyFactory* GameDifficultyFactory_new(void);
void GameDifficultyFactory_init(GameDifficultyFactory* this);

GameDifficultyFactory* GameDifficultyFactory_getInstance(void);

void GameDifficultyFactory_setLevel(GameDifficultyFactory* this, int32_t level);

int32_t GameDifficultyFactory_getLevel(GameDifficultyFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameDifficultyFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameDifficultyFactory_register(void);


#endif // ORG_ALLBINARY_GAME_CONFIGURATION_PERSISTANCE_GAMEDIFFICULTYFACTORY_H
