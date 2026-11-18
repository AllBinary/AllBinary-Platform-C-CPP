#ifndef ORG_ALLBINARY_GAME_GAMESTRINGS_H
#define ORG_ALLBINARY_GAME_GAMESTRINGS_H
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

typedef struct GameStrings GameStrings;
struct GameStrings {
    const char* PROCESS_TICK;
    const char* ON_GAME_INITIALIZED;
    const char* UPDATESURFACE;
    const char* ON_SET_DISPLAYABLE;
    const char* UNPAUSE;
    const char* TOGGLE_MENU;
    const char* SET_GAME_OVER;
    const char* GAME_STATE;
    const char* SET_GAME_STATE;
    const char* STOP_GAME_CANVAS_RUNNABLE_INTERFACE;
};


GameStrings* GameStrings_new(void);
void GameStrings_init(GameStrings* this);

GameStrings* GameStrings_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameStrings_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameStrings_register(void);


#endif // ORG_ALLBINARY_GAME_GAMESTRINGS_H
