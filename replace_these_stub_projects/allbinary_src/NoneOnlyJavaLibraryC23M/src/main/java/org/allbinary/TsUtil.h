#ifndef ORG_ALLBINARY_TSUTIL_H
#define ORG_ALLBINARY_TSUTIL_H
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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "java/lang/System.h"

//None - Do not use
typedef struct TsUtil TsUtil;
struct TsUtil {
    char unused;
};


TsUtil* TsUtil_new(void);
void TsUtil_init(TsUtil* this);

TsUtil* TsUtil_getInstance(void);

int32_t TsUtil_hashCode(TsUtil* this, void* anyType);

void TsUtil_waitFor(TsUtil* this, void* any, int64_t timeoutMillis);

int8_t* TsUtil_getRecord(TsUtil* this, void* anyType, int32_t recordId);

int32_t TsUtil_compareTo(TsUtil* this, const char* a, const char* b);

bool TsUtil_equalIgnoreCase(TsUtil* this, const char* a, const char* b);

bool TsUtil_equalsNotstring(TsUtil* this, void* anyType, void* object2);

int32_t TsUtil_toNumberFromChar(TsUtil* this, uint16_t value);

int32_t TsUtil_toNumber(TsUtil* this, int32_t value);

int8_t* TsUtil_getByteArray(TsUtil* this, const char* string);

bool TsUtil_isItemListener(TsUtil* this, void* owner);

void TsUtil_printAvailableMethods(TsUtil* this, void* anyType);

void TsUtil_gc(TsUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void TsUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void TsUtil_register(void);


#endif // ORG_ALLBINARY_TSUTIL_H
