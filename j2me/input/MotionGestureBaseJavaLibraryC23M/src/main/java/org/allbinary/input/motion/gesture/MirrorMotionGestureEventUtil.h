#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H
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
// package org.allbinary.input.motion.gesture

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
typedef struct MotionEventCircularPool MotionEventCircularPool;
typedef struct MotionGestureEvent MotionGestureEvent;
#if __has_include("org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h")
#include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
#endif
#include "java/lang/Integer.h"

typedef struct MirrorMotionGestureEventUtil MirrorMotionGestureEventUtil;
struct MirrorMotionGestureEventUtil {
    MotionEventCircularPool* motionEventCircularPool;
};


MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_new(void);

void MirrorMotionGestureEventUtil_init(MirrorMotionGestureEventUtil* this);

MotionGestureEvent* MirrorMotionGestureEventUtil_mirrorVerticle(MirrorMotionGestureEventUtil* this, MotionGestureEvent* motionGestureEvent, int32_t halfWidth);

int32_t MirrorMotionGestureEventUtil_getNewX(MirrorMotionGestureEventUtil* this, int32_t x, int32_t halfWidth);

MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_getInstance(void);
#define MirrorMotionGestureEventUtil_new0 MirrorMotionGestureEventUtil_new
#define MirrorMotionGestureEventUtil_init0 MirrorMotionGestureEventUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MirrorMotionGestureEventUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MirrorMotionGestureEventUtil_register(void);

#if __has_include("org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h")
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_MIRRORMOTIONGESTUREEVENTUTIL_H
