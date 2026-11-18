#ifndef ORG_ALLBINARY_INPUT_MOTION_GYRO_ACTION_UPORIENTATIONINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_GYRO_ACTION_UPORIENTATIONINPUTTOGAMEKEYEVENTACTION_H
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
// package org.allbinary.input.motion.gyro.action

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
typedef struct OrientationMotionGestureFactory OrientationMotionGestureFactory;
typedef struct NullUtil NullUtil;
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"

typedef struct UpOrientationInputToGameKeyEventAction UpOrientationInputToGameKeyEventAction;
struct UpOrientationInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
};


UpOrientationInputToGameKeyEventAction* UpOrientationInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* UpOrientationInputToGameKeyEventAction_getInstance(void);

void UpOrientationInputToGameKeyEventAction_init(UpOrientationInputToGameKeyEventAction* this);
#define UpOrientationInputToGameKeyEventAction_new0 UpOrientationInputToGameKeyEventAction_new
#define UpOrientationInputToGameKeyEventAction_init0 UpOrientationInputToGameKeyEventAction_init
#ifndef UpOrientationInputToGameKeyEventAction_getSourceId
#define UpOrientationInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef UpOrientationInputToGameKeyEventAction_update
#define UpOrientationInputToGameKeyEventAction_update GameKeyCompleteMotionGestureInputEvent_update
#endif
#ifndef UpOrientationInputToGameKeyEventAction_setGameKeyEvent
#define UpOrientationInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef UpOrientationInputToGameKeyEventAction_getGameKeyEvent
#define UpOrientationInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef UpOrientationInputToGameKeyEventAction_setGameKey
#define UpOrientationInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef UpOrientationInputToGameKeyEventAction_getGameKey
#define UpOrientationInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef UpOrientationInputToGameKeyEventAction_setName
#define UpOrientationInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef UpOrientationInputToGameKeyEventAction_getName
#define UpOrientationInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef UpOrientationInputToGameKeyEventAction_setMotionGestureInput
#define UpOrientationInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef UpOrientationInputToGameKeyEventAction_getMotionGestureInput
#define UpOrientationInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef UpOrientationInputToGameKeyEventAction_getSource
#define UpOrientationInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef UpOrientationInputToGameKeyEventAction_setSource
#define UpOrientationInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void UpOrientationInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void UpOrientationInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GYRO_ACTION_UPORIENTATIONINPUTTOGAMEKEYEVENTACTION_H
