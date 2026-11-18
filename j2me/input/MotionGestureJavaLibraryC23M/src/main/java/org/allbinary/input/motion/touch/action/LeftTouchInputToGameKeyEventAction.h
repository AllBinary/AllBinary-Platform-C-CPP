#ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_LEFTTOUCHINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_LEFTTOUCHINPUTTOGAMEKEYEVENTACTION_H
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
// package org.allbinary.input.motion.touch.action

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct NullUtil NullUtil;
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"

typedef struct LeftTouchInputToGameKeyEventAction LeftTouchInputToGameKeyEventAction;
struct LeftTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


LeftTouchInputToGameKeyEventAction* LeftTouchInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* LeftTouchInputToGameKeyEventAction_getInstance(void);

void LeftTouchInputToGameKeyEventAction_init(LeftTouchInputToGameKeyEventAction* this);
#define LeftTouchInputToGameKeyEventAction_new0 LeftTouchInputToGameKeyEventAction_new
#define LeftTouchInputToGameKeyEventAction_init0 LeftTouchInputToGameKeyEventAction_init
#ifndef LeftTouchInputToGameKeyEventAction_getSourceId
#define LeftTouchInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef LeftTouchInputToGameKeyEventAction_update
#define LeftTouchInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef LeftTouchInputToGameKeyEventAction_setGameKeyEvent
#define LeftTouchInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef LeftTouchInputToGameKeyEventAction_getGameKeyEvent
#define LeftTouchInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef LeftTouchInputToGameKeyEventAction_setGameKey
#define LeftTouchInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef LeftTouchInputToGameKeyEventAction_getGameKey
#define LeftTouchInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef LeftTouchInputToGameKeyEventAction_setName
#define LeftTouchInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef LeftTouchInputToGameKeyEventAction_getName
#define LeftTouchInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef LeftTouchInputToGameKeyEventAction_setMotionGestureInput
#define LeftTouchInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef LeftTouchInputToGameKeyEventAction_getMotionGestureInput
#define LeftTouchInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef LeftTouchInputToGameKeyEventAction_getSource
#define LeftTouchInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef LeftTouchInputToGameKeyEventAction_setSource
#define LeftTouchInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LeftTouchInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LeftTouchInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_LEFTTOUCHINPUTTOGAMEKEYEVENTACTION_H
