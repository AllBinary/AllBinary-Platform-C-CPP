#ifndef ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H
#define ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H
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
typedef struct FrameUtil FrameUtil;
typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
typedef struct StringMaker StringMaker;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsProperty.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
#include "java/lang/Integer.h"
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif

typedef struct AngleIncrementInfo AngleIncrementInfo;
struct AngleIncrementInfo {
    int16_t angleIncrement;
    int32_t DOWN_FRAME;
    int32_t UP_FRAME;
    int32_t LEFT_FRAME;
    int32_t RIGHT_FRAME;
    FrameUtil* frameUtil;
};


AngleIncrementInfo* AngleIncrementInfo_new(int16_t angleIncrement);

void AngleIncrementInfo_init(AngleIncrementInfo* this, int16_t angleIncrement);

int32_t AngleIncrementInfo_getFrameAngle(AngleIncrementInfo* this, int32_t frame);

int16_t AngleIncrementInfo_getAngleIncrement(AngleIncrementInfo* this);

const char* AngleIncrementInfo_toString(AngleIncrementInfo* this);

int32_t AngleIncrementInfo_getClosestGeneralDirection(AngleIncrementInfo* this, int16_t angle);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AngleIncrementInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AngleIncrementInfo_register(void);


#endif // ORG_ALLBINARY_MATH_ANGLEINCREMENTINFO_H
