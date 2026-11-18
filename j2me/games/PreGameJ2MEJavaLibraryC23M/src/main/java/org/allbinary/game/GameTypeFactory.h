#ifndef ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H
#define ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H
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
typedef struct GameType GameType;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/game/GameType.h")
#include "org/allbinary/game/GameType.h"
#endif

typedef struct GameTypeFactory GameTypeFactory;
struct GameTypeFactory {
    GameType** NULL_GAME_TYPE_ARRAY;
    GameType* NONE;
    GameType* SINGLE_PLAYER;
    GameType* MULTI_PLAYER;
    GameType* BOT;
};


GameTypeFactory* GameTypeFactory_new(void);
void GameTypeFactory_init(GameTypeFactory* this);

GameTypeFactory* GameTypeFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameTypeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameTypeFactory_register(void);


#endif // ORG_ALLBINARY_GAME_GAMETYPEFACTORY_H
