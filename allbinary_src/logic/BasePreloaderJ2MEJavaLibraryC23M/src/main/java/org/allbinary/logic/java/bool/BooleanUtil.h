#ifndef ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H
#define ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H
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
// package org.allbinary.logic.java.bool

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BooleanFactory BooleanFactory;
typedef struct TsUtil TsUtil;
typedef struct StringMaker StringMaker;
typedef struct StringValidationUtil StringValidationUtil;
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif

typedef struct BooleanUtil BooleanUtil;
struct BooleanUtil {
    TsUtil* tsUtil;
};


BooleanUtil* BooleanUtil_new(void);

BooleanUtil* BooleanUtil_getInstance(void);

void BooleanUtil_init(BooleanUtil* this);

bool BooleanUtil_getFromString(BooleanUtil* this, const char* booleanString);

bool BooleanUtil_isStringBoolean(BooleanUtil* this, const char* booleanString);

const char* BooleanUtil_toStringFromBooleanArray(BooleanUtil* this, bool* booleanArray);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BooleanUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BooleanUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_JAVA_BOOL_BOOLEANUTIL_H
