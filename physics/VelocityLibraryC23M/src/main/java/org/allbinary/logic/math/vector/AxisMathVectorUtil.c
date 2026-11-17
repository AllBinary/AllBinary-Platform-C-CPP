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
#include "org/allbinary/math/NoDecimalTrigTable.h"

typedef struct AxisMathVectorUtil AxisMathVectorUtil;
struct AxisMathVectorUtil {
    NoDecimalTrigTable* noDecimalTrigTable;
};

static AxisMathVectorUtil* AxisMathVectorUtil_instance;

AxisMathVectorUtil* AxisMathVectorUtil_new(void);
AxisMathVectorUtil* AxisMathVectorUtil_getInstance(void);
int64_t AxisMathVectorUtil_calculateX(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle);
int64_t AxisMathVectorUtil_calculateY(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle);
int64_t AxisMathVectorUtil_calculateZ(AxisMathVectorUtil* this, int64_t magnitude, int32_t otherAngle);

// Static fields with runtime initializers: call this once at startup
void AxisMathVectorUtil_staticInit(void) {
    AxisMathVectorUtil_instance = AxisMathVectorUtil_new();
}

static void AxisMathVectorUtil_initFields(AxisMathVectorUtil* this) {
    this->noDecimalTrigTable = NoDecimalTrigTable_getInstance();
}

void AxisMathVectorUtil_init(AxisMathVectorUtil* this) {
    AxisMathVectorUtil_initFields(this);
}

AxisMathVectorUtil* AxisMathVectorUtil_new(void) {
    AxisMathVectorUtil* this = calloc(1, sizeof(AxisMathVectorUtil));
    AxisMathVectorUtil_init(this);
    return this;
}


AxisMathVectorUtil* AxisMathVectorUtil_getInstance(void) {
        return AxisMathVectorUtil_instance;
}


int64_t AxisMathVectorUtil_calculateX(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle) {
        return magnitude * NoDecimalTrigTable_cos(this->noDecimalTrigTable, angle) / 10;
}


int64_t AxisMathVectorUtil_calculateY(AxisMathVectorUtil* this, int64_t magnitude, int32_t angle) {
        return magnitude * NoDecimalTrigTable_sin(this->noDecimalTrigTable, angle) / 10;
}


int64_t AxisMathVectorUtil_calculateZ(AxisMathVectorUtil* this, int64_t magnitude, int32_t otherAngle) {
        return magnitude * NoDecimalTrigTable_sin(this->noDecimalTrigTable, otherAngle) / 10;
}

