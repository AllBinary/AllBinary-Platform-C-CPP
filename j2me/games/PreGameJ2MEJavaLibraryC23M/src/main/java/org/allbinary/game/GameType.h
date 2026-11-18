#ifndef ORG_ALLBINARY_GAME_GAMETYPE_H
#define ORG_ALLBINARY_GAME_GAMETYPE_H
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
struct GameType {
    const char* name;
};


GameType* GameType_new(const char* name);

void GameType_init(GameType* this, const char* name);

const char* GameType_toString(GameType* this);
#define GameType_new1 GameType_new
#define GameType_init1 GameType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameType_register(void);


#endif // ORG_ALLBINARY_GAME_GAMETYPE_H
