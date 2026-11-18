#ifndef ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H
#define ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H
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
// package org.allbinary.game.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameInitializedEvent GameInitializedEvent;
typedef struct GameInitializedEventHandler GameInitializedEventHandler;
typedef struct GameInitializedListenerInterface GameInitializedListenerInterface;
typedef struct FeatureResourceInitializationUtil FeatureResourceInitializationUtil;
typedef struct SWTJOGLProcessor SWTJOGLProcessor;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/game/configuration/event/GameInitializedListenerInterface.h"
#if __has_include("org/allbinary/graphics/threed/SWTJOGLProcessor.h")
#include "org/allbinary/graphics/threed/SWTJOGLProcessor.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "java/lang/Thread.h"

typedef struct DefaultGameInitializationListener DefaultGameInitializationListener;
struct DefaultGameInitializationListener {
    GameInitializedListenerInterface GameInitializedListenerInterface_interface;
    LogUtil* logUtil;
    SWTJOGLProcessor* swtJOGLProcessor;
    bool firstTime;
};


DefaultGameInitializationListener* DefaultGameInitializationListener_new(void);

void DefaultGameInitializationListener_init(DefaultGameInitializationListener* this);

void DefaultGameInitializationListener_onEvent(DefaultGameInitializationListener* this, AllBinaryEventObject* eventObject);

void DefaultGameInitializationListener_onGameInitialized(DefaultGameInitializationListener* this, GameInitializedEvent* gameInitializedEvent);
#define DefaultGameInitializationListener_new0 DefaultGameInitializationListener_new
#define DefaultGameInitializationListener_init0 DefaultGameInitializationListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DefaultGameInitializationListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DefaultGameInitializationListener_register(void);


#endif // ORG_ALLBINARY_GAME_INIT_DEFAULTGAMEINITIALIZATIONLISTENER_H
