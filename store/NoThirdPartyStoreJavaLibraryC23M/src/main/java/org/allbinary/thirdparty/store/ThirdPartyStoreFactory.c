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

typedef struct ThirdPartyStoreFactory ThirdPartyStoreFactory;
struct ThirdPartyStoreFactory {
    char unused;
};

static NoThirdPartyStore* ThirdPartyStoreFactory_instance;

ThirdPartyStoreFactory* ThirdPartyStoreFactory_new(void);
ThirdPartyStore* ThirdPartyStoreFactory_getInstance(void);

void ThirdPartyStoreFactory_init(ThirdPartyStoreFactory* this);

// Static fields with runtime initializers: call this once at startup
void ThirdPartyStoreFactory_staticInit(void) {
    ThirdPartyStoreFactory_instance = NoThirdPartyStore_new();
}


ThirdPartyStore* ThirdPartyStoreFactory_getInstance(void) {
        return ThirdPartyStoreFactory_instance;
}


void ThirdPartyStoreFactory_init(ThirdPartyStoreFactory* this) {
}

ThirdPartyStoreFactory* ThirdPartyStoreFactory_new(void) {
    ThirdPartyStoreFactory* this = calloc(1, sizeof(ThirdPartyStoreFactory));
    ThirdPartyStoreFactory_init(this);
    return this;
}

