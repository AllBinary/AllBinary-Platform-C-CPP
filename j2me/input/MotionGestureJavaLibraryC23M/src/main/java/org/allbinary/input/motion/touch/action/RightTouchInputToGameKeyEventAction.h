#ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H
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

typedef struct RightTouchInputToGameKeyEventAction RightTouchInputToGameKeyEventAction;
struct RightTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


RightTouchInputToGameKeyEventAction* RightTouchInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* RightTouchInputToGameKeyEventAction_getInstance(void);

void RightTouchInputToGameKeyEventAction_init(RightTouchInputToGameKeyEventAction* this);
#define RightTouchInputToGameKeyEventAction_new0 RightTouchInputToGameKeyEventAction_new
#define RightTouchInputToGameKeyEventAction_init0 RightTouchInputToGameKeyEventAction_init
#ifndef RightTouchInputToGameKeyEventAction_getSourceId
#define RightTouchInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef RightTouchInputToGameKeyEventAction_update
#define RightTouchInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef RightTouchInputToGameKeyEventAction_setGameKeyEvent
#define RightTouchInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef RightTouchInputToGameKeyEventAction_getGameKeyEvent
#define RightTouchInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef RightTouchInputToGameKeyEventAction_setGameKey
#define RightTouchInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef RightTouchInputToGameKeyEventAction_getGameKey
#define RightTouchInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef RightTouchInputToGameKeyEventAction_setName
#define RightTouchInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef RightTouchInputToGameKeyEventAction_getName
#define RightTouchInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef RightTouchInputToGameKeyEventAction_setMotionGestureInput
#define RightTouchInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef RightTouchInputToGameKeyEventAction_getMotionGestureInput
#define RightTouchInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef RightTouchInputToGameKeyEventAction_getSource
#define RightTouchInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef RightTouchInputToGameKeyEventAction_setSource
#define RightTouchInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RightTouchInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RightTouchInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RIGHTTOUCHINPUTTOGAMEKEYEVENTACTION_H
