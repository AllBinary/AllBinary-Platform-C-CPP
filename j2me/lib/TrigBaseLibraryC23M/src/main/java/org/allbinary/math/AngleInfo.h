#ifndef ORG_ALLBINARY_MATH_ANGLEINFO_H
#define ORG_ALLBINARY_MATH_ANGLEINFO_H
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
typedef struct AngleIncrementInfo AngleIncrementInfo;
typedef struct AngleIncrementInfoFactory AngleIncrementInfoFactory;
typedef struct FrameUtil FrameUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/FrameUtil.h")
#include "org/allbinary/math/FrameUtil.h"
#endif

typedef struct AngleInfo AngleInfo;
struct AngleInfo {
    AngleIncrementInfo* angleIncrementInfo;
    int16_t angle;
    FrameUtil* frameUtil;
};


AngleInfo* AngleInfo_new(AngleIncrementInfo* angleIncrementInfo);

AngleInfo* AngleInfo_getInstance(int16_t angleIncrement);

void AngleInfo_init(AngleInfo* this, AngleIncrementInfo* angleIncrementInfo);

void AngleInfo_adjustAngle(AngleInfo* this, int32_t frame);

int16_t AngleInfo_getAngle(AngleInfo* this);

void AngleInfo_setAngle(AngleInfo* this, int16_t angle);

AngleIncrementInfo* AngleInfo_getAngleIncrementInfo(AngleInfo* this);

const char* AngleInfo_toString(AngleInfo* this);
#define AngleInfo_new1 AngleInfo_new
#define AngleInfo_init1 AngleInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AngleInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AngleInfo_register(void);


#endif // ORG_ALLBINARY_MATH_ANGLEINFO_H
