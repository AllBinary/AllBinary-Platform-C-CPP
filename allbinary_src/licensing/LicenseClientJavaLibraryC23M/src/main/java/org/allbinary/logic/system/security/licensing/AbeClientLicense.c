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
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"

typedef struct AbeClientLicense AbeClientLicense;
struct AbeClientLicense {
    AbeLicenseInterface AbeLicenseInterface_interface;
    ABHashtable* hashtable;
    const char* id;
    BasicArrayList* servers;
    const char* special;
    LicenseType* licenseType;
};


AbeClientLicense* AbeClientLicense_new(ABHashtable* hashtable);

void AbeClientLicense_init(AbeClientLicense* this, ABHashtable* hashtable);
bool AbeClientLicense_hasRequiredKeys(ABHashtable* resultHashtable);
bool AbeClientLicense_hasKey(AbeClientLicense* this);
const char* AbeClientLicense_getKey(AbeClientLicense* this, const char* keyName);
const char* AbeClientLicense_getLicenseId(AbeClientLicense* this);
BasicArrayList* AbeClientLicense_getServers(AbeClientLicense* this);
bool AbeClientLicense_isValid(AbeClientLicense* this);
const char* AbeClientLicense_toString(AbeClientLicense* this);
static void AbeClientLicense_setSpecial(AbeClientLicense* this, const char* special);
const char* AbeClientLicense_getSpecial(AbeClientLicense* this);
LicenseType* AbeClientLicense_getLicenseType(AbeClientLicense* this);

static void AbeClientLicense_initFields(AbeClientLicense* this) {
    
    
    
    this->special = nullptr;
    
}


void AbeClientLicense_init(AbeClientLicense* this, ABHashtable* hashtable) {
    AbeClientLicense_initFields(this);
        this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
        AbeClientInformationData* abeClientInformationData = AbeClientInformationData_getInstance();
        Any* keyValue = ABHashtable_get(hashtable, abeClientInformationData->KEY);
        if (keyValue != nullptr) {
            if (java_instanceof(keyValue, "String")) {
                ABHashtable_put(this->hashtable, abeClientInformationData->KEY, keyValue);
            }
        }
        this->id = ((const char*) ABHashtable_get(hashtable, abeClientInformationData->LICENSEID));
        BasicArrayList* vector = ((BasicArrayList*) ABHashtable_get(hashtable, abeClientInformationData->LICENSESERVERS));
        this->servers = BasicArrayListD_new();
        int32_t size = BasicArrayList_size(vector);
        for (int32_t index = 0; index < size; index++) {
            BasicArrayList_add(this->servers, BasicArrayList_get(vector, index));
        }
        StringUtil* stringUtil = StringUtil_getInstance();
        AbeClientLicense_setSpecial(this, StringUtil_getNonNull(stringUtil, ((const char*) ABHashtable_get(hashtable, abeClientInformationData->SPECIAL))));
        const char* licenseTypeString = StringUtil_getNonNull(stringUtil, ((const char*) ABHashtable_get(hashtable, abeClientInformationData->LICENSE_TYPE)));
        this->licenseType = LicenseTypeFactory_getInstance(LicenseTypeFactory_getInstance(), licenseTypeString);
}

AbeClientLicense* AbeClientLicense_new(ABHashtable* hashtable) {
    AbeClientLicense* this = calloc(1, sizeof(AbeClientLicense));
    AbeClientLicense_init(this, hashtable);
    return this;
}


bool AbeClientLicense_hasRequiredKeys(ABHashtable* resultHashtable) {
        AbeClientInformationData* abeClientInformationData = AbeClientInformationData_getInstance();
        if (ABHashtable_containsKey(resultHashtable, abeClientInformationData->LICENSEID) && ABHashtable_containsKey(resultHashtable, abeClientInformationData->LICENSESERVERS) && ABHashtable_containsKey(resultHashtable, abeClientInformationData->KEY) && ABHashtable_containsKey(resultHashtable, abeClientInformationData->LICENSE_TYPE)) {
            return true;
        } else {
            return false;
        }
}


bool AbeClientLicense_hasKey(AbeClientLicense* this) {
        return AbeClientLicense_isValid(this);
}


const char* AbeClientLicense_getKey(AbeClientLicense* this, const char* keyName) {
        return ((const char*) ABHashtable_get(this->hashtable, keyName));
}


const char* AbeClientLicense_getLicenseId(AbeClientLicense* this) {
        return this->id;
}


BasicArrayList* AbeClientLicense_getServers(AbeClientLicense* this) {
        return this->servers;
}


bool AbeClientLicense_isValid(AbeClientLicense* this) {
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        if (!StringValidationUtil_isEmpty(stringValidationUtil, AbeClientLicense_getKey(this, AbeClientInformationData_getInstance()->KEY))) {
            return true;
        }
        return false;
}


const char* AbeClientLicense_toString(AbeClientLicense* this) {
        StringMaker* stringBuffer = StringMaker_new();
        const char* BREAK = "<br/>";
        StringMaker_append(stringBuffer, "License Id: ");
        StringMaker_append(stringBuffer, AbeClientLicense_getLicenseId(this));
        StringMaker_append(stringBuffer, BREAK);
        StringMaker_append(stringBuffer, "Is Valid: ");
        StringMaker_appendboolean(stringBuffer, AbeClientLicense_isValid(this));
        StringMaker_append(stringBuffer, BREAK);
        StringMaker_append(stringBuffer, "Keys: ");
        StringMaker_append(stringBuffer, ABHashtable_toString(this->hashtable));
        StringMaker_append(stringBuffer, BREAK);
        BasicArrayList* serverVector = AbeClientLicense_getServers(this);
        int32_t size = BasicArrayList_size(serverVector);
        for (int32_t index = 0; index < size; index++) {
            const char* nextServerString = ((const char*) BasicArrayList_get(serverVector, index));
            StringMaker_append(stringBuffer, "Server: ");
            StringMaker_append(stringBuffer, nextServerString);
            StringMaker_append(stringBuffer, BREAK);
        }
        return StringMaker_toString(stringBuffer);
}


static void AbeClientLicense_setSpecial(AbeClientLicense* this, const char* special) {
        this->special = special;
}


const char* AbeClientLicense_getSpecial(AbeClientLicense* this) {
        return this->special;
}


LicenseType* AbeClientLicense_getLicenseType(AbeClientLicense* this) {
        return this->licenseType;
}

