#ifndef ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H
#define ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H
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
typedef struct PositionStrings PositionStrings;
typedef struct Angle Angle;
typedef struct PreLogUtil PreLogUtil;
typedef struct MathUtil MathUtil;
typedef struct StringMaker StringMaker;
typedef struct CommonLabels CommonLabels;
typedef struct CommonSeps CommonSeps;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"
#include "java/lang/Integer.h"

typedef struct NoDecimalTrigTable NoDecimalTrigTable;
struct NoDecimalTrigTable {
    MathUtil* mathUtil;
    int64_t* noDecimalSin;
    int64_t* noDecimalCos;
    int64_t* noDecimalTan;
    int32_t SCALE;
};


NoDecimalTrigTable* NoDecimalTrigTable_new(void);

NoDecimalTrigTable* NoDecimalTrigTable_getInstance(void);

void NoDecimalTrigTable_init(NoDecimalTrigTable* this);

int64_t NoDecimalTrigTable_sin(NoDecimalTrigTable* this, int32_t angle);

int64_t NoDecimalTrigTable_cos(NoDecimalTrigTable* this, int32_t angle);

int64_t NoDecimalTrigTable_tan(NoDecimalTrigTable* this, int32_t angle);

int16_t NoDecimalTrigTable_antiTan(NoDecimalTrigTable* this, int32_t dx, int32_t dy);

int16_t NoDecimalTrigTable_antiTanDebug(NoDecimalTrigTable* this, int32_t screenX, int32_t screenY, int32_t targetX, int32_t targetY);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoDecimalTrigTable_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoDecimalTrigTable_register(void);


#endif // ORG_ALLBINARY_MATH_NODECIMALTRIGTABLE_H
