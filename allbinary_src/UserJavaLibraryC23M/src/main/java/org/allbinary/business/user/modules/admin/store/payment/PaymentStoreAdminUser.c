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
// package org.allbinary.business.user.modules.admin.store.payment

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/modules/User.h"
#include "org/allbinary/logic/communication/http/request/session/WeblisketSessionInterface.h"

typedef struct PaymentStoreAdminUser PaymentStoreAdminUser;
struct PaymentStoreAdminUser {
    User base;
};


PaymentStoreAdminUser* PaymentStoreAdminUser_new(void);

void PaymentStoreAdminUser_init(PaymentStoreAdminUser* this);

PaymentStoreAdminUser* PaymentStoreAdminUser_new1(HashMap* userHashMap);
void PaymentStoreAdminUser_init1(PaymentStoreAdminUser* this, HashMap* userHashMap);
void PaymentStoreAdminUser_validateSession(PaymentStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void PaymentStoreAdminUser_updateSession(PaymentStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void PaymentStoreAdminUser_init(PaymentStoreAdminUser* this) {
        User_init(&this->base);
}

PaymentStoreAdminUser* PaymentStoreAdminUser_new(void) {
    PaymentStoreAdminUser* this = calloc(1, sizeof(PaymentStoreAdminUser));
    PaymentStoreAdminUser_init(this);
    return this;
}


void PaymentStoreAdminUser_init1(PaymentStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

PaymentStoreAdminUser* PaymentStoreAdminUser_new1(HashMap* userHashMap) {
    PaymentStoreAdminUser* this = calloc(1, sizeof(PaymentStoreAdminUser));
    PaymentStoreAdminUser_init1(this, userHashMap);
    return this;
}


void PaymentStoreAdminUser_validateSession(PaymentStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        PaymentStoreAdminUser_updateSession(this, weblisketSession);
}


void PaymentStoreAdminUser_updateSession(PaymentStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, PaymentStoreAdminUser_getPermissions(this));
}

