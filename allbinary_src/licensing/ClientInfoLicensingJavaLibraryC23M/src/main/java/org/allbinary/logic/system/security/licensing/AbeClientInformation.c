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
#include "org/allbinary/business/init/LicenseInitInfo.h"
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/logic/system/os/OperatingSystemFactory.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/system/security/licensing/ClientInformation.h"

// This is the information sent to the license server
typedef struct AbeClientInformation AbeClientInformation;
struct AbeClientInformation {
    ClientInformation base;
    LogUtil* logUtil;
};


AbeClientInformation* AbeClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName);

void AbeClientInformation_init(AbeClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName);
void AbeClientInformation_init(AbeClientInformation* this);

static void AbeClientInformation_initFields(AbeClientInformation* this) {
    this->logUtil = LogUtil_getInstance();
}


void AbeClientInformation_init(AbeClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName) {
        ClientInformation_init(&this->base, name, version, specialName, shortName);
        AbeClientInformation_initFields(this);
}

AbeClientInformation* AbeClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName) {
    AbeClientInformation* this = calloc(1, sizeof(AbeClientInformation));
    AbeClientInformation_init(this, name, version, specialName, shortName);
    return this;
}


void AbeClientInformation_init(AbeClientInformation* this) {
        JAVA_TRY {
            AbeClientInformation_setOperatingSystemInterface(this, OperatingSystemFactory_getOperatingSystemInstance(OperatingSystemFactory_getInstance()));
            LicenseInitInfo* licenseInitInfo = LicenseInitInfoUtil_read(LicenseInitInfoUtil_getInstance());
            AbeClientInformation_setLicenseId(this, LicenseInitInfo_getLicenseId(licenseInitInfo));
            AbeClientInformation_setLicenseServers(this, LicenseInitInfo_getServerList(licenseInitInfo));
            StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
            if (StringValidationUtil_isEmpty(stringValidationUtil, AbeClientInformation_getLicenseId(this))) {
                const char* NONE = "No License Id";
                AbeClientInformation_setLicenseId(this, NONE);
            }
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Special Name: "), append, AbeClientInformation_getSpecialName(this)), toString), this, commonStrings->CONSTRUCTOR);
        } JAVA_CATCH(Exception, e) {
            LogUtil* logUtil = LogUtil_getInstance();
            CommonStrings* commonStrings = CommonStrings_getInstance();
            LogUtil_put(logUtil, commonStrings->EXCEPTION, this, commonStrings->CONSTRUCTOR, e);
        } JAVA_END_TRY;
}

