#ifndef ORG_ALLBINARY_GAME_GAMEINFODATA_H
#define ORG_ALLBINARY_GAME_GAMEINFODATA_H
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

typedef struct GameInfoData GameInfoData;
struct GameInfoData {
    const char* GAME_TYPE;
    const char* GAME_MODE;
    const char* PLAYER_TYPE;
    const char* HIGHEST_LEVEL;
    const char* CURRENT_LEVEL;
    const char* SOFTWARE_INFORMATION;
};


GameInfoData* GameInfoData_new(void);

GameInfoData* GameInfoData_getInstance(void);

void GameInfoData_init(GameInfoData* this);
#define GameInfoData_new0 GameInfoData_new
#define GameInfoData_init0 GameInfoData_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameInfoData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameInfoData_register(void);


#endif // ORG_ALLBINARY_GAME_GAMEINFODATA_H
