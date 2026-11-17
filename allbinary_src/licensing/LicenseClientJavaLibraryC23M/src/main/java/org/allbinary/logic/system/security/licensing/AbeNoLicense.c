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
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/system/security/licensing/AbeLicenseInterface.h"

typedef struct AbeNoLicense AbeNoLicense;
struct AbeNoLicense {
    AbeLicenseInterface AbeLicenseInterface_interface;
    BasicArrayList* serverVector;
};

static AbeNoLicense* AbeNoLicense_abeNoLicense;

AbeNoLicense* AbeNoLicense_new(void);

void AbeNoLicense_init(AbeNoLicense* this);
AbeNoLicense* AbeNoLicense_getInstance(void);
bool AbeNoLicense_hasKey(AbeNoLicense* this);
const char* AbeNoLicense_getKey(AbeNoLicense* this, const char* keyName);
const char* AbeNoLicense_getLicenseId(AbeNoLicense* this);
const char* AbeNoLicense_getSpecial(AbeNoLicense* this);
BasicArrayList* AbeNoLicense_getServers(AbeNoLicense* this);
bool AbeNoLicense_isValid(AbeNoLicense* this);
LicenseType* AbeNoLicense_getLicenseType(AbeNoLicense* this);

// Static fields with runtime initializers: call this once at startup
void AbeNoLicense_staticInit(void) {
    AbeNoLicense_abeNoLicense = AbeNoLicense_new();
}

static void AbeNoLicense_initFields(AbeNoLicense* this) {
    this->serverVector = BasicArrayListD_new();
}


void AbeNoLicense_init(AbeNoLicense* this) {
    AbeNoLicense_initFields(this);
}

AbeNoLicense* AbeNoLicense_new(void) {
    AbeNoLicense* this = calloc(1, sizeof(AbeNoLicense));
    AbeNoLicense_init(this);
    return this;
}


AbeNoLicense* AbeNoLicense_getInstance(void) {
        return AbeNoLicense_abeNoLicense;
}


bool AbeNoLicense_hasKey(AbeNoLicense* this) {
        return false;
}


const char* AbeNoLicense_getKey(AbeNoLicense* this, const char* keyName) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* AbeNoLicense_getLicenseId(AbeNoLicense* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


const char* AbeNoLicense_getSpecial(AbeNoLicense* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}


BasicArrayList* AbeNoLicense_getServers(AbeNoLicense* this) {
        return this->serverVector;
}


bool AbeNoLicense_isValid(AbeNoLicense* this) {
        return false;
}


LicenseType* AbeNoLicense_getLicenseType(AbeNoLicense* this) {
        return LicenseTypeFactory_getInstance()->UNKNOWN;
}

