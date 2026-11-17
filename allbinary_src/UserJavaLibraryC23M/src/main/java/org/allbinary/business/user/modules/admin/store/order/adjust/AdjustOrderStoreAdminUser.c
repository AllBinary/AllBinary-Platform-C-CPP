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
// package org.allbinary.business.user.modules.admin.store.order.adjust

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

typedef struct AdjustOrderStoreAdminUser AdjustOrderStoreAdminUser;
struct AdjustOrderStoreAdminUser {
    User base;
};


AdjustOrderStoreAdminUser* AdjustOrderStoreAdminUser_new(void);

void AdjustOrderStoreAdminUser_init(AdjustOrderStoreAdminUser* this);

AdjustOrderStoreAdminUser* AdjustOrderStoreAdminUser_new1(HashMap* userHashMap);
void AdjustOrderStoreAdminUser_init1(AdjustOrderStoreAdminUser* this, HashMap* userHashMap);
void AdjustOrderStoreAdminUser_validateSession(AdjustOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void AdjustOrderStoreAdminUser_updateSession(AdjustOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void AdjustOrderStoreAdminUser_init(AdjustOrderStoreAdminUser* this) {
        User_init(&this->base);
}

AdjustOrderStoreAdminUser* AdjustOrderStoreAdminUser_new(void) {
    AdjustOrderStoreAdminUser* this = calloc(1, sizeof(AdjustOrderStoreAdminUser));
    AdjustOrderStoreAdminUser_init(this);
    return this;
}


void AdjustOrderStoreAdminUser_init1(AdjustOrderStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

AdjustOrderStoreAdminUser* AdjustOrderStoreAdminUser_new1(HashMap* userHashMap) {
    AdjustOrderStoreAdminUser* this = calloc(1, sizeof(AdjustOrderStoreAdminUser));
    AdjustOrderStoreAdminUser_init1(this, userHashMap);
    return this;
}


void AdjustOrderStoreAdminUser_validateSession(AdjustOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        AdjustOrderStoreAdminUser_updateSession(this, weblisketSession);
}


void AdjustOrderStoreAdminUser_updateSession(AdjustOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, AdjustOrderStoreAdminUser_getPermissions(this));
}

