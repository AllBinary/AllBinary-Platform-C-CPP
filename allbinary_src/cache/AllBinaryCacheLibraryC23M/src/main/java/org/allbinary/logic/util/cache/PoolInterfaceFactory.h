#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H
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
typedef struct PoolInterface PoolInterface;
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
typedef struct PoolType PoolType;
typedef struct CachePolicy CachePolicy;

typedef struct PoolInterfaceFactory PoolInterfaceFactory;
struct PoolInterfaceFactory {
    char unused;
};


PoolInterfaceFactory* PoolInterfaceFactory_new(void);

void PoolInterfaceFactory_init(PoolInterfaceFactory* this);

PoolInterface* PoolInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, PoolType* poolType, CachePolicy* cachePolicy);
#define PoolInterfaceFactory_new0 PoolInterfaceFactory_new
#define PoolInterfaceFactory_init0 PoolInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void PoolInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void PoolInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_POOLINTERFACEFACTORY_H
