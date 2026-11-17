#ifndef ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H
#define ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H
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
typedef struct AndroidUtil AndroidUtil;
typedef struct J2MEUtil J2MEUtil;
typedef struct LogUtil LogUtil;
typedef struct StringMaker StringMaker;
#include "java/lang/Integer.h"

typedef struct SmallIntegerSingletonFactory SmallIntegerSingletonFactory;
struct SmallIntegerSingletonFactory {
    int32_t NEGATIVE_MAX;
    int32_t POSITIVE_MAX;
    int32_t* INTEGER_ARRAY;
    const char** STRING_ARRAY;
    int32_t MIN;
    int32_t lastMin;
    int32_t lastNegativeMin;
};


SmallIntegerSingletonFactory* SmallIntegerSingletonFactory_new(void);

SmallIntegerSingletonFactory* SmallIntegerSingletonFactory_getInstance(void);

int32_t SmallIntegerSingletonFactory_getMin(SmallIntegerSingletonFactory* this);


void SmallIntegerSingletonFactory_initWithRange(SmallIntegerSingletonFactory* this, int32_t value, int32_t negativeValue);

void SmallIntegerSingletonFactory_initMethod(SmallIntegerSingletonFactory* this);

void SmallIntegerSingletonFactory_init(SmallIntegerSingletonFactory* this);

int32_t SmallIntegerSingletonFactory_getAt(SmallIntegerSingletonFactory* this, int32_t index);

int32_t SmallIntegerSingletonFactory_getAtNoThrow(SmallIntegerSingletonFactory* this, int32_t index);

int32_t SmallIntegerSingletonFactory_createInstance(SmallIntegerSingletonFactory* this, int32_t index);

const char* SmallIntegerSingletonFactory_getString(SmallIntegerSingletonFactory* this, int32_t index);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SmallIntegerSingletonFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SmallIntegerSingletonFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_SMALLINTEGERSINGLETONFACTORY_H
