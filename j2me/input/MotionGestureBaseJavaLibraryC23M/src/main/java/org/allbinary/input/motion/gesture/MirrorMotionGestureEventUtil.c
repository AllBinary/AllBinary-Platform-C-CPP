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
#include "org/allbinary/graphics/GPoint.h"
#include "org/allbinary/graphics/PointFactory.h"
#include "org/allbinary/input/motion/gesture/observer/MotionEventCircularPool.h"
#include "org/allbinary/input/motion/gesture/observer/MotionGestureEvent.h"

typedef struct MirrorMotionGestureEventUtil MirrorMotionGestureEventUtil;
struct MirrorMotionGestureEventUtil {
    MotionEventCircularPool* motionEventCircularPool;
};

static MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_instance;

MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_new(void);

void MirrorMotionGestureEventUtil_init(MirrorMotionGestureEventUtil* this);
MotionGestureEvent* MirrorMotionGestureEventUtil_mirrorVerticle(MirrorMotionGestureEventUtil* this, MotionGestureEvent* motionGestureEvent, int32_t halfWidth);
int32_t MirrorMotionGestureEventUtil_getNewX(MirrorMotionGestureEventUtil* this, int32_t x, int32_t halfWidth);
MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void MirrorMotionGestureEventUtil_staticInit(void) {
    MirrorMotionGestureEventUtil_instance = MirrorMotionGestureEventUtil_new();
}

static void MirrorMotionGestureEventUtil_initFields(MirrorMotionGestureEventUtil* this) {
    
}


void MirrorMotionGestureEventUtil_init(MirrorMotionGestureEventUtil* this) {
    MirrorMotionGestureEventUtil_initFields(this);
        this->motionEventCircularPool = MotionEventCircularPool_createPool(Integer_MAX_VALUE);
}

MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_new(void) {
    MirrorMotionGestureEventUtil* this = calloc(1, sizeof(MirrorMotionGestureEventUtil));
    MirrorMotionGestureEventUtil_init(this);
    return this;
}


// throws Exception
MotionGestureEvent* MirrorMotionGestureEventUtil_mirrorVerticle(MirrorMotionGestureEventUtil* this, MotionGestureEvent* motionGestureEvent, int32_t halfWidth) {
        MotionGestureEvent* event = MotionEventCircularPool_getInstance(this->motionEventCircularPool, MotionGestureEvent_getMotionGesture(motionGestureEvent));
        int32_t previousNewX = MirrorMotionGestureEventUtil_getNewX(this, JAVA_CALL(MotionGestureEvent_getPreviousPoint(motionGestureEvent), getX), halfWidth);
        int32_t currentNewX = MirrorMotionGestureEventUtil_getNewX(this, JAVA_CALL(MotionGestureEvent_getCurrentPoint(motionGestureEvent), getX), halfWidth);
        PointFactory* pointFactory = PointFactory_getInstance();
        GPoint* mirroredPreviousPoint = PointFactory_createXY(pointFactory, previousNewX, JAVA_CALL(MotionGestureEvent_getPreviousPoint(motionGestureEvent), getY));
        GPoint* mirroredCurrentPoint = PointFactory_createXY(pointFactory, currentNewX, JAVA_CALL(MotionGestureEvent_getCurrentPoint(motionGestureEvent), getY));
        MotionGestureEvent_setPreviousPoint(event, mirroredPreviousPoint);
        MotionGestureEvent_setCurrentPoint(event, mirroredCurrentPoint);
        return event;
}


int32_t MirrorMotionGestureEventUtil_getNewX(MirrorMotionGestureEventUtil* this, int32_t x, int32_t halfWidth) {
        int32_t newX = 0;
        if (x > halfWidth) {
            newX = halfWidth - (x - halfWidth);
        } else {
            newX = halfWidth + (halfWidth - x);
        }
        return newX;
}


MirrorMotionGestureEventUtil* MirrorMotionGestureEventUtil_getInstance(void) {
        return MirrorMotionGestureEventUtil_instance;
}

