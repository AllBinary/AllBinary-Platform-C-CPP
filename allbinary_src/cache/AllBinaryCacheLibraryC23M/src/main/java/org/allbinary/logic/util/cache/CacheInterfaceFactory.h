#ifndef ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H
#define ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H
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
typedef struct CacheInterface CacheInterface;
typedef struct CacheType CacheType;
typedef struct CachePolicy CachePolicy;

typedef struct CacheInterfaceFactory CacheInterfaceFactory;
struct CacheInterfaceFactory {
    char unused;
};


CacheInterfaceFactory* CacheInterfaceFactory_new(void);

void CacheInterfaceFactory_init(CacheInterfaceFactory* this);

CacheInterface* CacheInterfaceFactory_getInstance(CacheType* cacheType, CachePolicy* cachePolicy);
#define CacheInterfaceFactory_new0 CacheInterfaceFactory_new
#define CacheInterfaceFactory_init0 CacheInterfaceFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CacheInterfaceFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void CacheInterfaceFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_UTIL_CACHE_CACHEINTERFACEFACTORY_H
