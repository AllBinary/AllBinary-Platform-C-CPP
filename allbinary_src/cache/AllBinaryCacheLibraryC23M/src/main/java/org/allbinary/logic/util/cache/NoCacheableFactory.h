#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_NOCACHEABLEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_NOCACHEABLEFACTORY_H
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
typedef struct CacheableInterface CacheableInterface;
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct NoCacheableFactory NoCacheableFactory;
struct NoCacheableFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


NoCacheableFactory* NoCacheableFactory_new(void);

void NoCacheableFactory_init(NoCacheableFactory* this);

CacheableInterface* NoCacheableFactory_getInstance(NoCacheableFactory* this, void* key);
#define NoCacheableFactory_new0 NoCacheableFactory_new
#define NoCacheableFactory_init0 NoCacheableFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoCacheableFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoCacheableFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_NOCACHEABLEFACTORY_H
