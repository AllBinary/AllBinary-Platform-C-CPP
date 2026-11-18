#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RESOLVECOMPLETEMOTIONGESTURELISTENER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RESOLVECOMPLETEMOTIONGESTURELISTENER_H
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
typedef struct CompleteMotionGestureListenerInterface CompleteMotionGestureListenerInterface;
typedef struct CompleteMotionGestureInputEventHandler CompleteMotionGestureInputEventHandler;
typedef struct GameKeyCompleteMotionGestureInputEvent GameKeyCompleteMotionGestureInputEvent;
typedef struct GameKeyFromMotionGestureEventListener GameKeyFromMotionGestureEventListener;
typedef struct MotionGestureToMotionGestureActionAssociation MotionGestureToMotionGestureActionAssociation;
typedef struct MotionGestureConfiguration MotionGestureConfiguration;
typedef struct MotionGestureConfigurationFactory MotionGestureConfigurationFactory;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
typedef struct BasicArrayList BasicArrayList;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/input/motion/gesture/observer/CompleteMotionGestureListenerInterface.h"

typedef struct ResolveCompleteMotionGestureListener ResolveCompleteMotionGestureListener;
struct ResolveCompleteMotionGestureListener {
    CompleteMotionGestureListenerInterface CompleteMotionGestureListenerInterface_interface;
    LogUtil* logUtil;
};


ResolveCompleteMotionGestureListener* ResolveCompleteMotionGestureListener_new(void);

void ResolveCompleteMotionGestureListener_init(ResolveCompleteMotionGestureListener* this);

void ResolveCompleteMotionGestureListener_onMotionGestureCompleted(ResolveCompleteMotionGestureListener* this, BasicArrayList* list);
#define ResolveCompleteMotionGestureListener_new0 ResolveCompleteMotionGestureListener_new
#define ResolveCompleteMotionGestureListener_init0 ResolveCompleteMotionGestureListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ResolveCompleteMotionGestureListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ResolveCompleteMotionGestureListener_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_RESOLVECOMPLETEMOTIONGESTURELISTENER_H
