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
// package org.allbinary.logic.system.security

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterfaceFactory.h"
#include "org/allbinary/logic/system/security/licensing/LicensingException.h"

typedef struct AbKeys AbKeys;
struct AbKeys {
    LogUtil* logUtil;
};

static AbKeys* AbKeys_instance;

AbKeys* AbKeys_new(void);
AbKeys* AbKeys_getInstance(void);

void AbKeys_init(AbKeys* this);
const char* AbKeys_getKey(AbKeys* this, AbeClientInformationInterface* abeClientInformation, const char* keyName);

// Static fields with runtime initializers: call this once at startup
void AbKeys_staticInit(void) {
    AbKeys_instance = AbKeys_new();
}

static void AbKeys_initFields(AbKeys* this) {
    this->logUtil = LogUtil_getInstance();
}


AbKeys* AbKeys_getInstance(void) {
        return AbKeys_instance;
}


void AbKeys_init(AbKeys* this) {
    AbKeys_initFields(this);
}

AbKeys* AbKeys_new(void) {
    AbKeys* this = calloc(1, sizeof(AbKeys));
    AbKeys_init(this);
    return this;
}


// throws LicensingException
// synchronized
const char* AbKeys_getKey(AbKeys* this, AbeClientInformationInterface* abeClientInformation, const char* keyName) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, java_concat("Getting Key: ", keyName), this, "getKey");
            if (strcmp(keyName, "DirectX 8") == 0 || strcmp(keyName, "DirectX") == 0 || strcmp(keyName, "Low Level") == 0 || strcmp(keyName, "System Drivers") == 0) {
                return "Temp For Input Library";
            }
            return JAVA_CALL(AbeLicenseInterfaceFactory_getLicenseInstance(AbeLicenseInterfaceFactory_getInstance(), abeClientInformation), getKey, keyName);
        } JAVA_CATCH(LicensingException, e) {
            java_throw(e);
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Licensing Failure", this, "getKey()", e);
            java_throw(java_exception_new("LicensingException", "Unknown License Failure"));
        } JAVA_END_TRY;
}

