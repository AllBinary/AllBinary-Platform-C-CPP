#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H
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

typedef struct ThirdPartyInApplicationPurchaseInterface ThirdPartyInApplicationPurchaseInterface;
struct ThirdPartyInApplicationPurchaseInterface {
    bool (*isPurchased)(void* this, LockableFeature* lockableFeature);
    void (*onCreate)(void* this, void* anyType, void* stateObject);
    void (*onDestroy)(void* this);
    void (*onStart)(void* this);
    void (*onActivityResult)(void* this, int32_t requestCode, int32_t resultCode, void* dataObject);
    void (*onSaveInstanceState)(void* this, void* anyType);
    void (*onStop)(void* this);
    void (*requestPurchase)(void* this, LockableFeature* lockableFeature);
    void (*requestReceipts)(void* this);
    void (*add)(void* this, LockableFeature* lockableFeature);
    const char* (*getUserName)(void* this);
    bool (*isEnabled)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ThirdPartyInApplicationPurchaseInterface_staticInit(void);

static inline bool ThirdPartyInApplicationPurchaseInterface_isPurchased(void* this, LockableFeature* lockableFeature) {
    return ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->isPurchased)) java_method_of(this, "isPurchased"))(this, lockableFeature);
}

static inline void ThirdPartyInApplicationPurchaseInterface_onCreate(void* this, void* anyType, void* stateObject) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->onCreate)) java_method_of(this, "onCreate"))(this, anyType, stateObject);
}

static inline void ThirdPartyInApplicationPurchaseInterface_onDestroy(void* this) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->onDestroy)) java_method_of(this, "onDestroy"))(this);
}

static inline void ThirdPartyInApplicationPurchaseInterface_onStart(void* this) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->onStart)) java_method_of(this, "onStart"))(this);
}

static inline void ThirdPartyInApplicationPurchaseInterface_onActivityResult(void* this, int32_t requestCode, int32_t resultCode, void* dataObject) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->onActivityResult)) java_method_of(this, "onActivityResult"))(this, requestCode, resultCode, dataObject);
}

static inline void ThirdPartyInApplicationPurchaseInterface_onSaveInstanceState(void* this, void* anyType) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->onSaveInstanceState)) java_method_of(this, "onSaveInstanceState"))(this, anyType);
}

static inline void ThirdPartyInApplicationPurchaseInterface_onStop(void* this) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->onStop)) java_method_of(this, "onStop"))(this);
}

static inline void ThirdPartyInApplicationPurchaseInterface_requestPurchase(void* this, LockableFeature* lockableFeature) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->requestPurchase)) java_method_of(this, "requestPurchase"))(this, lockableFeature);
}

static inline void ThirdPartyInApplicationPurchaseInterface_requestReceipts(void* this) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->requestReceipts)) java_method_of(this, "requestReceipts"))(this);
}

static inline void ThirdPartyInApplicationPurchaseInterface_add(void* this, LockableFeature* lockableFeature) {
    ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->add)) java_method_of(this, "add"))(this, lockableFeature);
}

static inline const char* ThirdPartyInApplicationPurchaseInterface_getUserName(void* this) {
    return ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->getUserName)) java_method_of(this, "getUserName"))(this);
}

static inline bool ThirdPartyInApplicationPurchaseInterface_isEnabled(void* this) {
    return ((__typeof__(((ThirdPartyInApplicationPurchaseInterface*) nullptr)->isEnabled)) java_method_of(this, "isEnabled"))(this);
}


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_THIRDPARTYINAPPLICATIONPURCHASEINTERFACE_H
