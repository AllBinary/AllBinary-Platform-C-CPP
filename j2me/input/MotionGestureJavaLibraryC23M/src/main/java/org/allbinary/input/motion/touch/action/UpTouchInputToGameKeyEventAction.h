#ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_UPTOUCHINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_UPTOUCHINPUTTOGAMEKEYEVENTACTION_H
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

typedef struct UpTouchInputToGameKeyEventAction UpTouchInputToGameKeyEventAction;
struct UpTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


UpTouchInputToGameKeyEventAction* UpTouchInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* UpTouchInputToGameKeyEventAction_getInstance(void);

void UpTouchInputToGameKeyEventAction_init(UpTouchInputToGameKeyEventAction* this);
#define UpTouchInputToGameKeyEventAction_new0 UpTouchInputToGameKeyEventAction_new
#define UpTouchInputToGameKeyEventAction_init0 UpTouchInputToGameKeyEventAction_init
#ifndef UpTouchInputToGameKeyEventAction_getSourceId
#define UpTouchInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef UpTouchInputToGameKeyEventAction_update
#define UpTouchInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef UpTouchInputToGameKeyEventAction_setGameKeyEvent
#define UpTouchInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef UpTouchInputToGameKeyEventAction_getGameKeyEvent
#define UpTouchInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef UpTouchInputToGameKeyEventAction_setGameKey
#define UpTouchInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef UpTouchInputToGameKeyEventAction_getGameKey
#define UpTouchInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef UpTouchInputToGameKeyEventAction_setName
#define UpTouchInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef UpTouchInputToGameKeyEventAction_getName
#define UpTouchInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef UpTouchInputToGameKeyEventAction_setMotionGestureInput
#define UpTouchInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef UpTouchInputToGameKeyEventAction_getMotionGestureInput
#define UpTouchInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef UpTouchInputToGameKeyEventAction_getSource
#define UpTouchInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef UpTouchInputToGameKeyEventAction_setSource
#define UpTouchInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpTouchInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpTouchInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_UPTOUCHINPUTTOGAMEKEYEVENTACTION_H
