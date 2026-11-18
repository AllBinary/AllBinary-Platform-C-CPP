#ifndef ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_H
#define ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_H
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
// package org.allbinary.logic.java.byteutil

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct ByteUtil ByteUtil;
struct ByteUtil {
    char unused;
};


ByteUtil* ByteUtil_new(void);

ByteUtil* ByteUtil_getInstance(void);

void ByteUtil_init(ByteUtil* this);

int8_t* ByteUtil_xor(ByteUtil* this, int8_t* array, int8_t mask);

int8_t* ByteUtil_not(ByteUtil* this, int8_t* array);

int8_t* ByteUtil_xorByte(ByteUtil* this, int8_t* array, int32_t index);

bool ByteUtil_compare(ByteUtil* this, int8_t* newByteArray, int8_t* oldByteArray);

bool ByteUtil_compareWithStats(ByteUtil* this, int8_t* newByteArray, int32_t newSize, int8_t* oldByteArray, int32_t* stats);
#define ByteUtil_new0 ByteUtil_new
#define ByteUtil_init0 ByteUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ByteUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ByteUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_BYTEUTIL_BYTEUTIL_H
