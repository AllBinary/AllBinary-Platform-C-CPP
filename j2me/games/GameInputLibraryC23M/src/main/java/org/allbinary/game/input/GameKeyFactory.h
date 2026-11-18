#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H
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
// package org.allbinary.game.input

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameKey GameKey;
typedef struct InputFactory InputFactory;
typedef struct Canvas Canvas;
typedef struct NullUtil NullUtil;
typedef struct CommonPhoneStrings CommonPhoneStrings;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif

typedef struct GameKeyFactory GameKeyFactory;
struct GameKeyFactory {
    GameKey* NONE;
    GameKey* UP;
    GameKey* DOWN;
    GameKey* LEFT;
    GameKey* RIGHT;
    GameKey* KEY_POUND;
    GameKey* KEY_STAR;
    GameKey* KEY_NUM0;
    GameKey* KEY_NUM1;
    GameKey* KEY_NUM2;
    GameKey* KEY_NUM3;
    GameKey* KEY_NUM4;
    GameKey* KEY_NUM5;
    GameKey* KEY_NUM6;
    GameKey* KEY_NUM7;
    GameKey* KEY_NUM8;
    GameKey* KEY_NUM9;
    GameKey* GAME_A;
    GameKey* GAME_B;
    GameKey* GAME_C;
    GameKey* GAME_D;
    GameKey* FIRE;
    GameKey* LEVEL_DOWN;
    GameKey* LEVEL_UP;
};


GameKeyFactory* GameKeyFactory_new(void);
void GameKeyFactory_init(GameKeyFactory* this);

GameKeyFactory* GameKeyFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEKEYFACTORY_H
