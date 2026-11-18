#ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H
#define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H
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
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct GameKey GameKey;
typedef struct GameKeyEventSourceInterface GameKeyEventSourceInterface;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct InputToGameKeyMapping InputToGameKeyMapping;
typedef struct MotionGestureInput MotionGestureInput;
#include "org/allbinary/game/input/CompleteMotionGestureInputEvent.h"
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#include "org/allbinary/game/input/GameKeyEventSourceInterface.h"
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif

typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
struct GameKeyCompleteMotionGestureInputEvent {
    CompleteMotionGestureInputEvent base;
    GameKeyEventSourceInterface GameKeyEventSourceInterface_interface;
    GameKey* gameKey;
    GameKeyEvent* gameKeyEvent;
};


GameKeyCompleteMotionGestureInputEvent* GameKeyCompleteMotionGestureInputEvent_new(const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping);

void GameKeyCompleteMotionGestureInputEvent_init(GameKeyCompleteMotionGestureInputEvent* this, const char* name, MotionGestureInput* motionGestureInput, InputToGameKeyMapping* inputToGameKeyMapping);

int32_t GameKeyCompleteMotionGestureInputEvent_getSourceId(GameKeyCompleteMotionGestureInputEvent* this);

void GameKeyCompleteMotionGestureInputEvent_update(GameKeyCompleteMotionGestureInputEvent* this);

void GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this, GameKeyEvent* gameKeyEvent);

GameKeyEvent* GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent(GameKeyCompleteMotionGestureInputEvent* this);

void GameKeyCompleteMotionGestureInputEvent_setGameKey(GameKeyCompleteMotionGestureInputEvent* this, GameKey* gameKey);

GameKey* GameKeyCompleteMotionGestureInputEvent_getGameKey(GameKeyCompleteMotionGestureInputEvent* this);
#define GameKeyCompleteMotionGestureInputEvent_new3 GameKeyCompleteMotionGestureInputEvent_new
#define GameKeyCompleteMotionGestureInputEvent_init3 GameKeyCompleteMotionGestureInputEvent_init
#ifndef GameKeyCompleteMotionGestureInputEvent_setName
#define GameKeyCompleteMotionGestureInputEvent_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef GameKeyCompleteMotionGestureInputEvent_getName
#define GameKeyCompleteMotionGestureInputEvent_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef GameKeyCompleteMotionGestureInputEvent_setMotionGestureInput
#define GameKeyCompleteMotionGestureInputEvent_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef GameKeyCompleteMotionGestureInputEvent_getMotionGestureInput
#define GameKeyCompleteMotionGestureInputEvent_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef GameKeyCompleteMotionGestureInputEvent_getSource
#define GameKeyCompleteMotionGestureInputEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef GameKeyCompleteMotionGestureInputEvent_setSource
#define GameKeyCompleteMotionGestureInputEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameKeyCompleteMotionGestureInputEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameKeyCompleteMotionGestureInputEvent_register(void);

#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#if __has_include("org/allbinary/game/input/event/GameKeyEvent.h")
#include "org/allbinary/game/input/event/GameKeyEvent.h"
#endif

#endif // ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_GAMEKEYCOMPLETEMOTIONGESTUREINPUTEVENT_H
