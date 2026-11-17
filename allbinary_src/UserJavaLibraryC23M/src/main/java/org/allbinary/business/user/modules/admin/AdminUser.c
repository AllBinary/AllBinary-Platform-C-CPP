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
// package org.allbinary.business.user.modules.admin

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

typedef struct AdminUser AdminUser;
struct AdminUser {
    User base;
};


AdminUser* AdminUser_new(void);

void AdminUser_init(AdminUser* this);

AdminUser* AdminUser_new1(HashMap* userHashMap);
void AdminUser_init1(AdminUser* this, HashMap* userHashMap);
void AdminUser_validateSession(AdminUser* this, WeblisketSessionInterface* weblisketSession);
void AdminUser_updateSession(AdminUser* this, WeblisketSessionInterface* weblisketSession);


void AdminUser_init(AdminUser* this) {
        User_init(&this->base);
}

AdminUser* AdminUser_new(void) {
    AdminUser* this = calloc(1, sizeof(AdminUser));
    AdminUser_init(this);
    return this;
}


void AdminUser_init1(AdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

AdminUser* AdminUser_new1(HashMap* userHashMap) {
    AdminUser* this = calloc(1, sizeof(AdminUser));
    AdminUser_init1(this, userHashMap);
    return this;
}


void AdminUser_validateSession(AdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        AdminUser_updateSession(this, weblisketSession);
}


void AdminUser_updateSession(AdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, AdminUser_getPermissions(this));
}

