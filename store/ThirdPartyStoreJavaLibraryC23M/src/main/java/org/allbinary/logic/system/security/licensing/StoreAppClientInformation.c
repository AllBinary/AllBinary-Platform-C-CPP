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
#include "org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"

typedef struct StoreAppClientInformation StoreAppClientInformation;
struct StoreAppClientInformation {
    AbeClientInformation base;
    LongArrayIdentifierInterface LongArrayIdentifierInterface_interface;
    int64_t* longArrayIdentifier;
};


StoreAppClientInformation* StoreAppClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier);

void StoreAppClientInformation_init(StoreAppClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier);
int64_t* StoreAppClientInformation_getLongArrayIdentifier(StoreAppClientInformation* this);

static void StoreAppClientInformation_initFields(StoreAppClientInformation* this) {
    
}


void StoreAppClientInformation_init(StoreAppClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier) {
        AbeClientInformation_init(&this->base, name, version, specialName, shortName);
        StoreAppClientInformation_initFields(this);
        this->longArrayIdentifier = longArrayIdentifier;
}

StoreAppClientInformation* StoreAppClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier) {
    StoreAppClientInformation* this = calloc(1, sizeof(StoreAppClientInformation));
    StoreAppClientInformation_init(this, name, version, specialName, shortName, longArrayIdentifier);
    return this;
}


int64_t* StoreAppClientInformation_getLongArrayIdentifier(StoreAppClientInformation* this) {
        return this->longArrayIdentifier;
}

