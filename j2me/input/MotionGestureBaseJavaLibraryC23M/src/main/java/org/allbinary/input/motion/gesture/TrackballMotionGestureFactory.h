#ifndef ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H
#define ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H
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
typedef struct MotionGestureInput MotionGestureInput;
typedef struct InputFactory InputFactory;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif

typedef struct TrackballMotionGestureFactory TrackballMotionGestureFactory;
struct TrackballMotionGestureFactory {
    MotionGestureInput* LEFT;
    MotionGestureInput* RIGHT;
    MotionGestureInput* UP;
    MotionGestureInput* DOWN;
};


TrackballMotionGestureFactory* TrackballMotionGestureFactory_new(void);

TrackballMotionGestureFactory* TrackballMotionGestureFactory_getInstance(void);

void TrackballMotionGestureFactory_init(TrackballMotionGestureFactory* this);
#define TrackballMotionGestureFactory_new0 TrackballMotionGestureFactory_new
#define TrackballMotionGestureFactory_init0 TrackballMotionGestureFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TrackballMotionGestureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TrackballMotionGestureFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_GESTURE_TRACKBALLMOTIONGESTUREFACTORY_H
