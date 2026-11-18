#ifndef ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_H
#define ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_H
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
typedef struct GameKey GameKey;
typedef struct GameKeyFactory GameKeyFactory;
typedef struct PlatformInputMappingFactory PlatformInputMappingFactory;
typedef struct GameKeyEventFactory GameKeyEventFactory;
typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct NullUtil NullUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/game/input/GameKey.h")
#include "org/allbinary/game/input/GameKey.h"
#endif
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"

typedef struct ReleaseTouchInputToGameKeyEventAction ReleaseTouchInputToGameKeyEventAction;
struct ReleaseTouchInputToGameKeyEventAction {
    GameKeyCompleteMotionGestureInputEvent base;
    GameKey* NONE;
};


ReleaseTouchInputToGameKeyEventAction* ReleaseTouchInputToGameKeyEventAction_new(void);

GameKeyCompleteMotionGestureInputEvent* ReleaseTouchInputToGameKeyEventAction_getInstance(void);

void ReleaseTouchInputToGameKeyEventAction_init(ReleaseTouchInputToGameKeyEventAction* this);

void ReleaseTouchInputToGameKeyEventAction_update(ReleaseTouchInputToGameKeyEventAction* this);
#define ReleaseTouchInputToGameKeyEventAction_new0 ReleaseTouchInputToGameKeyEventAction_new
#define ReleaseTouchInputToGameKeyEventAction_init0 ReleaseTouchInputToGameKeyEventAction_init
#ifndef ReleaseTouchInputToGameKeyEventAction_getSourceId
#define ReleaseTouchInputToGameKeyEventAction_getSourceId GameKeyCompleteMotionGestureInputEvent_getSourceId
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_setGameKeyEvent
#define ReleaseTouchInputToGameKeyEventAction_setGameKeyEvent GameKeyCompleteMotionGestureInputEvent_setGameKeyEvent
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_getGameKeyEvent
#define ReleaseTouchInputToGameKeyEventAction_getGameKeyEvent GameKeyCompleteMotionGestureInputEvent_getGameKeyEvent
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_setGameKey
#define ReleaseTouchInputToGameKeyEventAction_setGameKey GameKeyCompleteMotionGestureInputEvent_setGameKey
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_getGameKey
#define ReleaseTouchInputToGameKeyEventAction_getGameKey GameKeyCompleteMotionGestureInputEvent_getGameKey
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_setName
#define ReleaseTouchInputToGameKeyEventAction_setName CompleteMotionGestureInputEvent_setName
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_getName
#define ReleaseTouchInputToGameKeyEventAction_getName CompleteMotionGestureInputEvent_getName
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_setMotionGestureInput
#define ReleaseTouchInputToGameKeyEventAction_setMotionGestureInput CompleteMotionGestureInputEvent_setMotionGestureInput
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_getMotionGestureInput
#define ReleaseTouchInputToGameKeyEventAction_getMotionGestureInput CompleteMotionGestureInputEvent_getMotionGestureInput
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_getSource
#define ReleaseTouchInputToGameKeyEventAction_getSource AllBinaryEventObject_getSource
#endif
#ifndef ReleaseTouchInputToGameKeyEventAction_setSource
#define ReleaseTouchInputToGameKeyEventAction_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ReleaseTouchInputToGameKeyEventAction_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ReleaseTouchInputToGameKeyEventAction_register(void);

#if __has_include("org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h")
#include "org/allbinary/game/input/motion/action/GameKeyCompleteMotionGestureInputEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_TOUCH_ACTION_RELEASETOUCHINPUTTOGAMEKEYEVENTACTION_H
