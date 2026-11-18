#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H
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
typedef struct GPoint GPoint;
typedef struct PointFactory PointFactory;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct TsUtil TsUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct AllBinaryEventObject AllBinaryEventObject;
typedef struct CommonLabels CommonLabels;
#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif
#include "org/allbinary/logic/util/event/AllBinaryEventObject.h"
#if __has_include("org/allbinary/string/CommonLabels.h")
#include "org/allbinary/string/CommonLabels.h"
#endif

typedef struct MotionGestureEvent MotionGestureEvent;
struct MotionGestureEvent {
    AllBinaryEventObject base;
    MotionGestureInput* motionGesture;
    int32_t id;
    GPoint* previousPoint;
    GPoint* currentPoint;
    CommonLabels* commonLabels;
};


MotionGestureEvent* MotionGestureEvent_new(void* source, int32_t id, MotionGestureInput* motionGesture);

void MotionGestureEvent_init(MotionGestureEvent* this, void* source, int32_t id, MotionGestureInput* motionGesture);

MotionGestureInput* MotionGestureEvent_getMotionGesture(MotionGestureEvent* this);

void MotionGestureEvent_setMotionGesture(MotionGestureEvent* this, MotionGestureInput* motionGesture);

GPoint* MotionGestureEvent_getPreviousPoint(MotionGestureEvent* this);

void MotionGestureEvent_setPreviousPoint(MotionGestureEvent* this, GPoint* previousPoint);

GPoint* MotionGestureEvent_getCurrentPoint(MotionGestureEvent* this);

void MotionGestureEvent_setCurrentPoint(MotionGestureEvent* this, GPoint* currentPoint);

const char* MotionGestureEvent_toString(MotionGestureEvent* this);

int32_t MotionGestureEvent_getId(MotionGestureEvent* this);
#define MotionGestureEvent_new3 MotionGestureEvent_new
#define MotionGestureEvent_init3 MotionGestureEvent_init
#ifndef MotionGestureEvent_getSource
#define MotionGestureEvent_getSource AllBinaryEventObject_getSource
#endif
#ifndef MotionGestureEvent_setSource
#define MotionGestureEvent_setSource AllBinaryEventObject_setSource
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionGestureEvent_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionGestureEvent_register(void);

#if __has_include("org/allbinary/graphics/GPoint.h")
#include "org/allbinary/graphics/GPoint.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONGESTUREEVENT_H
