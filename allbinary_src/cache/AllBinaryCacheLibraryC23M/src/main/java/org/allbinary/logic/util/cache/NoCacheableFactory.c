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
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct NoCacheableFactory NoCacheableFactory;
struct NoCacheableFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


NoCacheableFactory* NoCacheableFactory_new(void);

void NoCacheableFactory_init(NoCacheableFactory* this);
CacheableInterface* NoCacheableFactory_getInstance(NoCacheableFactory* this, Any* key);


void NoCacheableFactory_init(NoCacheableFactory* this) {
}

NoCacheableFactory* NoCacheableFactory_new(void) {
    NoCacheableFactory* this = calloc(1, sizeof(NoCacheableFactory));
    NoCacheableFactory_init(this);
    return this;
}


// throws Exception
CacheableInterface* NoCacheableFactory_getInstance(NoCacheableFactory* this, Any* key) {
        java_throw(java_exception_new("Exception", "This Factory Does Not"));
}

