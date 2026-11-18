#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H
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
typedef struct BaseMotionGestureEventListener BaseMotionGestureEventListener;
typedef struct MotionGestureEvent MotionGestureEvent;
#include "org/allbinary/input/motion/gesture/observer/BaseMotionGestureEventListener.h"

typedef struct MotionGestureEventListener MotionGestureEventListener;
struct MotionGestureEventListener {
    void (*onPressedMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onUpMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDownMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onLeftMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onRightMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalDownRightMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalDownLeftMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalUpRightMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*onDiagonalUpLeftMotionGestureEvent)(void* this, MotionGestureEvent* ev);
    void (*released)(void* this, MotionGestureEvent* ev);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureEventListener_staticInit(void);

static inline void MotionGestureEventListener_onPressedMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onPressedMotionGestureEvent)) java_method_of(this, "onPressedMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onUpMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onUpMotionGestureEvent)) java_method_of(this, "onUpMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onDownMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onDownMotionGestureEvent)) java_method_of(this, "onDownMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onLeftMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onLeftMotionGestureEvent)) java_method_of(this, "onLeftMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onRightMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onRightMotionGestureEvent)) java_method_of(this, "onRightMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onDiagonalDownRightMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onDiagonalDownRightMotionGestureEvent)) java_method_of(this, "onDiagonalDownRightMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onDiagonalDownLeftMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onDiagonalDownLeftMotionGestureEvent)) java_method_of(this, "onDiagonalDownLeftMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onDiagonalUpRightMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onDiagonalUpRightMotionGestureEvent)) java_method_of(this, "onDiagonalUpRightMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_onDiagonalUpLeftMotionGestureEvent(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->onDiagonalUpLeftMotionGestureEvent)) java_method_of(this, "onDiagonalUpLeftMotionGestureEvent"))(this, ev);
}

static inline void MotionGestureEventListener_released(void* this, MotionGestureEvent* ev) {
    ((__typeof__(((MotionGestureEventListener*) nullptr)->released)) java_method_of(this, "released"))(this, ev);
}
#define MotionGestureEventListener_onMotionGestureEvent BaseMotionGestureEventListener_onMotionGestureEvent
#define MotionGestureEventListener_onScrolledMotionGestureEvent BaseMotionGestureEventListener_onScrolledMotionGestureEvent


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENTLISTENER_H
