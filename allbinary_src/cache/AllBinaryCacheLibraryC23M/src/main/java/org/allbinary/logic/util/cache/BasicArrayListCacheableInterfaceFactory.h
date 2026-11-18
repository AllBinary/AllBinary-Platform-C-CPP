#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_H
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
typedef struct CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface;
typedef struct BasicArrayListCacheable BasicArrayListCacheable;
typedef struct CacheableInterface CacheableInterface;
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct BasicArrayListCacheableInterfaceFactory BasicArrayListCacheableInterfaceFactory;
struct BasicArrayListCacheableInterfaceFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


BasicArrayListCacheableInterfaceFactory* BasicArrayListCacheableInterfaceFactory_new(void);
void BasicArrayListCacheableInterfaceFactory_init(BasicArrayListCacheableInterfaceFactory* this);

CacheableInterface* BasicArrayListCacheableInterfaceFactory_getInstance(BasicArrayListCacheableInterfaceFactory* this, void* key);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicArrayListCacheableInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicArrayListCacheableInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_BASICARRAYLISTCACHEABLEINTERFACEFACTORY_H
