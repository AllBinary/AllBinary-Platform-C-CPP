#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_RUNNABLECANVASSINGLETHREADSTARTRUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_RUNNABLECANVASSINGLETHREADSTARTRUNNABLE_H
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
typedef struct GameRunnable GameRunnable;
typedef struct RunnableCanvas RunnableCanvas;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/canvas/RunnableCanvas.h")
#include "org/allbinary/canvas/RunnableCanvas.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"

typedef struct RunnableCanvasSingleThreadStartRunnable RunnableCanvasSingleThreadStartRunnable;
struct RunnableCanvasSingleThreadStartRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    RunnableCanvas* runnableCanvas;
};


RunnableCanvasSingleThreadStartRunnable* RunnableCanvasSingleThreadStartRunnable_new(RunnableCanvas* demoCanvas);

void RunnableCanvasSingleThreadStartRunnable_init(RunnableCanvasSingleThreadStartRunnable* this, RunnableCanvas* demoCanvas);

void RunnableCanvasSingleThreadStartRunnable_run(RunnableCanvasSingleThreadStartRunnable* this);

void RunnableCanvasSingleThreadStartRunnable_processLoopSleep(RunnableCanvasSingleThreadStartRunnable* this);
#define RunnableCanvasSingleThreadStartRunnable_new1 RunnableCanvasSingleThreadStartRunnable_new
#define RunnableCanvasSingleThreadStartRunnable_init1 RunnableCanvasSingleThreadStartRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RunnableCanvasSingleThreadStartRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RunnableCanvasSingleThreadStartRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_RUNNABLECANVASSINGLETHREADSTARTRUNNABLE_H
