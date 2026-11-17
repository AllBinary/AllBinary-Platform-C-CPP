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

typedef struct YAxisMathVector YAxisMathVector;
struct YAxisMathVector {
    MathVector base;
};


YAxisMathVector* YAxisMathVector_new(BasicDecimal* magnitudeBasicDecimal, int32_t direction);

void YAxisMathVector_init(YAxisMathVector* this, BasicDecimal* magnitudeBasicDecimal, int32_t direction);
BasicDecimal* YAxisMathVector_getResult(YAxisMathVector* this);
static void YAxisMathVector_calculate(YAxisMathVector* this);


void YAxisMathVector_init(YAxisMathVector* this, BasicDecimal* magnitudeBasicDecimal, int32_t direction) {
        MathVector_init(&this->base, magnitudeBasicDecimal, direction);
        YAxisMathVector_calculate(this);
}

YAxisMathVector* YAxisMathVector_new(BasicDecimal* magnitudeBasicDecimal, int32_t direction) {
    YAxisMathVector* this = calloc(1, sizeof(YAxisMathVector));
    YAxisMathVector_init(this, magnitudeBasicDecimal, direction);
    return this;
}


BasicDecimal* YAxisMathVector_getResult(YAxisMathVector* this) {
        return this->base.resultBasicDecimal;
}


static void YAxisMathVector_calculate(YAxisMathVector* this) {
        int64_t result = YAxisMathVectorUtil_calculate(JAVA_CALL(YAxisMathVector_getMagnitude(this), getUnscaled), YAxisMathVector_getDirection(this));
        this->resultBasicDecimal = BasicDecimal_new(result);
}

