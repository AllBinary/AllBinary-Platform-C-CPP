#ifndef ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H
#define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H
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
// package org.allbinary.logic.math

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct PrimitiveLongSingleton PrimitiveLongSingleton;
typedef struct MathUtil MathUtil;
typedef struct NullUtil NullUtil;
typedef struct LogUtil LogUtil;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/PrimitiveLongSingleton.h")
#include "org/allbinary/logic/math/PrimitiveLongSingleton.h"
#endif

typedef struct PrimitiveLongUtil PrimitiveLongUtil;
struct PrimitiveLongUtil {
    LogUtil* logUtil;
    int32_t powerOfTen;
    int32_t maxValue;
    int32_t maxDigits;
    uint16_t* charArray;
    int32_t currentTotalDigits;
    PrimitiveLongSingleton* primitiveLongSingleton;
};


PrimitiveLongUtil* PrimitiveLongUtil_new(int32_t powerOfTen, void* unused);

PrimitiveLongUtil* PrimitiveLongUtil_createPowerOfTen(int32_t powerOfTen);

void PrimitiveLongUtil_init(PrimitiveLongUtil* this, int32_t powerOfTen, void* unused);

uint16_t* PrimitiveLongUtil_getCharArray(PrimitiveLongUtil* this, int32_t value);


int32_t PrimitiveLongUtil_getCurrentTotalDigits(PrimitiveLongUtil* this);

int32_t PrimitiveLongUtil_getMaxDigits(PrimitiveLongUtil* this);
#define PrimitiveLongUtil_new2 PrimitiveLongUtil_new
#define PrimitiveLongUtil_init2 PrimitiveLongUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PrimitiveLongUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PrimitiveLongUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PRIMITIVELONGUTIL_H
