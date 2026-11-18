#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H
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
// package org.allbinary.input.motion.gesture.observer

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct MotionGestureEventListener MotionGestureEventListener;
typedef struct CompleteMotionGestureListenerInterface CompleteMotionGestureListenerInterface;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/string/CommonStrings.h")
#include "org/allbinary/string/CommonStrings.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEventListener.h"
#if __has_include("org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h")
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"
#endif

typedef struct GameMotionGestureListener GameMotionGestureListener;
struct GameMotionGestureListener {
    MotionGestureEventListener MotionGestureEventListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    BasicArrayList* motionGestureCollection;
    BasicArrayList* touchGestureCollection;
    CompleteMotionGestureListenerInterface* signed_;
};


GameMotionGestureListener* GameMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_);

void GameMotionGestureListener_init(GameMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_);

void GameMotionGestureListener_onEvent(GameMotionGestureListener* this, AllBinaryEventObject* eventObject);

void GameMotionGestureListener_onUpMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onDownMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onDiagonalDownRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onDiagonalDownLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onDiagonalUpRightMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onDiagonalUpLeftMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onPressedMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_released(GameMotionGestureListener* this, MotionGestureEvent* ev);

void GameMotionGestureListener_onScrolledMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* motionGestureEvent);

void GameMotionGestureListener_onMotionGestureEvent(GameMotionGestureListener* this, MotionGestureEvent* ev);
#define GameMotionGestureListener_new1 GameMotionGestureListener_new
#define GameMotionGestureListener_init1 GameMotionGestureListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GameMotionGestureListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GameMotionGestureListener_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_GAMEMOTIONGESTURELISTENER_H
