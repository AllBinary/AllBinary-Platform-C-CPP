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
// package org.allbinary.logic.system.security.licensing.registration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/communication/log/PreLogUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/canvas/SpecialMessageUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/util/ABHashtable.h"

typedef struct LicenseRegistrationUtil LicenseRegistrationUtil;
struct LicenseRegistrationUtil {
    char unused;
};


LicenseRegistrationUtil* LicenseRegistrationUtil_new(void);

void LicenseRegistrationUtil_init(LicenseRegistrationUtil* this);
void LicenseRegistrationUtil_process(AbeClientInformationInterface* abeClientInformation, const char* registrationId);


void LicenseRegistrationUtil_init(LicenseRegistrationUtil* this) {
}

LicenseRegistrationUtil* LicenseRegistrationUtil_new(void) {
    LicenseRegistrationUtil* this = calloc(1, sizeof(LicenseRegistrationUtil));
    LicenseRegistrationUtil_init(this);
    return this;
}


// synchronized
void LicenseRegistrationUtil_process(AbeClientInformationInterface* abeClientInformation, const char* registrationId) {
        JAVA_TRY {
            CommonStrings* commonStrings = CommonStrings_getInstance();
            PreLogUtil_put(java_concat(java_string_of(CommonLabels_getInstance()->START_LABEL), "License Registration"), "LicenseRegistrationUtil", commonStrings->PROCESS);
            RegistrationConfiguration* registrationConfiguration = RegistrationConfiguration_getInstance();
            RegistrationConfiguration_setRegistrationCode(registrationConfiguration, registrationId);
            RegistrationConfiguration_write(registrationConfiguration);
            ABHashtable* hashtable = AbeClientInformationInterface_toHashtable(abeClientInformation);
            ABHashtable_put(hashtable, RegistrationConfiguration_getInstance()->NAME, registrationId);
            ABHashtable_put(hashtable, "message", SpecialMessageUtil_get(SpecialMessageUtil_getInstance()));
            XmlRpcRemoteLicenseRegistrationClient_get(XmlRpcRemoteLicenseRegistrationClient_new(abeClientInformation), hashtable);
        } JAVA_CATCH(Exception, e) {
            PreLogUtil_putOE("License Registration Exception", "LicenseRegistrationUtil", "License Registration", e);
        } JAVA_END_TRY;
}

