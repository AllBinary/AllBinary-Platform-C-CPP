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
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"
#include "org/allbinary/thirdparty/store/ThirdPartyStore.h"

typedef struct NoThirdPartyStore NoThirdPartyStore;
struct NoThirdPartyStore {
    ThirdPartyStore base;
};


NoThirdPartyStore* NoThirdPartyStore_new(void);

void NoThirdPartyStore_init(NoThirdPartyStore* this);
void NoThirdPartyStore_authorize(NoThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface);


void NoThirdPartyStore_init(NoThirdPartyStore* this) {
        ThirdPartyStore_init(&this->base, StringUtil_getInstance()->EMPTY_STRING);
}

NoThirdPartyStore* NoThirdPartyStore_new(void) {
    NoThirdPartyStore* this = calloc(1, sizeof(NoThirdPartyStore));
    NoThirdPartyStore_init(this);
    return this;
}


void NoThirdPartyStore_authorize(NoThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface) {
        NoThirdPartyStore_setAuthorized(this, true);
}

