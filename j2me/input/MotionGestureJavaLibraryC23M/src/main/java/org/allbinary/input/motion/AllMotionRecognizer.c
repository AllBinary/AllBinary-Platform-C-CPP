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
// package org.allbinary.input.motion

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/graphics/CustomGPoint.h"
#include "org/allbinary/graphics/GPointCircularPool.h"
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"

typedef struct AllMotionRecognizer AllMotionRecognizer;
struct AllMotionRecognizer {
    MotionRecognizer base;
    LogUtil* logUtil;
    MotionGestureRecognizer* motionGestureRecognizer;
    bool touchButtonProcessing;
    TouchButtonRecognizer* touchButtonRecognizer;
    int32_t id;
    int32_t lastX;
    int32_t lastY;
};

static int32_t AllMotionRecognizer_index = 0;
static GPointCircularPool* AllMotionRecognizer_pointCircularPool;

AllMotionRecognizer* AllMotionRecognizer_new(void);

void AllMotionRecognizer_init(AllMotionRecognizer* this);
void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
MotionGestureRecognizer* AllMotionRecognizer_getMotionGestureRecognizer(AllMotionRecognizer* this);

// Static fields with runtime initializers: call this once at startup
void AllMotionRecognizer_staticInit(void) {
    AllMotionRecognizer_pointCircularPool = GPointCircularPool_new(40);
}

static void AllMotionRecognizer_initFields(AllMotionRecognizer* this) {
    this->logUtil = LogUtil_getInstance();
    
    this->touchButtonProcessing = false;
    
    
    this->lastX = 0;
    this->lastY = 0;
}


void AllMotionRecognizer_init(AllMotionRecognizer* this) {
    MotionRecognizer_init(&this->base);
    AllMotionRecognizer_initFields(this);
        this->id = AllMotionRecognizer_index++;
        this->motionGestureRecognizer = MotionGestureRecognizer_new(this->id);
        this->touchButtonRecognizer = TouchButtonRecognizer_new();
}

AllMotionRecognizer* AllMotionRecognizer_new(void) {
    AllMotionRecognizer* this = calloc(1, sizeof(AllMotionRecognizer));
    AllMotionRecognizer_init(this);
    return this;
}


// throws Exception
void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
            this->touchButtonProcessing = true;
        }
        if (!this->touchButtonProcessing) {
            CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(AllMotionRecognizer_pointCircularPool, getNextInstance));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processPressedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
}


// throws Exception
void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (TouchButtonRecognizer_releaseTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId)) {
        }
        if (!this->touchButtonProcessing) {
            CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(AllMotionRecognizer_pointCircularPool, getNextInstance));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processReleasedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
        if (this->touchButtonProcessing) {
            this->touchButtonProcessing = false;
        }
}


// throws Exception
void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (this->touchButtonProcessing) {
            TouchButtonRecognizer_pressTouchButtonInput(this->touchButtonRecognizer, x, y, deviceId);
        }
        if (!this->touchButtonProcessing) {
            CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(AllMotionRecognizer_pointCircularPool, getNextInstance));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processDraggedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
}


// throws Exception
void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        if (x != this->lastX || y != this->lastY) {
            this->lastX = x;
            this->lastY = y;
            CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(AllMotionRecognizer_pointCircularPool, getNextInstance));
            CustomGPoint_setX(point, x);
            CustomGPoint_setY(point, y);
            MotionGestureRecognizer_processMovedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
        }
}


// throws Exception
void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(AllMotionRecognizer_pointCircularPool, getNextInstance));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processScrolledMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}


MotionGestureRecognizer* AllMotionRecognizer_getMotionGestureRecognizer(AllMotionRecognizer* this) {
        return this->motionGestureRecognizer;
}

