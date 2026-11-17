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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/ThirdPartyInApplicationPurchaseInterface.h"

typedef struct ThirdPartyInApplicationPurchase ThirdPartyInApplicationPurchase;
struct ThirdPartyInApplicationPurchase {
    ThirdPartyInApplicationPurchaseInterface ThirdPartyInApplicationPurchaseInterface_interface;
};


ThirdPartyInApplicationPurchase* ThirdPartyInApplicationPurchase_new(void);
bool ThirdPartyInApplicationPurchase_isPurchased(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature);
void ThirdPartyInApplicationPurchase_onCreate(ThirdPartyInApplicationPurchase* this, Any* anyType, Any* stateObject);
void ThirdPartyInApplicationPurchase_onDestroy(ThirdPartyInApplicationPurchase* this);
void ThirdPartyInApplicationPurchase_onStart(ThirdPartyInApplicationPurchase* this);
void ThirdPartyInApplicationPurchase_onActivityResult(ThirdPartyInApplicationPurchase* this, int32_t requestCode, int32_t resultCode, Any* dataObject);
void ThirdPartyInApplicationPurchase_onSaveInstanceState(ThirdPartyInApplicationPurchase* this, Any* anyType);
void ThirdPartyInApplicationPurchase_onStop(ThirdPartyInApplicationPurchase* this);
void ThirdPartyInApplicationPurchase_requestPurchase(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature);
void ThirdPartyInApplicationPurchase_requestReceipts(ThirdPartyInApplicationPurchase* this);
void ThirdPartyInApplicationPurchase_add(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature);
const char* ThirdPartyInApplicationPurchase_getUserName(ThirdPartyInApplicationPurchase* this);
bool ThirdPartyInApplicationPurchase_isEnabled(ThirdPartyInApplicationPurchase* this);
void ThirdPartyInApplicationPurchase_requestProducts(ThirdPartyInApplicationPurchase* this);

void ThirdPartyInApplicationPurchase_init(ThirdPartyInApplicationPurchase* this) {
}

ThirdPartyInApplicationPurchase* ThirdPartyInApplicationPurchase_new(void) {
    ThirdPartyInApplicationPurchase* this = calloc(1, sizeof(ThirdPartyInApplicationPurchase));
    ThirdPartyInApplicationPurchase_init(this);
    return this;
}


bool ThirdPartyInApplicationPurchase_isPurchased(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature) {
        return false;
}


void ThirdPartyInApplicationPurchase_onCreate(ThirdPartyInApplicationPurchase* this, Any* anyType, Any* stateObject) {
}


void ThirdPartyInApplicationPurchase_onDestroy(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_onStart(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_onActivityResult(ThirdPartyInApplicationPurchase* this, int32_t requestCode, int32_t resultCode, Any* dataObject) {
}


void ThirdPartyInApplicationPurchase_onSaveInstanceState(ThirdPartyInApplicationPurchase* this, Any* anyType) {
}


void ThirdPartyInApplicationPurchase_onStop(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_requestPurchase(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature) {
}


void ThirdPartyInApplicationPurchase_requestReceipts(ThirdPartyInApplicationPurchase* this) {
}


void ThirdPartyInApplicationPurchase_add(ThirdPartyInApplicationPurchase* this, LockableFeature* lockableFeature) {
}


const char* ThirdPartyInApplicationPurchase_getUserName(ThirdPartyInApplicationPurchase* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


bool ThirdPartyInApplicationPurchase_isEnabled(ThirdPartyInApplicationPurchase* this) {
        return false;
}


void ThirdPartyInApplicationPurchase_requestProducts(ThirdPartyInApplicationPurchase* this) {
}

