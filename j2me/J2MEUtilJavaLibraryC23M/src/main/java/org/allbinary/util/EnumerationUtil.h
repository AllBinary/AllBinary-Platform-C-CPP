#ifndef ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H
#define ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicArrayListD BasicArrayListD;
typedef struct BasicArrayList BasicArrayList;
// #include "jsinterop/annotations/JsType.h"
#include "java/util/Enumeration.h"
// #include "jsinterop/annotations/JsMethod.h"

//ArkTs does not have this.  So this is for the ArkTs build.
typedef struct EnumerationUtil EnumerationUtil;
struct EnumerationUtil {
    char unused;
};


EnumerationUtil* EnumerationUtil_new(void);
void EnumerationUtil_init(EnumerationUtil* this);

EnumerationUtil* EnumerationUtil_getInstance(void);

bool EnumerationUtil_hasMoreElements(EnumerationUtil* this, Enumeration* enumeration);

void* EnumerationUtil_nextElement(EnumerationUtil* this, Enumeration* enumeration);

void** EnumerationUtil_getAsArray(EnumerationUtil* this, Enumeration* enumeration);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void EnumerationUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void EnumerationUtil_register(void);


#endif // ORG_ALLBINARY_UTIL_ENUMERATIONUTIL_H
