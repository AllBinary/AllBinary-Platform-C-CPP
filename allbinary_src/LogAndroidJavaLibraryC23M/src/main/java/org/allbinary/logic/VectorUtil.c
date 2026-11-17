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
// #include "java/util/Vector.h"

typedef struct VectorUtil VectorUtil;
struct VectorUtil {
    char unused;
};

static VectorUtil* VectorUtil_instance;

VectorUtil* VectorUtil_new(void);
VectorUtil* VectorUtil_getInstance(void);
int32_t VectorUtil_getSize(VectorUtil* this, Any* anyType);
Any* VectorUtil_elementAt(VectorUtil* this, Any* anyType, int32_t index);

// Static fields with runtime initializers: call this once at startup
void VectorUtil_staticInit(void) {
    VectorUtil_instance = VectorUtil_new();
}

void VectorUtil_init(VectorUtil* this) {
}

VectorUtil* VectorUtil_new(void) {
    VectorUtil* this = calloc(1, sizeof(VectorUtil));
    VectorUtil_init(this);
    return this;
}


VectorUtil* VectorUtil_getInstance(void) {
        return VectorUtil_instance;
}


int32_t VectorUtil_getSize(VectorUtil* this, Any* anyType) {
        Vector* vector = ((Vector*) anyType);
        return Vector_size(vector);
}


Any* VectorUtil_elementAt(VectorUtil* this, Any* anyType, int32_t index) {
        Vector* vector = ((Vector*) anyType);
        return Vector_elementAt(vector, index);
}

