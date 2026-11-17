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
// package org.allbinary.business.user.modules.admin.store.customer

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

typedef struct CustomerStoreAdminUser CustomerStoreAdminUser;
struct CustomerStoreAdminUser {
    User base;
};


CustomerStoreAdminUser* CustomerStoreAdminUser_new(void);

void CustomerStoreAdminUser_init(CustomerStoreAdminUser* this);

CustomerStoreAdminUser* CustomerStoreAdminUser_new1(HashMap* userHashMap);
void CustomerStoreAdminUser_init1(CustomerStoreAdminUser* this, HashMap* userHashMap);
void CustomerStoreAdminUser_validateSession(CustomerStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void CustomerStoreAdminUser_updateSession(CustomerStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void CustomerStoreAdminUser_init(CustomerStoreAdminUser* this) {
        User_init(&this->base);
}

CustomerStoreAdminUser* CustomerStoreAdminUser_new(void) {
    CustomerStoreAdminUser* this = calloc(1, sizeof(CustomerStoreAdminUser));
    CustomerStoreAdminUser_init(this);
    return this;
}


void CustomerStoreAdminUser_init1(CustomerStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

CustomerStoreAdminUser* CustomerStoreAdminUser_new1(HashMap* userHashMap) {
    CustomerStoreAdminUser* this = calloc(1, sizeof(CustomerStoreAdminUser));
    CustomerStoreAdminUser_init1(this, userHashMap);
    return this;
}


void CustomerStoreAdminUser_validateSession(CustomerStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        CustomerStoreAdminUser_updateSession(this, weblisketSession);
}


void CustomerStoreAdminUser_updateSession(CustomerStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, CustomerStoreAdminUser_getPermissions(this));
}

