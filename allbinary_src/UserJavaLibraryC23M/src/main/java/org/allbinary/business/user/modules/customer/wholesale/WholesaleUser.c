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
// package org.allbinary.business.user.modules.customer.wholesale

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

typedef struct WholesaleUser WholesaleUser;
struct WholesaleUser {
    User base;
};


WholesaleUser* WholesaleUser_new(void);

void WholesaleUser_init(WholesaleUser* this);

WholesaleUser* WholesaleUser_new1(HashMap* userHashMap);
void WholesaleUser_init1(WholesaleUser* this, HashMap* userHashMap);
void WholesaleUser_validateSession(WholesaleUser* this, WeblisketSessionInterface* weblisketSession);
void WholesaleUser_updateSession(WholesaleUser* this, WeblisketSessionInterface* weblisketSession);


void WholesaleUser_init(WholesaleUser* this) {
        User_init(&this->base);
}

WholesaleUser* WholesaleUser_new(void) {
    WholesaleUser* this = calloc(1, sizeof(WholesaleUser));
    WholesaleUser_init(this);
    return this;
}


void WholesaleUser_init1(WholesaleUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

WholesaleUser* WholesaleUser_new1(HashMap* userHashMap) {
    WholesaleUser* this = calloc(1, sizeof(WholesaleUser));
    WholesaleUser_init1(this, userHashMap);
    return this;
}


void WholesaleUser_validateSession(WholesaleUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        WholesaleUser_updateSession(this, weblisketSession);
}


void WholesaleUser_updateSession(WholesaleUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, WholesaleUser_getPermissions(this));
}

