#ifndef ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H
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
typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
typedef struct Input Input;
typedef struct InputFactory InputFactory;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif

typedef struct GameKeyEventFactory GameKeyEventFactory;
struct GameKeyEventFactory {
    LogUtil* logUtil;
    int32_t TOUCH_BUTTON_SOURCE_ID;
    int32_t MOTION_GESTURE_SOURCE_ID;
    int32_t MAX_SOURCES;
    GameKeyEvent*** ARRAY;
};


GameKeyEventFactory* GameKeyEventFactory_new(void);

GameKeyEventFactory* GameKeyEventFactory_getInstance(void);

void GameKeyEventFactory_init(GameKeyEventFactory* this);

void GameKeyEventFactory_initMethod(GameKeyEventFactory* this);

GameKeyEvent* GameKeyEventFactory_getInstanceForKey(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, int32_t key);

GameKeyEvent* GameKeyEventFactory_getInstanceForInput(GameKeyEventFactory* this, GameKeyEventSourceInterface* anyType, Input* input);
#define GameKeyEventFactory_new0 GameKeyEventFactory_new
#define GameKeyEventFactory_init0 GameKeyEventFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyEventFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_EVENT_GAMEKEYEVENTFACTORY_H
