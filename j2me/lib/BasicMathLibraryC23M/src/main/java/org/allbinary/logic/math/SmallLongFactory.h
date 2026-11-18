#ifndef ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H
#define ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H
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
#include "java/lang/Long.h"

typedef struct SmallLongFactory SmallLongFactory;
struct SmallLongFactory {
    int32_t NEGATIVE_MAX;
    int32_t POSITIVE_MAX;
    int64_t* INTEGER_ARRAY;
    const char** STRING_ARRAY;
    int32_t MIN;
    int32_t lastMin;
    int32_t lastNegativeMin;
};


SmallLongFactory* SmallLongFactory_new(void);

SmallLongFactory* SmallLongFactory_getInstance(void);

void SmallLongFactory_initWithRange(SmallLongFactory* this, int32_t value, int32_t negativeValue);

void SmallLongFactory_initMethod(SmallLongFactory* this);

void SmallLongFactory_init(SmallLongFactory* this);

int64_t SmallLongFactory_getInstanceNoThrow(SmallLongFactory* this, int64_t index);

const char* SmallLongFactory_getString(SmallLongFactory* this, int32_t index);
#define SmallLongFactory_new0 SmallLongFactory_new
#define SmallLongFactory_init0 SmallLongFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SmallLongFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SmallLongFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_MATH_SMALLLONGFACTORY_H
