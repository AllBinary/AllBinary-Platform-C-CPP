#ifndef ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H
#define ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H
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
// package org.allbinary.logic.string

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "jsinterop/annotations/JsType.h"
// #include "jsinterop/annotations/JsMethod.h"
// #include "jsinterop/annotations/JsConstructor.h"
// #include "jsinterop/annotations/JsProperty.h"

typedef struct StringUtil StringUtil;
struct StringUtil {
    const char* INIT_STRING;
    const char* NULL_STRING;
    const char* EMPTY_STRING;
    const char** ONE_EMPTY_STRING_ARRAY;
    const char*** ONE_EMPTY_STRING_ARRAY_OF_ARRAYS;
    const char** stringArray;
};


StringUtil* StringUtil_new(void);

StringUtil* StringUtil_getInstance(void);

void StringUtil_init(StringUtil* this);

const char* StringUtil_getNonNull(StringUtil* this, const char* string);

const char** StringUtil_getArrayInstance(StringUtil* this);

int32_t StringUtil_count(StringUtil* this, const char* string, uint16_t aChar);

const char* StringUtil_toString(StringUtil* this, void* anyType);
#define StringUtil_new0 StringUtil_new
#define StringUtil_init0 StringUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StringUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StringUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_STRING_STRINGUTIL_H
