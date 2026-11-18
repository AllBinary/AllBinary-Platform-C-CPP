#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H
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
typedef struct MotionEventFactory MotionEventFactory;
typedef struct MotionGestureEvent MotionGestureEvent;
typedef struct InputFactory InputFactory;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct TouchMotionGestureFactory TouchMotionGestureFactory;
typedef struct AllBinaryEventCircularPool AllBinaryEventCircularPool;
#if __has_include("org/allbinary/logic/util/event/AllBinaryEventCircularPool.h")
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"
#endif

typedef struct MotionEventCircularPool MotionEventCircularPool;
struct MotionEventCircularPool {
    int32_t MIN;
    AllBinaryEventCircularPool* eventPool;
};


MotionEventCircularPool* MotionEventCircularPool_new(int32_t id);

MotionEventCircularPool* MotionEventCircularPool_createPool(int32_t id);

void MotionEventCircularPool_init(MotionEventCircularPool* this, int32_t id);

MotionGestureEvent* MotionEventCircularPool_getInstance(MotionEventCircularPool* this, MotionGestureInput* motionGestureInput);
#define MotionEventCircularPool_new1 MotionEventCircularPool_new
#define MotionEventCircularPool_init1 MotionEventCircularPool_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MotionEventCircularPool_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MotionEventCircularPool_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_OBSERVER_MOTIONEVENTCIRCULARPOOL_H
