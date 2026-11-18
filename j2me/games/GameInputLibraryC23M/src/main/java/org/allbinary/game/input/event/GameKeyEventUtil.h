#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H
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
// package org.allbinary.game.input.event

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameKeyEvent GameKeyEvent;

typedef struct GameKeyEventUtil GameKeyEventUtil;
struct GameKeyEventUtil {
    char unused;
};


GameKeyEventUtil* GameKeyEventUtil_new(void);

void GameKeyEventUtil_init(GameKeyEventUtil* this);

int32_t GameKeyEventUtil_getKey(void* anyType);
#define GameKeyEventUtil_new0 GameKeyEventUtil_new
#define GameKeyEventUtil_init0 GameKeyEventUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyEventUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyEventUtil_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTUTIL_H
