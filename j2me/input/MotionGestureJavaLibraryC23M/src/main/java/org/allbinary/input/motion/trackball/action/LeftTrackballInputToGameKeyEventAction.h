#ifndef ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_LEFTTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_LEFTTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
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

typedef struct LeftTrackballInputToGameKeyEventAction LeftTrackballInputToGameKeyEventAction;
struct LeftTrackballInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


LeftTrackballInputToGameKeyEventAction* LeftTrackballInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* LeftTrackballInputToGameKeyEventAction_getInstance(void);

void LeftTrackballInputToGameKeyEventAction_init(LeftTrackballInputToGameKeyEventAction* this);
#define LeftTrackballInputToGameKeyEventAction_new0 LeftTrackballInputToGameKeyEventAction_new
#define LeftTrackballInputToGameKeyEventAction_init0 LeftTrackballInputToGameKeyEventAction_init
#ifndef LeftTrackballInputToGameKeyEventAction_getSourceId
#define LeftTrackballInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_update
#define LeftTrackballInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_setGameKeyEvent
#define LeftTrackballInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_getGameKeyEvent
#define LeftTrackballInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_setGameKey
#define LeftTrackballInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_getGameKey
#define LeftTrackballInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_setName
#define LeftTrackballInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_getName
#define LeftTrackballInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_setMotionGestureInput
#define LeftTrackballInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_getMotionGestureInput
#define LeftTrackballInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_getSource
#define LeftTrackballInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef LeftTrackballInputToGameKeyEventAction_setSource
#define LeftTrackballInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LeftTrackballInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LeftTrackballInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_LEFTTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
