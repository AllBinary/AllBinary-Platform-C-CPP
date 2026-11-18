#ifndef ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H
#define ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H
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
typedef struct GameInfo GameInfo;
typedef struct GameTypeFactory GameTypeFactory;
typedef struct GameMode GameMode;
typedef struct PlayerTypesFactory PlayerTypesFactory;
#if __has_include("org/allbinary/game/GameInfo.h")
#include "org/allbinary/game/GameInfo.h"
#endif

typedef struct BasicHighScoresGameInfoFactory BasicHighScoresGameInfoFactory;
struct BasicHighScoresGameInfoFactory {
    GameInfo* MULTI_PLAYER_SERVER;
    GameInfo* SINGLE_PLAYER_SERVER;
};


BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_new(void);
void BasicHighScoresGameInfoFactory_init(BasicHighScoresGameInfoFactory* this);

BasicHighScoresGameInfoFactory* BasicHighScoresGameInfoFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicHighScoresGameInfoFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicHighScoresGameInfoFactory_register(void);


#endif // ORG_ALLBINARY_GAME_BASICHIGHSCORESGAMEINFOFACTORY_H
