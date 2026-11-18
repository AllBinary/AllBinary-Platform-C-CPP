#ifndef ORG_ALLBINARY_LOGIC_MATH_PRIMITIVEINTUTIL_H
#define ORG_ALLBINARY_LOGIC_MATH_PRIMITIVEINTUTIL_H
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
typedef struct NullUtil NullUtil;

typedef struct PrimitiveIntUtil PrimitiveIntUtil;
struct PrimitiveIntUtil {
    char unused;
};


PrimitiveIntUtil* PrimitiveIntUtil_new(void);

void PrimitiveIntUtil_init(PrimitiveIntUtil* this);

int32_t* PrimitiveIntUtil_getArrayInstance(void);

int32_t** PrimitiveIntUtil_getTwoDimensionalArrayInstance(void);
#define PrimitiveIntUtil_new0 PrimitiveIntUtil_new
#define PrimitiveIntUtil_init0 PrimitiveIntUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PrimitiveIntUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PrimitiveIntUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_PRIMITIVEINTUTIL_H
