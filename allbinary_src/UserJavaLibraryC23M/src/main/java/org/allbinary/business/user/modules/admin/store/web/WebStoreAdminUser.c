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
// package org.allbinary.business.user.modules.admin.store.web

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

typedef struct WebStoreAdminUser WebStoreAdminUser;
struct WebStoreAdminUser {
    User base;
};


WebStoreAdminUser* WebStoreAdminUser_new(void);

void WebStoreAdminUser_init(WebStoreAdminUser* this);

WebStoreAdminUser* WebStoreAdminUser_new1(HashMap* userHashMap);
void WebStoreAdminUser_init1(WebStoreAdminUser* this, HashMap* userHashMap);
void WebStoreAdminUser_validateSession(WebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void WebStoreAdminUser_updateSession(WebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void WebStoreAdminUser_init(WebStoreAdminUser* this) {
        User_init(&this->base);
}

WebStoreAdminUser* WebStoreAdminUser_new(void) {
    WebStoreAdminUser* this = calloc(1, sizeof(WebStoreAdminUser));
    WebStoreAdminUser_init(this);
    return this;
}


void WebStoreAdminUser_init1(WebStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

WebStoreAdminUser* WebStoreAdminUser_new1(HashMap* userHashMap) {
    WebStoreAdminUser* this = calloc(1, sizeof(WebStoreAdminUser));
    WebStoreAdminUser_init1(this, userHashMap);
    return this;
}


void WebStoreAdminUser_validateSession(WebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        WebStoreAdminUser_updateSession(this, weblisketSession);
}


void WebStoreAdminUser_updateSession(WebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, WebStoreAdminUser_getPermissions(this));
}

