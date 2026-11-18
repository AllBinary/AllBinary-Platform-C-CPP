#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
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
// package org.allbinary.logic.util.cache

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct CachePolicy CachePolicy;
struct CachePolicy {
    const char* name;
    int64_t maxTime;
    int64_t maxSize;
};


CachePolicy* CachePolicy_new(const char* name, int64_t maxTime, int64_t maxSize);

void CachePolicy_init(CachePolicy* this, const char* name, int64_t maxTime, int64_t maxSize);

int64_t CachePolicy_getMaxTime(CachePolicy* this);

void CachePolicy_setMaxTime(CachePolicy* this, int64_t maxTime);

int64_t CachePolicy_getMaxSize(CachePolicy* this);

void CachePolicy_setMaxSize(CachePolicy* this, int64_t maxSize);

const char* CachePolicy_getName(CachePolicy* this);
#define CachePolicy_new3 CachePolicy_new
#define CachePolicy_init3 CachePolicy_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CachePolicy_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CachePolicy_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICY_H
