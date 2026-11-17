#ifndef ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
#define ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
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
typedef struct CommonPhoneStrings CommonPhoneStrings;
typedef struct CommonSeps CommonSeps;

typedef struct MathData MathData;
struct MathData {
    const char* EQUALS;
    const char* PLUS;
    const char* GREATER_THAN;
    const char* MINUS;
    const char* DIVIDE;
    const char* MULTIPLY;
};


MathData* MathData_new(void);

MathData* MathData_getInstance(void);

void MathData_init(MathData* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void MathData_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void MathData_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_MATHDATA_H
