#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H
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
#include "java/lang/Long.h"
#if __has_include("org/allbinary/logic/util/cache/CachePolicy.h")
#include "org/allbinary/logic/util/cache/CachePolicy.h"
#endif

typedef struct CachePolicyFactory CachePolicyFactory;
struct CachePolicyFactory {
    const char* NAME;
    CachePolicy* MAX_TIME_THOUSAND_MAX;
    CachePolicy* THIRTY_MINUTES_TEN_THOUSAND_MAX;
    CachePolicy* THIRTY_MINUTES_FIFTY_THOUSAND_MAX;
    CachePolicy* ONE_MINUTE_FIVE_MAX;
    CachePolicy* ONE_MINUTE_TEN_MAX;
    CachePolicy* ONE_MINUTE_ONE_HUNDRED_MAX;
};


CachePolicyFactory* CachePolicyFactory_new(void);
void CachePolicyFactory_init(CachePolicyFactory* this);

CachePolicyFactory* CachePolicyFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CachePolicyFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CachePolicyFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEPOLICYFACTORY_H
