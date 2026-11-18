#ifndef ORG_ALLBINARY_GAME_GAMEMODE_H
#define ORG_ALLBINARY_GAME_GAMEMODE_H
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
typedef struct StringUtil StringUtil;

typedef struct GameMode GameMode;
struct GameMode {
    const char* name;
};

extern GameMode* GameMode_NONE;
extern GameMode* GameMode_SERVER;
extern GameMode* GameMode_CLIENT;

GameMode* GameMode_new(const char* name);

void GameMode_init(GameMode* this, const char* name);


const char* GameMode_getName(GameMode* this);

const char* GameMode_toString(GameMode* this);
#define GameMode_new1 GameMode_new
#define GameMode_init1 GameMode_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameMode_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameMode_register(void);


#endif // ORG_ALLBINARY_GAME_GAMEMODE_H
