#ifndef ORG_ALLBINARY_LOGIC_STDUTIL_H
#define ORG_ALLBINARY_LOGIC_STDUTIL_H
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
typedef struct ABHashtable ABHashtable;
typedef struct ABStack ABStack;
typedef struct ABVector ABVector;
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif
#if __has_include("org/allbinary/util/ABVector.h")
#include "org/allbinary/util/ABVector.h"
#endif

//ActualPlatform
typedef struct StdUtil StdUtil;
struct StdUtil {
    ABVector* EMPTY_VECTOR;
    ABHashtable* NULL_TABLE;
};


StdUtil* StdUtil_new(void);
void StdUtil_init(StdUtil* this);

StdUtil* StdUtil_getInstance(void);

ABStack* StdUtil_createStack(StdUtil* this);

ABVector* StdUtil_createVector(StdUtil* this);

ABHashtable* StdUtil_createHashtable(StdUtil* this);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StdUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StdUtil_register(void);


#endif // ORG_ALLBINARY_LOGIC_STDUTIL_H
