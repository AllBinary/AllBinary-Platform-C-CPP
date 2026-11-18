#ifndef ORG_ALLBINARY_GAME_INPUT_GAMEKEY_H
#define ORG_ALLBINARY_GAME_INPUT_GAMEKEY_H
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
typedef struct Input Input;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
#include "org/allbinary/game/input/Input.h"

typedef struct GameKey GameKey;
struct GameKey {
    Input base;
};

extern GameKey* GameKey_NULL_GAME_KEY;

GameKey* GameKey_new(int32_t key, const char* name);

void GameKey_init(GameKey* this, int32_t key, const char* name);

const char* GameKey_toString(GameKey* this);
#define GameKey_new2 GameKey_new
#define GameKey_init2 GameKey_init
#ifndef GameKey_getId
#define GameKey_getId Input_getId
#endif
#ifndef GameKey_setId
#define GameKey_setId Input_setId
#endif
#ifndef GameKey_getName
#define GameKey_getName Input_getName
#endif
#ifndef GameKey_setName
#define GameKey_setName Input_setName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKey_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKey_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_GAMEKEY_H
