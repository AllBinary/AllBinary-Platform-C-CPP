#ifndef ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_UPTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_UPTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
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
// package org.allbinary.input.motion.trackball.action

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
typedef struct TrackballMotionGestureFactory TrackballMotionGestureFactory;
typedef struct NullUtil NullUtil;
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"

typedef struct UpTrackballInputToGameKeyEventAction UpTrackballInputToGameKeyEventAction;
struct UpTrackballInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


UpTrackballInputToGameKeyEventAction* UpTrackballInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* UpTrackballInputToGameKeyEventAction_getInstance(void);

void UpTrackballInputToGameKeyEventAction_init(UpTrackballInputToGameKeyEventAction* this);
#define UpTrackballInputToGameKeyEventAction_new0 UpTrackballInputToGameKeyEventAction_new
#define UpTrackballInputToGameKeyEventAction_init0 UpTrackballInputToGameKeyEventAction_init
#ifndef UpTrackballInputToGameKeyEventAction_getSourceId
#define UpTrackballInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef UpTrackballInputToGameKeyEventAction_update
#define UpTrackballInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef UpTrackballInputToGameKeyEventAction_setGameKeyEvent
#define UpTrackballInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef UpTrackballInputToGameKeyEventAction_getGameKeyEvent
#define UpTrackballInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef UpTrackballInputToGameKeyEventAction_setGameKey
#define UpTrackballInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef UpTrackballInputToGameKeyEventAction_getGameKey
#define UpTrackballInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef UpTrackballInputToGameKeyEventAction_setName
#define UpTrackballInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef UpTrackballInputToGameKeyEventAction_getName
#define UpTrackballInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef UpTrackballInputToGameKeyEventAction_setMotionGestureInput
#define UpTrackballInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef UpTrackballInputToGameKeyEventAction_getMotionGestureInput
#define UpTrackballInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef UpTrackballInputToGameKeyEventAction_getSource
#define UpTrackballInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef UpTrackballInputToGameKeyEventAction_setSource
#define UpTrackballInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpTrackballInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpTrackballInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_UPTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
