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
// package org.allbinary.business.user.modules.admin.store.order.review

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

typedef struct ReviewOrderStoreAdminUser ReviewOrderStoreAdminUser;
struct ReviewOrderStoreAdminUser {
    User base;
};


ReviewOrderStoreAdminUser* ReviewOrderStoreAdminUser_new(void);

void ReviewOrderStoreAdminUser_init(ReviewOrderStoreAdminUser* this);

ReviewOrderStoreAdminUser* ReviewOrderStoreAdminUser_new1(HashMap* userHashMap);
void ReviewOrderStoreAdminUser_init1(ReviewOrderStoreAdminUser* this, HashMap* userHashMap);
void ReviewOrderStoreAdminUser_validateSession(ReviewOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void ReviewOrderStoreAdminUser_updateSession(ReviewOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void ReviewOrderStoreAdminUser_init(ReviewOrderStoreAdminUser* this) {
        User_init(&this->base);
}

ReviewOrderStoreAdminUser* ReviewOrderStoreAdminUser_new(void) {
    ReviewOrderStoreAdminUser* this = calloc(1, sizeof(ReviewOrderStoreAdminUser));
    ReviewOrderStoreAdminUser_init(this);
    return this;
}


void ReviewOrderStoreAdminUser_init1(ReviewOrderStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

ReviewOrderStoreAdminUser* ReviewOrderStoreAdminUser_new1(HashMap* userHashMap) {
    ReviewOrderStoreAdminUser* this = calloc(1, sizeof(ReviewOrderStoreAdminUser));
    ReviewOrderStoreAdminUser_init1(this, userHashMap);
    return this;
}


void ReviewOrderStoreAdminUser_validateSession(ReviewOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        ReviewOrderStoreAdminUser_updateSession(this, weblisketSession);
}


void ReviewOrderStoreAdminUser_updateSession(ReviewOrderStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, ReviewOrderStoreAdminUser_getPermissions(this));
}

