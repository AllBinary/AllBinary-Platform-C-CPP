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
#include "org/allbinary/game/input/InputFactory.h"
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#include "org/allbinary/input/motion/gesture/TouchMotionGestureFactory.h"
#include "org/allbinary/logic/util/event/AllBinaryEventCircularPool.h"

typedef struct MotionEventCircularPool MotionEventCircularPool;
struct MotionEventCircularPool {
    int32_t MIN;
    AllBinaryEventCircularPool* eventPool;
};


MotionEventCircularPool* MotionEventCircularPool_new(int32_t id);
MotionEventCircularPool* MotionEventCircularPool_createPool(int32_t id);

void MotionEventCircularPool_init(MotionEventCircularPool* this, int32_t id);
MotionGestureEvent* MotionEventCircularPool_getInstance(MotionEventCircularPool* this, MotionGestureInput* motionGestureInput);

static void MotionEventCircularPool_initFields(MotionEventCircularPool* this) {
    this->MIN = JAVA_CALL(TouchMotionGestureFactory_getInstance()->LAST_MOTION, getId);
    this->eventPool = AllBinaryEventCircularPool_new((InputFactory_getInstance()->MAX - 1) - this->MIN);
}


MotionEventCircularPool* MotionEventCircularPool_createPool(int32_t id) {
        return MotionEventCircularPool_new(id);
}


void MotionEventCircularPool_init(MotionEventCircularPool* this, int32_t id) {
    MotionEventCircularPool_initFields(this);
        AllBinaryEventCircularPool_initAllBinaryEventCircularPool(this->eventPool, MotionEventFactory_new(this->eventPool, id));
}

MotionEventCircularPool* MotionEventCircularPool_new(int32_t id) {
    MotionEventCircularPool* this = calloc(1, sizeof(MotionEventCircularPool));
    MotionEventCircularPool_init(this, id);
    return this;
}


// throws Exception
// synchronized
MotionGestureEvent* MotionEventCircularPool_getInstance(MotionEventCircularPool* this, MotionGestureInput* motionGestureInput) {
        return ((MotionGestureEvent*) AllBinaryEventCircularPool_getInstance(this->eventPool, MotionGestureInput_getId(motionGestureInput) - this->MIN));
}

