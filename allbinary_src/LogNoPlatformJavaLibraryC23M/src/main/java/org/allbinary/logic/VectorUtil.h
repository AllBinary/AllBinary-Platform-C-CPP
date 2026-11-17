#ifndef ORG_ALLBINARY_LOGIC_VECTORUTIL_H
#define ORG_ALLBINARY_LOGIC_VECTORUTIL_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2026 AllBinary 
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
// package org.allbinary.logic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/util/Vector.h"

typedef struct VectorUtil VectorUtil;
struct VectorUtil {
    char unused;
};


VectorUtil* VectorUtil_new(void);
void VectorUtil_init(VectorUtil* this);

VectorUtil* VectorUtil_getInstance(void);

int32_t VectorUtil_getSize(VectorUtil* this, void* anyType);

void* VectorUtil_elementAt(VectorUtil* this, void* anyType, int32_t index);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void VectorUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_VECTORUTIL_H
