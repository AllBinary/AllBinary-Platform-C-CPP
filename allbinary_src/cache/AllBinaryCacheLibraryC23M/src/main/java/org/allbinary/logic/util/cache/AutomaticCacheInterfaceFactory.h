#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_H
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
typedef struct AutomaticCacheInterface AutomaticCacheInterface;
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
typedef struct CacheType CacheType;
typedef struct CachePolicy CachePolicy;

typedef struct AutomaticCacheInterfaceFactory AutomaticCacheInterfaceFactory;
struct AutomaticCacheInterfaceFactory {
    char unused;
};


AutomaticCacheInterfaceFactory* AutomaticCacheInterfaceFactory_new(void);

void AutomaticCacheInterfaceFactory_init(AutomaticCacheInterfaceFactory* this);

AutomaticCacheInterface* AutomaticCacheInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, CacheType* cacheType, CachePolicy* cachePolicy);
#define AutomaticCacheInterfaceFactory_new0 AutomaticCacheInterfaceFactory_new
#define AutomaticCacheInterfaceFactory_init0 AutomaticCacheInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AutomaticCacheInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AutomaticCacheInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_AUTOMATICCACHEINTERFACEFACTORY_H
