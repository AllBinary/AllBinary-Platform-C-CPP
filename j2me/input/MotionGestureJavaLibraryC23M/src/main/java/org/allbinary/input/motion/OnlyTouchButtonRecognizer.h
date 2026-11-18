#ifndef ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H
#define ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H
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
typedef struct TouchButtonRecognizer TouchButtonRecognizer;
#if __has_include("org/allbinary/input/motion/button/TouchButtonRecognizer.h")
#include "org/allbinary/input/motion/button/TouchButtonRecognizer.h"
#endif
#include "org/allbinary/input/motion/MotionRecognizer.h"

typedef struct OnlyTouchButtonRecognizer OnlyTouchButtonRecognizer;
struct OnlyTouchButtonRecognizer {
    MotionRecognizer base;
    TouchButtonRecognizer* touchButtonRecognizer;
    bool touchButtonProcessing;
};


OnlyTouchButtonRecognizer* OnlyTouchButtonRecognizer_new(void);

void OnlyTouchButtonRecognizer_init(OnlyTouchButtonRecognizer* this);

void OnlyTouchButtonRecognizer_processStartMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void OnlyTouchButtonRecognizer_processEndMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);

void OnlyTouchButtonRecognizer_processDraggedMotionEvent(OnlyTouchButtonRecognizer* this, int32_t x, int32_t y, int32_t deviceId, int32_t modifiers);
#define OnlyTouchButtonRecognizer_new0 OnlyTouchButtonRecognizer_new
#define OnlyTouchButtonRecognizer_init0 OnlyTouchButtonRecognizer_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OnlyTouchButtonRecognizer_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OnlyTouchButtonRecognizer_register(void);


#endif // ORG_ALLBINARY_INPUT_MOTION_ONLYTOUCHBUTTONRECOGNIZER_H
