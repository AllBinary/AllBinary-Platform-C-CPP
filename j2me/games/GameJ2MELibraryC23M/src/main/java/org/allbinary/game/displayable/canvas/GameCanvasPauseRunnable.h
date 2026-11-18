#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAUSERUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAUSERUNNABLE_H
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
typedef struct Features Features;
typedef struct OpenGLFeatureFactory OpenGLFeatureFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
// #include "org/allbinary/AndroidUtil.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#if __has_include("org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h")
#include "org/allbinary/game/displayable/canvas/AllBinaryGameCanvas.h"
#endif

typedef struct GameCanvasPauseRunnable GameCanvasPauseRunnable;
struct GameCanvasPauseRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    AllBinaryGameCanvas* allBinaryGameCanvas;
};


GameCanvasPauseRunnable* GameCanvasPauseRunnable_new(AllBinaryGameCanvas* allBinaryGameCanvas);

void GameCanvasPauseRunnable_init(GameCanvasPauseRunnable* this, AllBinaryGameCanvas* allBinaryGameCanvas);

void GameCanvasPauseRunnable_run(GameCanvasPauseRunnable* this);

void GameCanvasPauseRunnable_processLoopSleep(GameCanvasPauseRunnable* this);
#define GameCanvasPauseRunnable_new1 GameCanvasPauseRunnable_new
#define GameCanvasPauseRunnable_init1 GameCanvasPauseRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameCanvasPauseRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameCanvasPauseRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_GAMECANVASPAUSERUNNABLE_H
