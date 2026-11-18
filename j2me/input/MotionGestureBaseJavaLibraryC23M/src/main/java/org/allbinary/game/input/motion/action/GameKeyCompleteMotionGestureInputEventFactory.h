#ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H
#define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H
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
// package org.allbinary.game.input.motion.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct GameKeyCompleteMotionGestureInputEventFactory GameKeyCompleteMotionGestureInputEventFactory;
struct GameKeyCompleteMotionGestureInputEventFactory {
    LogUtil* logUtil;
    BasicArrayList* eventList;
};


GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_new(void);
void GameKeyCompleteMotionGestureInputEventFactory_init(GameKeyCompleteMotionGestureInputEventFactory* this);

GameKeyCompleteMotionGestureInputEventFactory* GameKeyCompleteMotionGestureInputEventFactory_getInstance(void);

void GameKeyCompleteMotionGestureInputEventFactory_add(GameKeyCompleteMotionGestureInputEventFactory* this, GameKeyCompleteMotionGestureInputEvent* gameKeyCompleteMotionGestureInputEvent);

void GameKeyCompleteMotionGestureInputEventFactory_updateAll(GameKeyCompleteMotionGestureInputEventFactory* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyCompleteMotionGestureInputEventFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyCompleteMotionGestureInputEventFactory_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENTFACTORY_H
