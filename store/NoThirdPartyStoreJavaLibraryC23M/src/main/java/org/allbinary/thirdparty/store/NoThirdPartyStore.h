#ifndef ORG_ALLBINARY_THIRDPARTY_STORE_NOTHIRDPARTYSTORE_H
#define ORG_ALLBINARY_THIRDPARTY_STORE_NOTHIRDPARTYSTORE_H
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
typedef struct ThirdPartyStore ThirdPartyStore;
typedef struct StringUtil StringUtil;
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
#include "org/allbinary/thirdparty/store/ThirdPartyStore.h"

typedef struct NoThirdPartyStore NoThirdPartyStore;
struct NoThirdPartyStore {
    ThirdPartyStore base;
};


NoThirdPartyStore* NoThirdPartyStore_new(void);

void NoThirdPartyStore_init(NoThirdPartyStore* this);

void NoThirdPartyStore_authorize(NoThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface);
#define NoThirdPartyStore_new0 NoThirdPartyStore_new
#define NoThirdPartyStore_init0 NoThirdPartyStore_init
#ifndef NoThirdPartyStore_isAuthorized
#define NoThirdPartyStore_isAuthorized ThirdPartyStore_isAuthorized
#endif
#ifndef NoThirdPartyStore_setAuthorized
#define NoThirdPartyStore_setAuthorized ThirdPartyStore_setAuthorized
#endif
#ifndef NoThirdPartyStore_getName
#define NoThirdPartyStore_getName ThirdPartyStore_getName
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoThirdPartyStore_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoThirdPartyStore_register(void);


#endif // ORG_ALLBINARY_THIRDPARTY_STORE_NOTHIRDPARTYSTORE_H
