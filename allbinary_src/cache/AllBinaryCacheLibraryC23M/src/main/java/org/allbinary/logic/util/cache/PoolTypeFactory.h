#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
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
typedef struct PoolType PoolType;
typedef struct CacheTypeFactory CacheTypeFactory;
#if __has_include("org/allbinary/logic/util/cache/PoolType.h")
#include "org/allbinary/logic/util/cache/PoolType.h"
#endif

typedef struct PoolTypeFactory PoolTypeFactory;
struct PoolTypeFactory {
    PoolType* VECTOR_POOL;
};


PoolTypeFactory* PoolTypeFactory_new(void);
void PoolTypeFactory_init(PoolTypeFactory* this);

PoolTypeFactory* PoolTypeFactory_getInstance(void);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PoolTypeFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PoolTypeFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLTYPEFACTORY_H
