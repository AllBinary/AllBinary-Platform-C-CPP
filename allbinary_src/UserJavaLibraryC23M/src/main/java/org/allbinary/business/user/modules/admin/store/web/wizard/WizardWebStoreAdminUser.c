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
// package org.allbinary.business.user.modules.admin.store.web.wizard

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

typedef struct WizardWebStoreAdminUser WizardWebStoreAdminUser;
struct WizardWebStoreAdminUser {
    User base;
};


WizardWebStoreAdminUser* WizardWebStoreAdminUser_new(void);

void WizardWebStoreAdminUser_init(WizardWebStoreAdminUser* this);

WizardWebStoreAdminUser* WizardWebStoreAdminUser_new1(HashMap* userHashMap);
void WizardWebStoreAdminUser_init1(WizardWebStoreAdminUser* this, HashMap* userHashMap);
void WizardWebStoreAdminUser_validateSession(WizardWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void WizardWebStoreAdminUser_updateSession(WizardWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void WizardWebStoreAdminUser_init(WizardWebStoreAdminUser* this) {
        User_init(&this->base);
}

WizardWebStoreAdminUser* WizardWebStoreAdminUser_new(void) {
    WizardWebStoreAdminUser* this = calloc(1, sizeof(WizardWebStoreAdminUser));
    WizardWebStoreAdminUser_init(this);
    return this;
}


void WizardWebStoreAdminUser_init1(WizardWebStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

WizardWebStoreAdminUser* WizardWebStoreAdminUser_new1(HashMap* userHashMap) {
    WizardWebStoreAdminUser* this = calloc(1, sizeof(WizardWebStoreAdminUser));
    WizardWebStoreAdminUser_init1(this, userHashMap);
    return this;
}


void WizardWebStoreAdminUser_validateSession(WizardWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        WizardWebStoreAdminUser_updateSession(this, weblisketSession);
}


void WizardWebStoreAdminUser_updateSession(WizardWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, WizardWebStoreAdminUser_getPermissions(this));
}

