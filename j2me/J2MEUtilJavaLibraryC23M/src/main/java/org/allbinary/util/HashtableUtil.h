#ifndef ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H
#define ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H
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
// package org.allbinary.util

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct EnumerationUtil EnumerationUtil;
typedef struct ABHashtable ABHashtable;
typedef struct BasicArrayListS BasicArrayListS;
typedef struct BasicArrayList BasicArrayList;
#include "java/util/Enumeration.h"
// #include "jsinterop/annotations/JsType.h"
#if __has_include("org/allbinary/util/EnumerationUtil.h")
#include "org/allbinary/util/EnumerationUtil.h"
#endif

typedef struct HashtableUtil HashtableUtil;
struct HashtableUtil {
    EnumerationUtil* enumerationUtil;
};


HashtableUtil* HashtableUtil_new(void);
void HashtableUtil_init(HashtableUtil* this);

HashtableUtil* HashtableUtil_getInstance(void);

void HashtableUtil_putAll(HashtableUtil* this, ABHashtable* fromHashtable, ABHashtable* hashtable);

void** HashtableUtil_getKeysAsArray(HashtableUtil* this, ABHashtable* hashtable);

BasicArrayList* HashtableUtil_getKeysAsList(HashtableUtil* this, ABHashtable* hashtable);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void HashtableUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void HashtableUtil_register(void);


#endif // ORG_ALLBINARY_UTIL_HASHTABLEUTIL_H
