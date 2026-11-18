#ifndef ORG_ALLBINARY_GAME_STATE_GAMESTATE_H
#define ORG_ALLBINARY_GAME_STATE_GAMESTATE_H
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
// package org.allbinary.game.state

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct GameState GameState;
struct GameState {
    const char* name;
};


GameState* GameState_new(const char* name, int32_t state);

void GameState_init(GameState* this, const char* name, int32_t state);

const char* GameState_toString(GameState* this);
#define GameState_new2 GameState_new
#define GameState_init2 GameState_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameState_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameState_register(void);


#endif // ORG_ALLBINARY_GAME_STATE_GAMESTATE_H
