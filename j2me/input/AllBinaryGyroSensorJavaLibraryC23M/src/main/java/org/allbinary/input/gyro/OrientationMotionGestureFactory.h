#ifndef ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H
#define ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H
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
// package org.allbinary.input.gyro

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct InputFactory InputFactory;
typedef struct MotionGestureInput MotionGestureInput;
typedef struct NullUtil NullUtil;
#if __has_include("org/allbinary/input/motion/gesture/MotionGestureInput.h")
#include "org/allbinary/input/motion/gesture/MotionGestureInput.h"
#endif

typedef struct OrientationMotionGestureFactory OrientationMotionGestureFactory;
struct OrientationMotionGestureFactory {
    MotionGestureInput* LEFT;
    MotionGestureInput* RIGHT;
    MotionGestureInput* UP;
    MotionGestureInput* DOWN;
    MotionGestureInput* ROLL_LEFT;
    MotionGestureInput* ROLL_RIGHT;
};


OrientationMotionGestureFactory* OrientationMotionGestureFactory_new(void);

OrientationMotionGestureFactory* OrientationMotionGestureFactory_getInstance(void);

void OrientationMotionGestureFactory_init(OrientationMotionGestureFactory* this);
#define OrientationMotionGestureFactory_new0 OrientationMotionGestureFactory_new
#define OrientationMotionGestureFactory_init0 OrientationMotionGestureFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OrientationMotionGestureFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OrientationMotionGestureFactory_register(void);


#endif // ORG_ALLBINARY_INPUT_GYRO_ORIENTATIONMOTIONGESTUREFACTORY_H
