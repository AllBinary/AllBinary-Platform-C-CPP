#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMERUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMERUNNABLE_H
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
typedef struct DemoCanvas DemoCanvas;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct GameTickTimeDelayHelper GameTickTimeDelayHelper;
typedef struct GameTickTimeDelayHelperFactory GameTickTimeDelayHelperFactory;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#include "org/allbinary/game/displayable/canvas/GameRunnable.h"
#if __has_include("org/allbinary/game/displayable/canvas/DemoCanvas.h")
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#endif

typedef struct DemoGameRunnable DemoGameRunnable;
struct DemoGameRunnable {
    GameRunnable base;
    LogUtil* logUtil;
    DemoCanvas* demoCanvas;
    GameTickTimeDelayHelper* gameTickTimeDelayHelper;
};


DemoGameRunnable* DemoGameRunnable_new(DemoCanvas* demoCanvas);

void DemoGameRunnable_init(DemoGameRunnable* this, DemoCanvas* demoCanvas);

void DemoGameRunnable_run(DemoGameRunnable* this);

void DemoGameRunnable_processLoopSleep(DemoGameRunnable* this);
#define DemoGameRunnable_new1 DemoGameRunnable_new
#define DemoGameRunnable_init1 DemoGameRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMERUNNABLE_H
