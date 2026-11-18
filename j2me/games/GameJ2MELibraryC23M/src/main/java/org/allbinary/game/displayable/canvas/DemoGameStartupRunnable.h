#ifndef ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_H
#define ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_H
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
typedef struct DemoCanvas DemoCanvas;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct ABRunnable ABRunnable;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/thread/ABRunnable.h"
#if __has_include("org/allbinary/game/displayable/canvas/DemoCanvas.h")
#include "org/allbinary/game/displayable/canvas/DemoCanvas.h"
#endif

typedef struct DemoGameStartupRunnable DemoGameStartupRunnable;
struct DemoGameStartupRunnable {
    ABRunnable base;
    LogUtil* logUtil;
    DemoCanvas* demoCanvas;
};

static constexpr int32_t DemoGameStartupRunnable_TYPE = 4;

DemoGameStartupRunnable* DemoGameStartupRunnable_new(DemoCanvas* demoCanvas);

void DemoGameStartupRunnable_init(DemoGameStartupRunnable* this, DemoCanvas* demoCanvas);

void DemoGameStartupRunnable_run(DemoGameStartupRunnable* this);

int32_t DemoGameStartupRunnable_getType(DemoGameStartupRunnable* this);
#define DemoGameStartupRunnable_new1 DemoGameStartupRunnable_new
#define DemoGameStartupRunnable_init1 DemoGameStartupRunnable_init
#ifndef DemoGameStartupRunnable_setThread
#define DemoGameStartupRunnable_setThread ABRunnable_setThread
#endif
#ifndef DemoGameStartupRunnable_isRunning
#define DemoGameStartupRunnable_isRunning ABRunnable_isRunning
#endif
#ifndef DemoGameStartupRunnable_setRunning
#define DemoGameStartupRunnable_setRunning ABRunnable_setRunning
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DemoGameStartupRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DemoGameStartupRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_DISPLAYABLE_CANVAS_DEMOGAMESTARTUPRUNNABLE_H
