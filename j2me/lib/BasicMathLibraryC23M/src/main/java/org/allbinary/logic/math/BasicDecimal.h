#ifndef ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
#define ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
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
typedef struct ScaleFactorFactory ScaleFactorFactory;
#include "java/lang/Long.h"

typedef struct BasicDecimal BasicDecimal;
struct BasicDecimal {
    int64_t units;
    int32_t scaled;
    int32_t factor;
    int32_t factorValue;
};

extern BasicDecimal* BasicDecimal_ZERO_BIGDECIMAL;

BasicDecimal* BasicDecimal_new(int64_t units);

BasicDecimal* BasicDecimal_createBigDecimal(BasicDecimal* bigDecimal);

void BasicDecimal_init(BasicDecimal* this, int64_t units);

void BasicDecimal_setint(BasicDecimal* this, int32_t value);

void BasicDecimal_setlong(BasicDecimal* this, int64_t value);

void BasicDecimal_set(BasicDecimal* this, BasicDecimal* bigDecimal);

void BasicDecimal_addint(BasicDecimal* this, int32_t value);

void BasicDecimal_addlong(BasicDecimal* this, int64_t value);

void BasicDecimal_add(BasicDecimal* this, BasicDecimal* bigDecimal);

void BasicDecimal_subtractint(BasicDecimal* this, int32_t value);

void BasicDecimal_subtractlong(BasicDecimal* this, int64_t value);

void BasicDecimal_subtract(BasicDecimal* this, BasicDecimal* bigDecimal);

void BasicDecimal_multiplyint(BasicDecimal* this, int32_t value);

void BasicDecimal_multiplylong(BasicDecimal* this, int64_t value);

void BasicDecimal_multiply(BasicDecimal* this, BasicDecimal* bigDecimal);

void BasicDecimal_divideint(BasicDecimal* this, int32_t value);

void BasicDecimal_dividelong(BasicDecimal* this, int64_t value);

void BasicDecimal_divide(BasicDecimal* this, BasicDecimal* bigDecimal);

int64_t BasicDecimal_getUnscaled(BasicDecimal* this);


int32_t BasicDecimal_getScaled(BasicDecimal* this);

const char* BasicDecimal_toString(BasicDecimal* this);

int32_t BasicDecimal_getScaledFactor(BasicDecimal* this);

int32_t BasicDecimal_getScaledFactorValue(BasicDecimal* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicDecimal_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicDecimal_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_BASICDECIMAL_H
