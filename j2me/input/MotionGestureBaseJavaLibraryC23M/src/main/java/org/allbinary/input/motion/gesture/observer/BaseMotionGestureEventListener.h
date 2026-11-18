#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASEMOTIONGESTUREEVENTLISTENER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASEMOTIONGESTUREEVENTLISTENER_H
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
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct EventListenerInterface EventListenerInterface;
#include "org/allbinary/logic/util/event/EventListenerInterface.h"

typedef struct BaseMotionGestureEventListener BaseMotionGestureEventListener;
struct BaseMotionGestureEventListener {
    void (*onMotionGestureEvent)(void* this, MotionGestureEvent* motionGestureEvent);
    void (*onScrolledMotionGestureEvent)(void* this, MotionGestureEvent* motionGestureEvent);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseMotionGestureEventListener_staticInit(void);

static inline void BaseMotionGestureEventListener_onMotionGestureEvent(void* this, MotionGestureEvent* motionGestureEvent) {
    ((__typeof__(((BaseMotionGestureEventListener*) nullptr)->onMotionGestureEvent)) java_method_of(this, "onMotionGestureEvent"))(this, motionGestureEvent);
}

static inline void BaseMotionGestureEventListener_onScrolledMotionGestureEvent(void* this, MotionGestureEvent* motionGestureEvent) {
    ((__typeof__(((BaseMotionGestureEventListener*) nullptr)->onScrolledMotionGestureEvent)) java_method_of(this, "onScrolledMotionGestureEvent"))(this, motionGestureEvent);
}
#define BaseMotionGestureEventListener_onEvent EventListenerInterface_onEvent


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_BASEMOTIONGESTUREEVENTLISTENER_H
