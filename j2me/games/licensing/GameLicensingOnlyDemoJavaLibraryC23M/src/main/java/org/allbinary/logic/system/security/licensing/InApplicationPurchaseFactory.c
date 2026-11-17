/*
 * 
 * To change this license header, choose License Headers in Project Properties. 
 * To change this template file, choose Tools | Templates 
 * and open the template in the editor.  
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
#include "org/allbinary/logic/string/StringUtil.h"

typedef struct InApplicationPurchaseFactory InApplicationPurchaseFactory;
struct InApplicationPurchaseFactory {
    char unused;
};

static InApplicationPurchaseFactory* InApplicationPurchaseFactory_instance;

InApplicationPurchaseFactory* InApplicationPurchaseFactory_new(void);
InApplicationPurchaseFactory* InApplicationPurchaseFactory_getInstance(void);

void InApplicationPurchaseFactory_init(InApplicationPurchaseFactory* this);
void InApplicationPurchaseFactory_init(InApplicationPurchaseFactory* this, Any* anyType, Any* stateObject);
void InApplicationPurchaseFactory_onCreate(InApplicationPurchaseFactory* this, Any* anyType, Any* stateObject);
void InApplicationPurchaseFactory_onStart(InApplicationPurchaseFactory* this);
void InApplicationPurchaseFactory_onResult(InApplicationPurchaseFactory* this, int32_t requestCode, int32_t resultCode, Any* data);
void InApplicationPurchaseFactory_onSaveState(InApplicationPurchaseFactory* this, Any* anyType);
void InApplicationPurchaseFactory_onStop(InApplicationPurchaseFactory* this);
void InApplicationPurchaseFactory_onDestroy(InApplicationPurchaseFactory* this);
void InApplicationPurchaseFactory_purchase(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature);
bool InApplicationPurchaseFactory_isPurchased(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature);
void InApplicationPurchaseFactory_add(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature);
const char* InApplicationPurchaseFactory_getUserName(InApplicationPurchaseFactory* this);
bool InApplicationPurchaseFactory_isEnabled(InApplicationPurchaseFactory* this);

// Static fields with runtime initializers: call this once at startup
void InApplicationPurchaseFactory_staticInit(void) {
    InApplicationPurchaseFactory_instance = InApplicationPurchaseFactory_new();
}


InApplicationPurchaseFactory* InApplicationPurchaseFactory_getInstance(void) {
        return InApplicationPurchaseFactory_instance;
}


void InApplicationPurchaseFactory_init(InApplicationPurchaseFactory* this) {
}

InApplicationPurchaseFactory* InApplicationPurchaseFactory_new(void) {
    InApplicationPurchaseFactory* this = calloc(1, sizeof(InApplicationPurchaseFactory));
    InApplicationPurchaseFactory_init(this);
    return this;
}


void InApplicationPurchaseFactory_init(InApplicationPurchaseFactory* this, Any* anyType, Any* stateObject) {
}


void InApplicationPurchaseFactory_onCreate(InApplicationPurchaseFactory* this, Any* anyType, Any* stateObject) {
}


void InApplicationPurchaseFactory_onStart(InApplicationPurchaseFactory* this) {
}


void InApplicationPurchaseFactory_onResult(InApplicationPurchaseFactory* this, int32_t requestCode, int32_t resultCode, Any* data) {
}


void InApplicationPurchaseFactory_onSaveState(InApplicationPurchaseFactory* this, Any* anyType) {
}


void InApplicationPurchaseFactory_onStop(InApplicationPurchaseFactory* this) {
}


void InApplicationPurchaseFactory_onDestroy(InApplicationPurchaseFactory* this) {
}


void InApplicationPurchaseFactory_purchase(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature) {
}


bool InApplicationPurchaseFactory_isPurchased(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature) {
        return false;
}


void InApplicationPurchaseFactory_add(InApplicationPurchaseFactory* this, LockableFeature* lockableFeature) {
}


const char* InApplicationPurchaseFactory_getUserName(InApplicationPurchaseFactory* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool InApplicationPurchaseFactory_isEnabled(InApplicationPurchaseFactory* this) {
        return false;
}

