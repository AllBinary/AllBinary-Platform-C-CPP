/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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

typedef struct J2SEMath J2SEMath;
struct J2SEMath {
    char unused;
};

static J2SEMath* J2SEMath_instance;

J2SEMath* J2SEMath_new(void);
J2SEMath* J2SEMath_getInstance(void);
int32_t J2SEMath_round(J2SEMath* this, float value);
float J2SEMath_abs(J2SEMath* this, float value);
double J2SEMath_absdouble(J2SEMath* this, double value);

// Static fields with runtime initializers: call this once at startup
void J2SEMath_staticInit(void) {
    J2SEMath_instance = J2SEMath_new();
}

void J2SEMath_init(J2SEMath* this) {
}

J2SEMath* J2SEMath_new(void) {
    J2SEMath* this = calloc(1, sizeof(J2SEMath));
    J2SEMath_init(this);
    return this;
}


J2SEMath* J2SEMath_getInstance(void) {
        return J2SEMath_instance;
}


int32_t J2SEMath_round(J2SEMath* this, float value) {
        return ((int32_t) value);
}


float J2SEMath_abs(J2SEMath* this, float value) {
        return ((value < 0.0f) ? -value : value);
}


double J2SEMath_absdouble(J2SEMath* this, double value) {
        return ((value < 0.0) ? -value : value);
}

