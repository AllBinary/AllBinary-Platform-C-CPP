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
// package org.allbinary.business.user.modules.admin.store.web.workflow.editor

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

typedef struct WorkflowEditorWebStoreAdminUser WorkflowEditorWebStoreAdminUser;
struct WorkflowEditorWebStoreAdminUser {
    User base;
};


WorkflowEditorWebStoreAdminUser* WorkflowEditorWebStoreAdminUser_new(void);

void WorkflowEditorWebStoreAdminUser_init(WorkflowEditorWebStoreAdminUser* this);

WorkflowEditorWebStoreAdminUser* WorkflowEditorWebStoreAdminUser_new1(HashMap* userHashMap);
void WorkflowEditorWebStoreAdminUser_init1(WorkflowEditorWebStoreAdminUser* this, HashMap* userHashMap);
void WorkflowEditorWebStoreAdminUser_validateSession(WorkflowEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);
void WorkflowEditorWebStoreAdminUser_updateSession(WorkflowEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession);


void WorkflowEditorWebStoreAdminUser_init(WorkflowEditorWebStoreAdminUser* this) {
        User_init(&this->base);
}

WorkflowEditorWebStoreAdminUser* WorkflowEditorWebStoreAdminUser_new(void) {
    WorkflowEditorWebStoreAdminUser* this = calloc(1, sizeof(WorkflowEditorWebStoreAdminUser));
    WorkflowEditorWebStoreAdminUser_init(this);
    return this;
}


void WorkflowEditorWebStoreAdminUser_init1(WorkflowEditorWebStoreAdminUser* this, HashMap* userHashMap) {
        User_init(&this->base, userHashMap);
}

WorkflowEditorWebStoreAdminUser* WorkflowEditorWebStoreAdminUser_new1(HashMap* userHashMap) {
    WorkflowEditorWebStoreAdminUser* this = calloc(1, sizeof(WorkflowEditorWebStoreAdminUser));
    WorkflowEditorWebStoreAdminUser_init1(this, userHashMap);
    return this;
}


void WorkflowEditorWebStoreAdminUser_validateSession(WorkflowEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        User_validateSession((&this->base), weblisketSession);
        WorkflowEditorWebStoreAdminUser_updateSession(this, weblisketSession);
}


void WorkflowEditorWebStoreAdminUser_updateSession(WorkflowEditorWebStoreAdminUser* this, WeblisketSessionInterface* weblisketSession) {
        WeblisketSessionInterface_setStoreName(weblisketSession, WorkflowEditorWebStoreAdminUser_getPermissions(this));
}

