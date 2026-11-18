#ifndef ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H
#define ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H
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


J2SEMath* J2SEMath_new(void);
void J2SEMath_init(J2SEMath* this);

J2SEMath* J2SEMath_getInstance(void);

int32_t J2SEMath_round(J2SEMath* this, float value);

float J2SEMath_abs(J2SEMath* this, float value);

double J2SEMath_absdouble(J2SEMath* this, double value);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void J2SEMath_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void J2SEMath_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_J2SEMATH_H
