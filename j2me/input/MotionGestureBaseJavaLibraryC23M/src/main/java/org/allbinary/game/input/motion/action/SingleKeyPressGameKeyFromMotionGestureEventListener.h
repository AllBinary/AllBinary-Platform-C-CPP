#ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H
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
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct CompleteMotionGestureInputEventListener CompleteMotionGestureInputEventListener;
typedef struct GameKeyEvent GameKeyEvent;
typedef struct PressGameKeyEventHandler PressGameKeyEventHandler;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
typedef struct CommonStrings CommonStrings;
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListener.h"
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif

typedef struct SingleKeyPressGameKeyFromMotionGestureEventListener SingleKeyPressGameKeyFromMotionGestureEventListener;
struct SingleKeyPressGameKeyFromMotionGestureEventListener {
    CompleteMotionGestureInputEventListener base;
    LogUtil* logUtil;
};


SingleKeyPressGameKeyFromMotionGestureEventListener* SingleKeyPressGameKeyFromMotionGestureEventListener_new(void);
void SingleKeyPressGameKeyFromMotionGestureEventListener_init(SingleKeyPressGameKeyFromMotionGestureEventListener* this);

void SingleKeyPressGameKeyFromMotionGestureEventListener_onEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, AllBinaryEventObject* eventObject);

void SingleKeyPressGameKeyFromMotionGestureEventListener_onCompleteMotionGestureInputEvent(SingleKeyPressGameKeyFromMotionGestureEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SingleKeyPressGameKeyFromMotionGestureEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SingleKeyPressGameKeyFromMotionGestureEventListener_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_SINGLEKEYPRESSGAMEKEYFROMMOTIONGESTUREEVENTLISTENER_H
