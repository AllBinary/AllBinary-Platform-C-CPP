#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLWAITGAMERUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLWAITGAMERUNNABLE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
typedef struct GameRunnable GameRunnable;
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct NullWaitGameRunnable NullWaitGameRunnable;
struct NullWaitGameRunnable {
    GameRunnable base;
};


NullWaitGameRunnable* NullWaitGameRunnable_new(void);
void NullWaitGameRunnable_init(NullWaitGameRunnable* this);

GameRunnable* NullWaitGameRunnable_getInstance(void);
#ifndef NullWaitGameRunnable_run
#define NullWaitGameRunnable_run GameRunnable_run
#endif
#ifndef NullWaitGameRunnable_processLoopSleep
#define NullWaitGameRunnable_processLoopSleep GameRunnable_processLoopSleep
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullWaitGameRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullWaitGameRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_NULLWAITGAMERUNNABLE_H
