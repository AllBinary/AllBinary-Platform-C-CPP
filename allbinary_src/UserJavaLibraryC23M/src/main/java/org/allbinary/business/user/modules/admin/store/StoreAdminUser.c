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
// package org.allbinary.business.user.modules.admin.store

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

typedef struct StoreAdminUser StoreAdminUser;
struct StoreAdminUser {
    User base;
};


StoreAdminUser* StoreAdminUser_new(void);

void StoreAdminUser_init(StoreAdminUser* this);

StoreAdminUser* StoreAdminUser_new1(HashMap* userHashMap);
void StoreAdminUser_init1(StoreAdminUser* this, HashMap* userHashMap);
void StoreAdminUser_validateSession(StoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void StoreAdminUser_updateSession(StoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void StoreAdminUser_init(StoreAdminUser* this) {
        User_init(&this->base);
}

StoreAdminUser* StoreAdminUser_new(void) {
    StoreAdminUser* this = calloc(1, sizeof(StoreAdminUser));
    StoreAdminUser_init(this);
    return this;
}


void StoreAdminUser_init1(StoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

StoreAdminUser* StoreAdminUser_new1(HashMap* userHashMap) {
    StoreAdminUser* this = calloc(1, sizeof(StoreAdminUser));
    StoreAdminUser_init1(this, userHashMap);
    return this;
}


void StoreAdminUser_validateSession(StoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        StoreAdminUser_updateSession(this, weblisketSession);
}


void StoreAdminUser_updateSession(StoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, StoreAdminUser_getPermissions(this));
}

