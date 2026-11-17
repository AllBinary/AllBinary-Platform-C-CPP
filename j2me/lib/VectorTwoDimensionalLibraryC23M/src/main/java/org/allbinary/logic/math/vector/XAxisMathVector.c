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
#include "org/allbinary/logic/math/BasicDecimal.h"
#include "org/allbinary/logic/math/vector/MathVector.h"

typedef struct XAxisMathVector XAxisMathVector;
struct XAxisMathVector {
    MathVector base;
};


XAxisMathVector* XAxisMathVector_new(BasicDecimal* magnitudeBasicDecimal, int32_t direction);

void XAxisMathVector_init(XAxisMathVector* this, BasicDecimal* magnitudeBasicDecimal, int32_t direction);
static void XAxisMathVector_calculate(XAxisMathVector* this);


void XAxisMathVector_init(XAxisMathVector* this, BasicDecimal* magnitudeBasicDecimal, int32_t direction) {
        MathVector_init(&this->base, magnitudeBasicDecimal, direction);
        XAxisMathVector_calculate(this);
}

XAxisMathVector* XAxisMathVector_new(BasicDecimal* magnitudeBasicDecimal, int32_t direction) {
    XAxisMathVector* this = calloc(1, sizeof(XAxisMathVector));
    XAxisMathVector_init(this, magnitudeBasicDecimal, direction);
    return this;
}


static void XAxisMathVector_calculate(XAxisMathVector* this) {
        int64_t result = YAxisMathVectorUtil_calculate(JAVA_CALL(XAxisMathVector_getMagnitude(this), getUnscaled), XAxisMathVector_getDirection(this));
        this->resultBasicDecimal = BasicDecimal_new(result);
}

