#ifndef ORG_ALLBINARY_LOGIC_NULLUTIL_H
#define ORG_ALLBINARY_LOGIC_NULLUTIL_H
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
// package org.allbinary.logic

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"

//ActualPlatform
typedef struct NullUtil NullUtil;
struct NullUtil {
    void* NULL_OBJECT;
    const char* NULL_CLASS;
    void** NULL_OBJECT_ARRAY;
    uint16_t* NULL_CHAR_ARRAY;
    int8_t* NULL_BYTE_ARRAY;
    int16_t** NULL_SHORT_ARRAY_ARRAY;
    int32_t* NULL_INT_ARRAY;
    int32_t** NULL_INT_ARRAY_ARRAY;
    int32_t*** NULL_INT_ARRAY_ARRAY_ARRAY;
    float* NULL_FLOAT_ARRAY;
};


NullUtil* NullUtil_new(void);
void NullUtil_init(NullUtil* this);

NullUtil* NullUtil_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NullUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NullUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_NULLUTIL_H
