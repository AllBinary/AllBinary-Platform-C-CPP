#ifndef ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_H
#define ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_H
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
typedef struct AbeClientInformationInterface AbeClientInformationInterface;

typedef struct ThirdPartyStore ThirdPartyStore;
struct ThirdPartyStore {
    bool authorized;
    const char* name;
};


ThirdPartyStore* ThirdPartyStore_new(const char* name);

void ThirdPartyStore_init(ThirdPartyStore* this, const char* name);

void ThirdPartyStore_authorize(ThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface);

bool ThirdPartyStore_isAuthorized(ThirdPartyStore* this);

void ThirdPartyStore_setAuthorized(ThirdPartyStore* this, bool authorized);

const char* ThirdPartyStore_getName(ThirdPartyStore* this);
#define ThirdPartyStore_new1 ThirdPartyStore_new
#define ThirdPartyStore_init1 ThirdPartyStore_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThirdPartyStore_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ThirdPartyStore_register(void);


#endif // ORG_ALLBINARY_THIRDPARTY_STORE_THIRDPARTYSTORE_H
