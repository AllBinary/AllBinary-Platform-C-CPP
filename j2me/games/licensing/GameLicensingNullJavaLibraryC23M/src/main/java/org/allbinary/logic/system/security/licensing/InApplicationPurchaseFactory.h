#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H
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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct LockableFeature LockableFeature;
typedef struct StringUtil StringUtil;

typedef struct InApplicationPurchaseFactory InApplicationPurchaseFactory;
struct InApplicationPurchaseFactory {
    char unused;
};


InApplicationPurchaseFactory* InApplicationPurchaseFactory_new(void);

InApplicationPurchaseFactory* InApplicationPurchaseFactory_getInstance(void);

void InApplicationPurchaseFactory_init(InApplicationPurchaseFactory* this);

void InApplicationPurchaseFactory_initMethod(InApplicationPurchaseFactory* this, void* anyType, void* stateObject);

void InApplicationPurchaseFactory_onCreate(InApplicationPurchaseFactory* this, void* anyType, void* stateObject);

void InApplicationPurchaseFactory_onStart(InApplicationPurchaseFactory* this);

void InApplicationPurchaseFactory_onResult(InApplicationPurchaseFactory* this, int32_t requestCode, int32_t resultCode, void* data);

void InApplicationPurchaseFactory_onSaveState(InApplicationPurchaseFactory* this, void* anyType);

void InApplicationPurchaseFactory_onStop(InApplicationPurchaseFactory* this);

void InApplicationPurchaseFactory_onDestroy(InApplicationPurchaseFactory* this);

void InApplicationPurchaseFactory_purchase(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature);

bool InApplicationPurchaseFactory_isPurchased(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature);

void InApplicationPurchaseFactory_add(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature);

const char* InApplicationPurchaseFactory_getUserName(InApplicationPurchaseFactory* this);

bool InApplicationPurchaseFactory_isEnabled(InApplicationPurchaseFactory* this);
#define InApplicationPurchaseFactory_new0 InApplicationPurchaseFactory_new
#define InApplicationPurchaseFactory_init0 InApplicationPurchaseFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void InApplicationPurchaseFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void InApplicationPurchaseFactory_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_INAPPLICATIONPURCHASEFACTORY_H
