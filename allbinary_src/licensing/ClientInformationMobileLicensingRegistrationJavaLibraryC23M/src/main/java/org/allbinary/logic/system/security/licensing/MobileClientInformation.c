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
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/system/security/licensing/registration/RegistrationConfiguration.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"

typedef struct MobileClientInformation MobileClientInformation;
struct MobileClientInformation {
    AbeClientInformation base;
};

const char* MobileClientInformation_DESC = "Mobile";
const char* MobileClientInformation_ANDROID_DESC;

MobileClientInformation* MobileClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName);

void MobileClientInformation_init(MobileClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName);
ABHashtable* MobileClientInformation_toHashtable(MobileClientInformation* this);

// Static fields with runtime initializers: call this once at startup
void MobileClientInformation_staticInit(void) {
    MobileClientInformation_ANDROID_DESC = java_concat("Android", java_string_of(MobileClientInformation_DESC));
}


void MobileClientInformation_init(MobileClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName) {
        AbeClientInformation_init(&this->base, name, version, JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), specialName), append, CommonSeps_getInstance()->SPACE), append, PartnerIdentifierFileUtil_get(PartnerIdentifierFileUtil_getInstance())), toString), shortName);
        const char* string = MobileClientInformation_getSpecialName(this);
        const char* number = java_substring(string, ((int32_t) strlen(string)) - 1, (int32_t) strlen(string));
        if (Integer_getInteger(number) == nullptr) {
            MobileClientInformation_setHardSale(this, false);
        }
        CommonStrings* commonStrings = CommonStrings_getInstance();
        if (MobileClientInformation_isHardSale(this)) {
            JAVA_CALL(this->logUtil, putF, "Use Hard Coded Selling", this, commonStrings->CONSTRUCTOR);
        } else {
            JAVA_CALL(this->logUtil, putF, "Don't Use Hard Coded Selling", this, commonStrings->CONSTRUCTOR);
        }
}

MobileClientInformation* MobileClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName) {
    MobileClientInformation* this = calloc(1, sizeof(MobileClientInformation));
    MobileClientInformation_init(this, name, version, specialName, shortName);
    return this;
}


ABHashtable* MobileClientInformation_toHashtable(MobileClientInformation* this) {
        ABHashtable* hashtable = AbeClientInformation_toHashtable((&this->base));
        RegistrationConfiguration* registrationConfiguration = RegistrationConfiguration_getInstance();
        ABHashtable_put(hashtable, registrationConfiguration->NAME, RegistrationConfiguration_getRegistrationCode(registrationConfiguration));
        return hashtable;
}

