#ifndef ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_H
#define ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_H
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
// package org.allbinary.logic.math.vector

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NoDecimalTrigTable NoDecimalTrigTable;
#if __has_include("org/allbinary/math/NoDecimalTrigTable.h")
#include "org/allbinary/math/NoDecimalTrigTable.h"
#endif

typedef struct AxisMathVectorUtil AxisMathVectorUtil;
struct AxisMathVectorUtil {
    NoDecimalTrigTable* noDecimalTrigTable;
};


AxisMathVectorUtil* AxisMathVectorUtil_new(void);
void AxisMathVectorUtil_init(AxisMathVectorUtil* this);

AxisMathVectorUtil* AxisMathVectorUtil_getInstance(void);

int64_t AxisMathVectorUtil_calculateX(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle);

int64_t AxisMathVectorUtil_calculateY(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle);

int64_t AxisMathVectorUtil_calculateZ(AxisMathVectorUtil* this, int64_t magnitude, int32_t otherAngle);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AxisMathVectorUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AxisMathVectorUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_VECTOR_AXISMATHVECTORUTIL_H
