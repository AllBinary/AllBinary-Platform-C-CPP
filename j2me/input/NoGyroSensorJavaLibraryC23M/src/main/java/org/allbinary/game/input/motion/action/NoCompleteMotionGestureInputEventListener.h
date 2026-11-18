#ifndef ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
#define ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
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
typedef struct CompleteMotionGestureInputEvent CompleteMotionGestureInputEvent;
typedef struct CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct EventStrings EventStrings;
#include "org/allbinary/game/input/CompleteMotionGestureInputEventListenerInterface.h"

typedef struct NoCompleteMotionGestureInputEventListener NoCompleteMotionGestureInputEventListener;
struct NoCompleteMotionGestureInputEventListener {
    CompleteMotionGestureInputEventListenerInterface CompleteMotionGestureInputEventListenerInterface_interface;
};


NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_new(void);

void NoCompleteMotionGestureInputEventListener_init(NoCompleteMotionGestureInputEventListener* this);

void NoCompleteMotionGestureInputEventListener_onEvent(NoCompleteMotionGestureInputEventListener* this, AllBinaryEventObject* eventObject);

void NoCompleteMotionGestureInputEventListener_onCompleteMotionGestureInputEvent(NoCompleteMotionGestureInputEventListener* this, CompleteMotionGestureInputEvent* completeMotionGestureInputEvent);

NoCompleteMotionGestureInputEventListener* NoCompleteMotionGestureInputEventListener_getInstance(void);
#define NoCompleteMotionGestureInputEventListener_new0 NoCompleteMotionGestureInputEventListener_new
#define NoCompleteMotionGestureInputEventListener_init0 NoCompleteMotionGestureInputEventListener_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoCompleteMotionGestureInputEventListener_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoCompleteMotionGestureInputEventListener_register(void);


#endif // ORG_ALLBINARY_GAME_INPUT_MOTION_ACTION_NOCOMPLETEMOTIONGESTUREINPUTEVENTLISTENER_H
