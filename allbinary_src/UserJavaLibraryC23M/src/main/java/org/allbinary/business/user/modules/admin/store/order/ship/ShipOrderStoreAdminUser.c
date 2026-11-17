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
// package org.allbinary.business.user.modules.admin.store.order.ship

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

typedef struct ShipOrderStoreAdminUser ShipOrderStoreAdminUser;
struct ShipOrderStoreAdminUser {
    User base;
};


ShipOrderStoreAdminUser* ShipOrderStoreAdminUser_new(void);

void ShipOrderStoreAdminUser_init(ShipOrderStoreAdminUser* this);

ShipOrderStoreAdminUser* ShipOrderStoreAdminUser_new1(HashMap* userHashMap);
void ShipOrderStoreAdminUser_init1(ShipOrderStoreAdminUser* this, HashMap* userHashMap);
void ShipOrderStoreAdminUser_validateSession(ShipOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void ShipOrderStoreAdminUser_updateSession(ShipOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void ShipOrderStoreAdminUser_init(ShipOrderStoreAdminUser* this) {
        User_init(&this->base);
}

ShipOrderStoreAdminUser* ShipOrderStoreAdminUser_new(void) {
    ShipOrderStoreAdminUser* this = calloc(1, sizeof(ShipOrderStoreAdminUser));
    ShipOrderStoreAdminUser_init(this);
    return this;
}


void ShipOrderStoreAdminUser_init1(ShipOrderStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

ShipOrderStoreAdminUser* ShipOrderStoreAdminUser_new1(HashMap* userHashMap) {
    ShipOrderStoreAdminUser* this = calloc(1, sizeof(ShipOrderStoreAdminUser));
    ShipOrderStoreAdminUser_init1(this, userHashMap);
    return this;
}


void ShipOrderStoreAdminUser_validateSession(ShipOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        ShipOrderStoreAdminUser_updateSession(this, weblisketSession);
}


void ShipOrderStoreAdminUser_updateSession(ShipOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, ShipOrderStoreAdminUser_getPermissions(this));
}

