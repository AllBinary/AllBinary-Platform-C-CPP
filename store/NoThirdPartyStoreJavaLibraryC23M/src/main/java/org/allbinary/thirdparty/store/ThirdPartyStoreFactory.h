#ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTOREFACTORY_H
#define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTOREFACTORY_H
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
// package org.allbinary.thirdparty.store

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct NoThirdPartyStore NoThirdPartyStore;
typedef struct ThirdPartyStore ThirdPartyStore;
#if __has_include("org/allbinary/thirdparty/store/NoThirdPartyStore.h")
#include "org/allbinary/thirdparty/store/NoThirdPartyStore.h"
#endif

typedef struct ThirdPartyStoreFactory ThirdPartyStoreFactory;
struct ThirdPartyStoreFactory {
    char unused;
};


ThirdPartyStoreFactory* ThirdPartyStoreFactory_new(void);

ThirdPartyStore* ThirdPartyStoreFactory_getInstance(void);

void ThirdPartyStoreFactory_init(ThirdPartyStoreFactory* this);
#define ThirdPartyStoreFactory_new0 ThirdPartyStoreFactory_new
#define ThirdPartyStoreFactory_init0 ThirdPartyStoreFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThirdPartyStoreFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThirdPartyStoreFactory_register(void);


#endif // ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTOREFACTORY_H
