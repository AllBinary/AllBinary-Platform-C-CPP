#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2007 AllBinary 
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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct StringMaker StringMaker;

typedef struct CacheType CacheType;
struct CacheType {
    const char* vendor;
    const char* type;
};


CacheType* CacheType_new(const char* vendor, const char* type);

void CacheType_init(CacheType* this, const char* vendor, const char* type);

const char* CacheType_getVendor(CacheType* this);

const char* CacheType_getType(CacheType* this);

const char* CacheType_toString(CacheType* this);
#define CacheType_new2 CacheType_new
#define CacheType_init2 CacheType_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CacheType_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CacheType_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPE_H
