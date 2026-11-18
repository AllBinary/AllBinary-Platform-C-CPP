#ifndef ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H
#define ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H
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
// package org.allbinary.game.input.mapping

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameKey GameKey;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif

typedef struct GameInputMapping GameInputMapping;
struct GameInputMapping {
    const char* name;
    GameKey* gameKey;
};


GameInputMapping* GameInputMapping_new(const char* name, GameKey* gameKey);

void GameInputMapping_init(GameInputMapping* this, const char* name, GameKey* gameKey);


GameKey* GameInputMapping_getGameKey(GameInputMapping* this);


const char* GameInputMapping_getName(GameInputMapping* this);
#define GameInputMapping_new2 GameInputMapping_new
#define GameInputMapping_init2 GameInputMapping_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInputMapping_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInputMapping_register(void);

#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MAPPING_GAMEINPUTMAPPING_H
