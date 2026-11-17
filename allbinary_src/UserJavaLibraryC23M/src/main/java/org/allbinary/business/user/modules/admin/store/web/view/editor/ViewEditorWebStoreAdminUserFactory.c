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
#include "org/allbinary/business/user/UserFactoryInterface.h"
#include "org/allbinary/business/user/UserInterface.h"

typedef struct ViewEditorWebStoreAdminUserFactory ViewEditorWebStoreAdminUserFactory;
struct ViewEditorWebStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


ViewEditorWebStoreAdminUserFactory* ViewEditorWebStoreAdminUserFactory_new(void);

void ViewEditorWebStoreAdminUserFactory_init(ViewEditorWebStoreAdminUserFactory* this);
UserInterface* ViewEditorWebStoreAdminUserFactory_getInstance(ViewEditorWebStoreAdminUserFactory* this);
UserInterface* ViewEditorWebStoreAdminUserFactory_getInstance(ViewEditorWebStoreAdminUserFactory* this, HashMap* hashMap);


void ViewEditorWebStoreAdminUserFactory_init(ViewEditorWebStoreAdminUserFactory* this) {
}

ViewEditorWebStoreAdminUserFactory* ViewEditorWebStoreAdminUserFactory_new(void) {
    ViewEditorWebStoreAdminUserFactory* this = calloc(1, sizeof(ViewEditorWebStoreAdminUserFactory));
    ViewEditorWebStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* ViewEditorWebStoreAdminUserFactory_getInstance(ViewEditorWebStoreAdminUserFactory* this) {
        return ViewEditorWebStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* ViewEditorWebStoreAdminUserFactory_getInstance(ViewEditorWebStoreAdminUserFactory* this, HashMap* hashMap) {
        return ViewEditorWebStoreAdminUser_new(hashMap);
}

