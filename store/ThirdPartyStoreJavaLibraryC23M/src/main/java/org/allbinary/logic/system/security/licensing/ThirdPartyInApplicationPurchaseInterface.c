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

typedef struct ThirdPartyInApplicationPurchaseInterface ThirdPartyInApplicationPurchaseInterface;
struct ThirdPartyInApplicationPurchaseInterface {
    bool (*isPurchased)(void* this, LockableFeature* lockableFeature);
    void (*onCreate)(void* this, Any* anyType, Any* stateObject);
    void (*onDestroy)(void* this);
    void (*onStart)(void* this);
    void (*onActivityResult)(void* this, int32_t requestCode, int32_t resultCode, Any* dataObject);
    void (*onSaveInstanceState)(void* this, Any* anyType);
    void (*onStop)(void* this);
    void (*requestPurchase)(void* this, LockableFeature* lockableFeature);
    void (*requestReceipts)(void* this);
    void (*add)(void* this, LockableFeature* lockableFeature);
    const char* (*getUserName)(void* this);
    bool (*isEnabled)(void* this);
};


