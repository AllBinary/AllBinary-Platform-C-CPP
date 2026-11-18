#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEFRAMERUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEFRAMERUNNABLE_H
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
typedef struct AllBinaryGameCanvas AllBinaryGameCanvas;
typedef struct GameTickDisplayInfoSingleton GameTickDisplayInfoSingleton;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
#if __has_include("org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h")
#include "org/allbinary/graphics/displayable/GameTickDisplayInfoSingleton.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct GameFrameRunnable GameFrameRunnable;
struct GameFrameRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    GameTickDisplayInfoSingleton* gameTickDisplayInfoSingleton;
    AllBinaryGameCanvas* allBinaryGameCanvas;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


GameFrameRunnable* GameFrameRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void GameFrameRunnable_init(GameFrameRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void GameFrameRunnable_run(GameFrameRunnable* this);
#define GameFrameRunnable_new1 GameFrameRunnable_new
#define GameFrameRunnable_init1 GameFrameRunnable_init
#ifndef GameFrameRunnable_processLoopSleep
#define GameFrameRunnable_processLoopSleep GameRunnable_processLoopSleep
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameFrameRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameFrameRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMEFRAMERUNNABLE_H
