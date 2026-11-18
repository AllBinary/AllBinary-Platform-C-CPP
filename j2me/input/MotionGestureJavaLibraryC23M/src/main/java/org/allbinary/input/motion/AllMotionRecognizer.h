#ifndef ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
#define ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
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
typedef struct MotionRecognizer MotionRecognizer;
typedef struct CustomGPoint CustomGPoint;
typedef struct GPointCircularPool GPointCircularPool;
typedef struct TouchButtonRecognizer TouchButtonRecognizer;
typedef struct MotionGestureRecognizer MotionGestureRecognizer;
typedef struct LogUtil LogUtil;
#if __has_include("org/allbinary/graphics/GPointCircularPool.h")
#include "org/allbinary/graphics/GPointCircularPool.h"
#endif
#if __has_include("org/allbinary/input/motion/button/TouchButtonRecognizer.h")
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
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


AllMotionRecognizer* AllMotionRecognizer_new(void);

void AllMotionRecognizer_init(AllMotionRecognizer* this);

void AllMotionRecognizer_processStartMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void AllMotionRecognizer_processEndMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void AllMotionRecognizer_processDraggedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void AllMotionRecognizer_processMovedMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void AllMotionRecognizer_processScrolledMotionEvent(AllMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

MotionGestureRecognizer* AllMotionRecognizer_getMotionGestureRecognizer(AllMotionRecognizer* this);
#define AllMotionRecognizer_new0 AllMotionRecognizer_new
#define AllMotionRecognizer_init0 AllMotionRecognizer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllMotionRecognizer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllMotionRecognizer_register(void);

#if __has_include("org/allbinary/input/motion/gesture/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#endif

#endif // ORG_ALLBINARY_INPUT_MOTION_ALLMOTIONRECOGNIZER_H
