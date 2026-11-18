#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_H
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
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif
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

typedef struct ReleaseControlledMotionGestureListener ReleaseControlledMotionGestureListener;
struct ReleaseControlledMotionGestureListener {
    MotionGestureEventListener MotionGestureEventListener_interface;
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    MotionGestureInput* currentMotionGesture;
    bool isMouseGestureOccurring;
    BasicArrayList* motionGestureCollection;
    CompleteMotionGestureListenerInterface* signed_;
};


ReleaseControlledMotionGestureListener* ReleaseControlledMotionGestureListener_new(CompleteMotionGestureListenerInterface* signed_);

void ReleaseControlledMotionGestureListener_init(ReleaseControlledMotionGestureListener* this, CompleteMotionGestureListenerInterface* signed_);

void ReleaseControlledMotionGestureListener_onEvent(ReleaseControlledMotionGestureListener* this, AllBinaryEventObject* eventObject);

void ReleaseControlledMotionGestureListener_onUpMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onDownMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onDiagonalDownRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onDiagonalDownLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onDiagonalUpRightMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onDiagonalUpLeftMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onPressedMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onScrolledMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* motionGestureEvent);

void ReleaseControlledMotionGestureListener_released(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);

void ReleaseControlledMotionGestureListener_onMotionGestureEvent(ReleaseControlledMotionGestureListener* this, MotionGestureEvent* ev);
#define ReleaseControlledMotionGestureListener_new1 ReleaseControlledMotionGestureListener_new
#define ReleaseControlledMotionGestureListener_init1 ReleaseControlledMotionGestureListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ReleaseControlledMotionGestureListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ReleaseControlledMotionGestureListener_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RELEASECONTROLLEDMOTIONGESTURELISTENER_H
