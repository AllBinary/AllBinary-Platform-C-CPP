#ifndef ORG_ALLBINARY_GAME_MIDLET_CREATEGAMERUNNABLE_H
#define ORG_ALLBINARY_GAME_MIDLET_CREATEGAMERUNNABLE_H
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
// package org.allbinary.game.midlet

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct DemoGameMidlet DemoGameMidlet;
typedef struct DemoGameMidletEvent DemoGameMidletEvent;
typedef struct DemoGameMidletStateFactory DemoGameMidletStateFactory;
typedef struct DemoGameMidletEventHandler DemoGameMidletEventHandler;
typedef struct ProgressCanvas ProgressCanvas;
typedef struct ProgressCanvasFactory ProgressCanvasFactory;
typedef struct MyCommandsFactory MyCommandsFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#include "java/lang/Runnable.h"
#if __has_include("org/allbinary/game/midlet/DemoGameMidlet.h")
#include "org/allbinary/game/midlet/DemoGameMidlet.h"
#endif
#if __has_include("org/allbinary/game/midlet/DemoGameMidletEvent.h")
#include "org/allbinary/game/midlet/DemoGameMidletEvent.h"
#endif

typedef struct CreateGameRunnable CreateGameRunnable;
struct CreateGameRunnable {
    Runnable Runnable_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    DemoGameMidlet* demoGameMidlet;
    ABHashtable* hashtable;
    DemoGameMidletEvent* startGameMidletEvent;
};


CreateGameRunnable* CreateGameRunnable_new(DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable);

void CreateGameRunnable_init(CreateGameRunnable* this, DemoGameMidlet* demoGameMidlet, ABHashtable* hashtable);

void CreateGameRunnable_run(CreateGameRunnable* this);
#define CreateGameRunnable_new2 CreateGameRunnable_new
#define CreateGameRunnable_init2 CreateGameRunnable_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CreateGameRunnable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CreateGameRunnable_register(void);


#endif // ORG_ALLBINARY_GAME_MIDLET_CREATEGAMERUNNABLE_H
