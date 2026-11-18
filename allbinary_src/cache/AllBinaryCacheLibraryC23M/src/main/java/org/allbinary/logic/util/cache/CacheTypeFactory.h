#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H
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
typedef struct CacheType CacheType;
typedef struct StringUtil StringUtil;
#if __has_include("org/allbinary/logic/util/cache/CacheType.h")
#include "org/allbinary/logic/util/cache/CacheType.h"
#endif

typedef struct CacheTypeFactory CacheTypeFactory;
struct CacheTypeFactory {
    CacheType* NO_CACHE;
    CacheType* CACHE;
    CacheType* SET;
    CacheType* CACHE_VECTOR;
};


CacheTypeFactory* CacheTypeFactory_new(void);
void CacheTypeFactory_init(CacheTypeFactory* this);

CacheTypeFactory* CacheTypeFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CacheTypeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CacheTypeFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHETYPEFACTORY_H
