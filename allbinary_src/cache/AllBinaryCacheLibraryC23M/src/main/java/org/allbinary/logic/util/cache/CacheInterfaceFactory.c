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

typedef struct CacheInterfaceFactory CacheInterfaceFactory;
struct CacheInterfaceFactory {
    char unused;
};


CacheInterfaceFactory* CacheInterfaceFactory_new(void);

void CacheInterfaceFactory_init(CacheInterfaceFactory* this);
CacheInterface* CacheInterfaceFactory_getInstance(CacheType* cacheType, CachePolicy* cachePolicy);


void CacheInterfaceFactory_init(CacheInterfaceFactory* this) {
}

CacheInterfaceFactory* CacheInterfaceFactory_new(void) {
    CacheInterfaceFactory* this = calloc(1, sizeof(CacheInterfaceFactory));
    CacheInterfaceFactory_init(this);
    return this;
}


// throws Exception
CacheInterface* CacheInterfaceFactory_getInstance(CacheType* cacheType, CachePolicy* cachePolicy) {
        java_throw(java_exception_new("Exception", java_concat("No such ", CacheType_toString(cacheType))));
}

