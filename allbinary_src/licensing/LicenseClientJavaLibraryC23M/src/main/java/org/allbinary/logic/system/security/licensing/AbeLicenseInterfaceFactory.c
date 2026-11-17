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
// #include "java/io/IOException.h"
// #include "java/util/Calendar.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/system/security/licensing/client/AbeLicenseClient.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AbeLicenseInterfaceFactory AbeLicenseInterfaceFactory;
struct AbeLicenseInterfaceFactory {
    LogUtil* logUtil;
    CommonStrings* commonStrings;
    int64_t time;
    bool check;
    int32_t checkPeriod;
    AbeLicenseInterface* abeLicenseInterface;
};

static AbeLicenseInterfaceFactory* AbeLicenseInterfaceFactory_SINGLETON;

AbeLicenseInterfaceFactory* AbeLicenseInterfaceFactory_new(void);
AbeLicenseInterfaceFactory* AbeLicenseInterfaceFactory_getInstance(void);

void AbeLicenseInterfaceFactory_init(AbeLicenseInterfaceFactory* this);
AbeLicenseInterface* AbeLicenseInterfaceFactory_getLicenseInstance(AbeLicenseInterfaceFactory* this, AbeClientInformationInterface* abeClientInformation);
static AbeLicenseInterface* AbeLicenseInterfaceFactory_get(AbeLicenseInterfaceFactory* this, AbeClientInformationInterface* abeClientInformation);
static bool AbeLicenseInterfaceFactory_isTimeToGetKey(AbeLicenseInterfaceFactory* this);
void AbeLicenseInterfaceFactory_setCheck(AbeLicenseInterfaceFactory* this, bool check);
static bool AbeLicenseInterfaceFactory_isCheck(AbeLicenseInterfaceFactory* this);

// Static fields with runtime initializers: call this once at startup
void AbeLicenseInterfaceFactory_staticInit(void) {
    AbeLicenseInterfaceFactory_SINGLETON = AbeLicenseInterfaceFactory_new();
}

static void AbeLicenseInterfaceFactory_initFields(AbeLicenseInterfaceFactory* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
    this->time = 0LL;
    this->check = false;
    this->checkPeriod = 36000000;
    this->abeLicenseInterface = nullptr;
}


AbeLicenseInterfaceFactory* AbeLicenseInterfaceFactory_getInstance(void) {
        return AbeLicenseInterfaceFactory_SINGLETON;
}


void AbeLicenseInterfaceFactory_init(AbeLicenseInterfaceFactory* this) {
    AbeLicenseInterfaceFactory_initFields(this);
}

AbeLicenseInterfaceFactory* AbeLicenseInterfaceFactory_new(void) {
    AbeLicenseInterfaceFactory* this = calloc(1, sizeof(AbeLicenseInterfaceFactory));
    AbeLicenseInterfaceFactory_init(this);
    return this;
}


// throws LicensingException
AbeLicenseInterface* AbeLicenseInterfaceFactory_getLicenseInstance(AbeLicenseInterfaceFactory* this, AbeClientInformationInterface* abeClientInformation) {
        if (AbeLicenseInterfaceFactory_isTimeToGetKey(this)) {
            return AbeLicenseInterfaceFactory_get(this, abeClientInformation);
        } else {
            return this->abeLicenseInterface;
        }
}


// throws LicensingException
static AbeLicenseInterface* AbeLicenseInterfaceFactory_get(AbeLicenseInterfaceFactory* this, AbeClientInformationInterface* abeClientInformation) {
        JAVA_TRY {
            LogUtil_putF(this->logUtil, "Getting Keys", this, this->commonStrings->GET);
            this->abeLicenseInterface = AbeNoLicense_getInstance();
            AbeLicenseClient* licenseClient = AbeLicenseClient_new();
            this->abeLicenseInterface = AbeLicenseClient_get(licenseClient, abeClientInformation);
            if (this->abeLicenseInterface != nullptr) {
                LogUtil_putF(this->logUtil, java_concat("Default Key: ", java_string_of(AbeLicenseInterface_getKey(this->abeLicenseInterface, AbeClientInformationData_getInstance()->KEY))), this, this->commonStrings->GET);
            }
            return this->abeLicenseInterface;
        } JAVA_CATCH(IOException, e) {
            LogUtil_put(this->logUtil, "Licensing IO Error", this, this->commonStrings->GET, e);
            java_throw(java_exception_new("LicensingException", "License Server Connection Error"));
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->logUtil, "Licensing Failure", this, this->commonStrings->GET, e);
            java_throw(java_exception_new("LicensingException", java_concat("Unknown License Failure: ", java_class_of(this))));
        } JAVA_END_TRY;
}


static bool AbeLicenseInterfaceFactory_isTimeToGetKey(AbeLicenseInterfaceFactory* this) {
        Calendar* calendar = Calendar_getInstance();
        int64_t currentTime = Calendar_getTimeInMillis(calendar);
        if (this->abeLicenseInterface == nullptr || this->abeLicenseInterface == AbeNoLicense_getInstance() || !AbeLicenseInterface_hasKey(this->abeLicenseInterface) || AbeLicenseInterfaceFactory_isCheck(this) || currentTime - ((int64_t) this->checkPeriod) > this->time) {
            this->abeLicenseInterface = nullptr;
            this->time = currentTime;
            return true;
        } else {
            return false;
        }
}


void AbeLicenseInterfaceFactory_setCheck(AbeLicenseInterfaceFactory* this, bool check) {
        this->check = check;
}


static bool AbeLicenseInterfaceFactory_isCheck(AbeLicenseInterfaceFactory* this) {
        return this->check;
}

