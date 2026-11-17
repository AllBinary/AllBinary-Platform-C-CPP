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
// package org.allbinary.business.user.modules.admin.store.order

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

typedef struct OrderStoreAdminUser OrderStoreAdminUser;
struct OrderStoreAdminUser {
    User base;
};


OrderStoreAdminUser* OrderStoreAdminUser_new(void);

void OrderStoreAdminUser_init(OrderStoreAdminUser* this);

OrderStoreAdminUser* OrderStoreAdminUser_new1(HashMap* userHashMap);
void OrderStoreAdminUser_init1(OrderStoreAdminUser* this, HashMap* userHashMap);
void OrderStoreAdminUser_validateSession(OrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void OrderStoreAdminUser_updateSession(OrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void OrderStoreAdminUser_init(OrderStoreAdminUser* this) {
        User_init(&this->base);
}

OrderStoreAdminUser* OrderStoreAdminUser_new(void) {
    OrderStoreAdminUser* this = calloc(1, sizeof(OrderStoreAdminUser));
    OrderStoreAdminUser_init(this);
    return this;
}


void OrderStoreAdminUser_init1(OrderStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

OrderStoreAdminUser* OrderStoreAdminUser_new1(HashMap* userHashMap) {
    OrderStoreAdminUser* this = calloc(1, sizeof(OrderStoreAdminUser));
    OrderStoreAdminUser_init1(this, userHashMap);
    return this;
}


void OrderStoreAdminUser_validateSession(OrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        OrderStoreAdminUser_updateSession(this, weblisketSession);
}


void OrderStoreAdminUser_updateSession(OrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, OrderStoreAdminUser_getPermissions(this));
}

