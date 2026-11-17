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
// package org.allbinary.business.user.modules.customer.affiliate

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/advertisement/affiliate/sales/AffiliateSales.h"
#include "org/allbinary/business/user/modules/User.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"

typedef struct AffiliateUser AffiliateUser;
struct AffiliateUser {
    User base;
    AffiliateSales* affiliateSales;
};


AffiliateUser* AffiliateUser_new(void);

void AffiliateUser_init(AffiliateUser* this);

AffiliateUser* AffiliateUser_new1(HashMap* userHashMap);
void AffiliateUser_init1(AffiliateUser* this, HashMap* userHashMap);
void AffiliateUser_validateSession(AffiliateUser* this, WeblisketSessionInterface* weblisketSession);
void AffiliateUser_updateSession(AffiliateUser* this, WeblisketSessionInterface* weblisketSession);
bool AffiliateUser_isSessionValid(AffiliateUser* this);

static void AffiliateUser_initFields(AffiliateUser* this) {
    
}


void AffiliateUser_init(AffiliateUser* this) {
        User_init(&this->base);
        AffiliateUser_initFields(this);
        this->affiliateSales = AffiliateSales_new();
}

AffiliateUser* AffiliateUser_new(void) {
    AffiliateUser* this = calloc(1, sizeof(AffiliateUser));
    AffiliateUser_init(this);
    return this;
}


void AffiliateUser_init1(AffiliateUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
        AffiliateUser_initFields(this);
        this->affiliateSales = AffiliateSales_new();
}

AffiliateUser* AffiliateUser_new1(HashMap* userHashMap) {
    AffiliateUser* this = calloc(1, sizeof(AffiliateUser));
    AffiliateUser_init1(this, userHashMap);
    return this;
}


void AffiliateUser_validateSession(AffiliateUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        AffiliateUser_updateSession(this, weblisketSession);
}


void AffiliateUser_updateSession(AffiliateUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, AffiliateUser_getPermissions(this));
}


bool AffiliateUser_isSessionValid(AffiliateUser* this) {
        return AffiliateSales_isValid(this->affiliateSales);
}

