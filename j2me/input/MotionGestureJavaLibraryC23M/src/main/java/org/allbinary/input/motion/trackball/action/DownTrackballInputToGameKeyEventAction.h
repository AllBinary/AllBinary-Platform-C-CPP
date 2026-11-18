#ifndef ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_DOWNTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_DOWNTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
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

typedef struct DownTrackballInputToGameKeyEventAction DownTrackballInputToGameKeyEventAction;
struct DownTrackballInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


DownTrackballInputToGameKeyEventAction* DownTrackballInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* DownTrackballInputToGameKeyEventAction_getInstance(void);

void DownTrackballInputToGameKeyEventAction_init(DownTrackballInputToGameKeyEventAction* this);
#define DownTrackballInputToGameKeyEventAction_new0 DownTrackballInputToGameKeyEventAction_new
#define DownTrackballInputToGameKeyEventAction_init0 DownTrackballInputToGameKeyEventAction_init
#ifndef DownTrackballInputToGameKeyEventAction_getSourceId
#define DownTrackballInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef DownTrackballInputToGameKeyEventAction_update
#define DownTrackballInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef DownTrackballInputToGameKeyEventAction_setGameKeyEvent
#define DownTrackballInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef DownTrackballInputToGameKeyEventAction_getGameKeyEvent
#define DownTrackballInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef DownTrackballInputToGameKeyEventAction_setGameKey
#define DownTrackballInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef DownTrackballInputToGameKeyEventAction_getGameKey
#define DownTrackballInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef DownTrackballInputToGameKeyEventAction_setName
#define DownTrackballInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef DownTrackballInputToGameKeyEventAction_getName
#define DownTrackballInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef DownTrackballInputToGameKeyEventAction_setMotionGestureInput
#define DownTrackballInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef DownTrackballInputToGameKeyEventAction_getMotionGestureInput
#define DownTrackballInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef DownTrackballInputToGameKeyEventAction_getSource
#define DownTrackballInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef DownTrackballInputToGameKeyEventAction_setSource
#define DownTrackballInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void DownTrackballInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void DownTrackballInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TRACKBALL_ACTION_DOWNTRACKBALLINPUTTOGAMEKEYEVENTACTION_H
