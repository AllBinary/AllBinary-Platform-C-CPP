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
// package org.allbinary.business.user.modules.admin.store.web.view.editor

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

typedef struct ViewEditorWebStoreAdminUser ViewEditorWebStoreAdminUser;
struct ViewEditorWebStoreAdminUser {
    User base;
};


ViewEditorWebStoreAdminUser* ViewEditorWebStoreAdminUser_new(void);

void ViewEditorWebStoreAdminUser_init(ViewEditorWebStoreAdminUser* this);

ViewEditorWebStoreAdminUser* ViewEditorWebStoreAdminUser_new1(HashMap* userHashMap);
void ViewEditorWebStoreAdminUser_init1(ViewEditorWebStoreAdminUser* this, HashMap* userHashMap);
void ViewEditorWebStoreAdminUser_validateSession(ViewEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void ViewEditorWebStoreAdminUser_updateSession(ViewEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void ViewEditorWebStoreAdminUser_init(ViewEditorWebStoreAdminUser* this) {
        User_init(&this->base);
}

ViewEditorWebStoreAdminUser* ViewEditorWebStoreAdminUser_new(void) {
    ViewEditorWebStoreAdminUser* this = calloc(1, sizeof(ViewEditorWebStoreAdminUser));
    ViewEditorWebStoreAdminUser_init(this);
    return this;
}


void ViewEditorWebStoreAdminUser_init1(ViewEditorWebStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

ViewEditorWebStoreAdminUser* ViewEditorWebStoreAdminUser_new1(HashMap* userHashMap) {
    ViewEditorWebStoreAdminUser* this = calloc(1, sizeof(ViewEditorWebStoreAdminUser));
    ViewEditorWebStoreAdminUser_init1(this, userHashMap);
    return this;
}


void ViewEditorWebStoreAdminUser_validateSession(ViewEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        ViewEditorWebStoreAdminUser_updateSession(this, weblisketSession);
}


void ViewEditorWebStoreAdminUser_updateSession(ViewEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, ViewEditorWebStoreAdminUser_getPermissions(this));
}

