#ifndef ORG_ALLBINARY_MATH_FRAMEUTIL_H
#define ORG_ALLBINARY_MATH_FRAMEUTIL_H
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
// package org.allbinary.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AngleFactory AngleFactory;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"

typedef struct FrameUtil FrameUtil;
struct FrameUtil {
    char unused;
};


FrameUtil* FrameUtil_new(void);

FrameUtil* FrameUtil_getInstance(void);

void FrameUtil_init(FrameUtil* this);

int32_t FrameUtil_getFrameForAngle(FrameUtil* this, int16_t angle, int32_t angleIncrement);

int32_t FrameUtil_getFrameAngle(FrameUtil* this, int32_t frame, int32_t angleIncrement);

int32_t FrameUtil_adjustAngleToFrameAngle(FrameUtil* this, int32_t currentAngle);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void FrameUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void FrameUtil_register(void);


#endif // ORG_ALLBINARY_MATH_FRAMEUTIL_H
