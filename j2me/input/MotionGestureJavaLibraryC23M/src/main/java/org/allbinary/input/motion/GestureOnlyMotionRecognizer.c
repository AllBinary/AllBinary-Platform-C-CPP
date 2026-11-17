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
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#include "org/allbinary/input/motion/MotionRecognizer.h"

typedef struct GestureOnlyMotionRecognizer GestureOnlyMotionRecognizer;
struct GestureOnlyMotionRecognizer {
    MotionRecognizer base;
    MotionGestureRecognizer* motionGestureRecognizer;
    int32_t id;
};

static int32_t GestureOnlyMotionRecognizer_index = 0;
static GPointCircularPool* GestureOnlyMotionRecognizer_pointCircularPool;

GestureOnlyMotionRecognizer* GestureOnlyMotionRecognizer_new(void);

void GestureOnlyMotionRecognizer_init(GestureOnlyMotionRecognizer* this);
void GestureOnlyMotionRecognizer_processStartMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void GestureOnlyMotionRecognizer_processEndMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
void GestureOnlyMotionRecognizer_processDraggedMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

// Static fields with runtime initializers: call this once at startup
void GestureOnlyMotionRecognizer_staticInit(void) {
    GestureOnlyMotionRecognizer_pointCircularPool = GPointCircularPool_new(40);
}

static void GestureOnlyMotionRecognizer_initFields(GestureOnlyMotionRecognizer* this) {
    
    
}


void GestureOnlyMotionRecognizer_init(GestureOnlyMotionRecognizer* this) {
    MotionRecognizer_init(&this->base);
    GestureOnlyMotionRecognizer_initFields(this);
        this->id = GestureOnlyMotionRecognizer_index++;
        this->motionGestureRecognizer = MotionGestureRecognizer_new(this->id);
}

GestureOnlyMotionRecognizer* GestureOnlyMotionRecognizer_new(void) {
    GestureOnlyMotionRecognizer* this = calloc(1, sizeof(GestureOnlyMotionRecognizer));
    GestureOnlyMotionRecognizer_init(this);
    return this;
}


// throws Exception
void GestureOnlyMotionRecognizer_processStartMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(GestureOnlyMotionRecognizer_pointCircularPool, getNextInstance));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processPressedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}


// throws Exception
void GestureOnlyMotionRecognizer_processEndMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(GestureOnlyMotionRecognizer_pointCircularPool, getNextInstance));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processReleasedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}


// throws Exception
void GestureOnlyMotionRecognizer_processDraggedMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers) {
        CustomGPoint* point = ((CustomGPoint*) JAVA_CALL(GestureOnlyMotionRecognizer_pointCircularPool, getNextInstance));
        CustomGPoint_setX(point, x);
        CustomGPoint_setY(point, y);
        MotionGestureRecognizer_processDraggedMotionEvent(this->motionGestureRecognizer, point, deviceId, modifiers);
}

