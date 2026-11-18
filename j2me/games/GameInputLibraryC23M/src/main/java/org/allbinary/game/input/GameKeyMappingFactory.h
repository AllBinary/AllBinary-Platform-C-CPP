#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H
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
typedef struct GameKeyFactory GameKeyFactory;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif

typedef struct GameKeyMappingFactory GameKeyMappingFactory;
struct GameKeyMappingFactory {
    GameKey** intKeyToGameKey;
};


GameKeyMappingFactory* GameKeyMappingFactory_new(void);

GameKeyMappingFactory* GameKeyMappingFactory_getInstance(void);

void GameKeyMappingFactory_init(GameKeyMappingFactory* this);

GameKey* GameKeyMappingFactory_getGameKey(GameKeyMappingFactory* this, int32_t key);

#define GameKeyMappingFactory_new0 GameKeyMappingFactory_new
#define GameKeyMappingFactory_init0 GameKeyMappingFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyMappingFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyMappingFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEKEYMAPPINGFACTORY_H
