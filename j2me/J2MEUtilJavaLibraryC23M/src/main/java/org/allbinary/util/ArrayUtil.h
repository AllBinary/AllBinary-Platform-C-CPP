#ifndef ORG_ALLBINARY_UTIL_ARRAYUTIL_H
#define ORG_ALLBINARY_UTIL_ARRAYUTIL_H
// Generated Code Do Not Modify
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct MathUtil MathUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct CommonSeps CommonSeps;
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/logic/math/MathUtil.h")
#include "org/allbinary/logic/math/MathUtil.h"
#endif
// #include "jsinterop/annotations/JsMethod.h"
#include "java/lang/System.h"

typedef struct ArrayUtil ArrayUtil;
struct ArrayUtil {
    MathUtil* mathUtil;
};


ArrayUtil* ArrayUtil_new(void);
void ArrayUtil_init(ArrayUtil* this);

ArrayUtil* ArrayUtil_getInstance(void);

void** ArrayUtil_copyOf(ArrayUtil* this, void** original, int32_t newLength);

void** ArrayUtil_copyOfType(ArrayUtil* this, void** original, int32_t newLength, const char* newType);

int8_t* ArrayUtil_copyOfbyte(ArrayUtil* this, int8_t* original, int32_t newLength);

int16_t* ArrayUtil_copyOfshort(ArrayUtil* this, int16_t* original, int32_t newLength);

int32_t* ArrayUtil_copyOfint(ArrayUtil* this, int32_t* original, int32_t newLength);

int64_t* ArrayUtil_copyOflong(ArrayUtil* this, int64_t* original, int32_t newLength);

uint16_t* ArrayUtil_copyOfchar(ArrayUtil* this, uint16_t* original, int32_t newLength);

float* ArrayUtil_copyOffloat(ArrayUtil* this, float* original, int32_t newLength);

double* ArrayUtil_copyOfdouble(ArrayUtil* this, double* original, int32_t newLength);

bool* ArrayUtil_copyOfboolean(ArrayUtil* this, bool* original, int32_t newLength);

void ArrayUtil_reverse(ArrayUtil* this, int32_t* intArray);

void ArrayUtil_flip(ArrayUtil* this, int32_t* intArray, int32_t width, int32_t height);

const char* ArrayUtil_toStringFromTwoDimensionaArray(ArrayUtil* this, int32_t** twoDimensionalIntArray);

const char* ArrayUtil_toStringFromObjectArray(ArrayUtil* this, void** objectArray);

const char* ArrayUtil_toStringFromByteArray(ArrayUtil* this, int8_t* byteArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ArrayUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ArrayUtil_register(void);


#endif // ORG_ALLBINARY_UTIL_ARRAYUTIL_H
