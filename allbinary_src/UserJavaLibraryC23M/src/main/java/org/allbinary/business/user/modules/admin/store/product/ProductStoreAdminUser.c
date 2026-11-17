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
// package org.allbinary.business.user.modules.admin.store.product

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

typedef struct ProductStoreAdminUser ProductStoreAdminUser;
struct ProductStoreAdminUser {
    User base;
};


ProductStoreAdminUser* ProductStoreAdminUser_new(void);

void ProductStoreAdminUser_init(ProductStoreAdminUser* this);

ProductStoreAdminUser* ProductStoreAdminUser_new1(HashMap* userHashMap);
void ProductStoreAdminUser_init1(ProductStoreAdminUser* this, HashMap* userHashMap);
void ProductStoreAdminUser_validateSession(ProductStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void ProductStoreAdminUser_updateSession(ProductStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void ProductStoreAdminUser_init(ProductStoreAdminUser* this) {
        User_init(&this->base);
}

ProductStoreAdminUser* ProductStoreAdminUser_new(void) {
    ProductStoreAdminUser* this = calloc(1, sizeof(ProductStoreAdminUser));
    ProductStoreAdminUser_init(this);
    return this;
}


void ProductStoreAdminUser_init1(ProductStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

ProductStoreAdminUser* ProductStoreAdminUser_new1(HashMap* userHashMap) {
    ProductStoreAdminUser* this = calloc(1, sizeof(ProductStoreAdminUser));
    ProductStoreAdminUser_init1(this, userHashMap);
    return this;
}


void ProductStoreAdminUser_validateSession(ProductStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        ProductStoreAdminUser_updateSession(this, weblisketSession);
}


void ProductStoreAdminUser_updateSession(ProductStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, ProductStoreAdminUser_getPermissions(this));
}

