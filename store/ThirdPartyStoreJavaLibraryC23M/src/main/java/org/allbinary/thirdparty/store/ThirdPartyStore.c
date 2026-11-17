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
// package org.allbinary.thirdparty.store

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

typedef struct ThirdPartyStore ThirdPartyStore;
struct ThirdPartyStore {
    bool authorized;
    const char* name;
};


ThirdPartyStore* ThirdPartyStore_new(const char* name);

void ThirdPartyStore_init(ThirdPartyStore* this, const char* name);
void ThirdPartyStore_authorize(ThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface);
bool ThirdPartyStore_isAuthorized(ThirdPartyStore* this);
void ThirdPartyStore_setAuthorized(ThirdPartyStore* this, bool authorized);
const char* ThirdPartyStore_getName(ThirdPartyStore* this);

static void ThirdPartyStore_initFields(ThirdPartyStore* this) {
    this->authorized = false;
    
}


void ThirdPartyStore_init(ThirdPartyStore* this, const char* name) {
    ThirdPartyStore_initFields(this);
        this->name = name;
}

ThirdPartyStore* ThirdPartyStore_new(const char* name) {
    ThirdPartyStore* this = calloc(1, sizeof(ThirdPartyStore));
    ThirdPartyStore_init(this, name);
    return this;
}


void ThirdPartyStore_authorize(ThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface) {
}


bool ThirdPartyStore_isAuthorized(ThirdPartyStore* this) {
        return this->authorized;
}


void ThirdPartyStore_setAuthorized(ThirdPartyStore* this, bool authorized) {
        this->authorized = authorized;
}


const char* ThirdPartyStore_getName(ThirdPartyStore* this) {
        return this->name;
}

