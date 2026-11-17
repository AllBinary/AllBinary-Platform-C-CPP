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
#include "org/allbinary/business/user/UserFactoryInterface.h"
#include "org/allbinary/business/user/UserInterface.h"

typedef struct WorkflowEditorWebStoreAdminUserFactory WorkflowEditorWebStoreAdminUserFactory;
struct WorkflowEditorWebStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


WorkflowEditorWebStoreAdminUserFactory* WorkflowEditorWebStoreAdminUserFactory_new(void);

void WorkflowEditorWebStoreAdminUserFactory_init(WorkflowEditorWebStoreAdminUserFactory* this);
UserInterface* WorkflowEditorWebStoreAdminUserFactory_getInstance(WorkflowEditorWebStoreAdminUserFactory* this);
UserInterface* WorkflowEditorWebStoreAdminUserFactory_getInstance(WorkflowEditorWebStoreAdminUserFactory* this, HashMap* hashMap);


void WorkflowEditorWebStoreAdminUserFactory_init(WorkflowEditorWebStoreAdminUserFactory* this) {
}

WorkflowEditorWebStoreAdminUserFactory* WorkflowEditorWebStoreAdminUserFactory_new(void) {
    WorkflowEditorWebStoreAdminUserFactory* this = calloc(1, sizeof(WorkflowEditorWebStoreAdminUserFactory));
    WorkflowEditorWebStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* WorkflowEditorWebStoreAdminUserFactory_getInstance(WorkflowEditorWebStoreAdminUserFactory* this) {
        return WorkflowEditorWebStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* WorkflowEditorWebStoreAdminUserFactory_getInstance(WorkflowEditorWebStoreAdminUserFactory* this, HashMap* hashMap) {
        return WorkflowEditorWebStoreAdminUser_new(hashMap);
}

