#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H
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
typedef struct MotionGestureRecognizer MotionGestureRecognizer;
#if __has_include("org/allbinary/graphics/GPointCircularPool.h")
#include "org/allbinary/graphics/GPointCircularPool.h"
#endif
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureRecognizer.h")
#include "org/allbinary/input/motion/gesture/MotionGestureRecognizer.h"
#endif
#include "org/allbinary/input/motion/MotionRecognizer.h"

typedef struct GestureOnlyMotionRecognizer GestureOnlyMotionRecognizer;
struct GestureOnlyMotionRecognizer {
    MotionRecognizer base;
    MotionGestureRecognizer* motionGestureRecognizer;
    int32_t id;
};


GestureOnlyMotionRecognizer* GestureOnlyMotionRecognizer_new(void);

void GestureOnlyMotionRecognizer_init(GestureOnlyMotionRecognizer* this);

void GestureOnlyMotionRecognizer_processStartMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void GestureOnlyMotionRecognizer_processEndMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void GestureOnlyMotionRecognizer_processDraggedMotionEvent(GestureOnlyMotionRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
#define GestureOnlyMotionRecognizer_new0 GestureOnlyMotionRecognizer_new
#define GestureOnlyMotionRecognizer_init0 GestureOnlyMotionRecognizer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void GestureOnlyMotionRecognizer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void GestureOnlyMotionRecognizer_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTUREONLYMOTIONRECOGNIZER_H
