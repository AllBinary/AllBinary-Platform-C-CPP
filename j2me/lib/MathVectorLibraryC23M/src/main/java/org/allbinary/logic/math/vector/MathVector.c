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
#include "org/allbinary/logic/math/vector/MathVectorInterface.h"

typedef struct MathVector MathVector;
struct MathVector {
    MathVectorInterface MathVectorInterface_interface;
    BasicDecimal* magnitudeBasicDecimal;
    int32_t direction;
    BasicDecimal* resultBasicDecimal;
};


MathVector* MathVector_new(BasicDecimal* magnitudeBasicDecimal, int32_t direction);

void MathVector_init(MathVector* this, BasicDecimal* magnitudeBasicDecimal, int32_t direction);
BasicDecimal* MathVector_getMagnitude(MathVector* this);
int32_t MathVector_getDirection(MathVector* this);
BasicDecimal* MathVector_getResult(MathVector* this);

static void MathVector_initFields(MathVector* this) {
    
    
    this->resultBasicDecimal = nullptr;
}


void MathVector_init(MathVector* this, BasicDecimal* magnitudeBasicDecimal, int32_t direction) {
    MathVector_initFields(this);
        this->magnitudeBasicDecimal = magnitudeBasicDecimal;
        this->direction = direction;
}

MathVector* MathVector_new(BasicDecimal* magnitudeBasicDecimal, int32_t direction) {
    MathVector* this = calloc(1, sizeof(MathVector));
    MathVector_init(this, magnitudeBasicDecimal, direction);
    return this;
}


BasicDecimal* MathVector_getMagnitude(MathVector* this) {
        return this->magnitudeBasicDecimal;
}


int32_t MathVector_getDirection(MathVector* this) {
        return this->direction;
}


BasicDecimal* MathVector_getResult(MathVector* this) {
        return this->resultBasicDecimal;
}

