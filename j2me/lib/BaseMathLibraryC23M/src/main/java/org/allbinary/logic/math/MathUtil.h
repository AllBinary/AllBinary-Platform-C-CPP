#ifndef ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H
#define ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H
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
// #include "jsinterop/annotations/JsType.h"

typedef struct MathUtil MathUtil;
struct MathUtil {
    int32_t ACCURACY;
};


MathUtil* MathUtil_new(void);
void MathUtil_init(MathUtil* this);

MathUtil* MathUtil_getInstance(void);

int32_t MathUtil_getTotalDigits(MathUtil* this, int32_t digits);

int32_t MathUtil_sqrt(MathUtil* this, int32_t value);

double MathUtil_sqrtd(MathUtil* this, int32_t x);

int32_t MathUtil_abs(MathUtil* this, int32_t value);

int64_t MathUtil_abslong(MathUtil* this, int64_t value);

int32_t MathUtil_min(MathUtil* this, int32_t value, int32_t value2);

int32_t MathUtil_max(MathUtil* this, int32_t value, int32_t value2);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MathUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MathUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_MATHUTIL_H
