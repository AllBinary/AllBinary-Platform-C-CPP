#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMERUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMERUNNABLE_H
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
// package org.allbinary.game.displayable.canvas

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DisplayInfoSingleton DisplayInfoSingleton;
#include "java/lang/Thread.h"
#include "java/lang/Runnable.h"

typedef struct GameRunnable GameRunnable;
struct GameRunnable {
    Runnable Runnable_interface;
    int32_t WAIT;
    int32_t FAST;
    int64_t waitInMillis;
};


GameRunnable* GameRunnable_new(void);

void GameRunnable_init(GameRunnable* this);

void GameRunnable_run(GameRunnable* this);

void GameRunnable_processLoopSleep(GameRunnable* this);
#define GameRunnable_new0 GameRunnable_new
#define GameRunnable_init0 GameRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMERUNNABLE_H
