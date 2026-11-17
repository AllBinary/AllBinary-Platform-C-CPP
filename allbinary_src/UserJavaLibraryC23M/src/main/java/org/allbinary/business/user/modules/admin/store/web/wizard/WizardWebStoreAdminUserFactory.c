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
#include "org/allbinary/business/user/UserFactoryInterface.h"
#include "org/allbinary/business/user/UserInterface.h"

typedef struct WizardWebStoreAdminUserFactory WizardWebStoreAdminUserFactory;
struct WizardWebStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


WizardWebStoreAdminUserFactory* WizardWebStoreAdminUserFactory_new(void);

void WizardWebStoreAdminUserFactory_init(WizardWebStoreAdminUserFactory* this);
UserInterface* WizardWebStoreAdminUserFactory_getInstance(WizardWebStoreAdminUserFactory* this);
UserInterface* WizardWebStoreAdminUserFactory_getInstance(WizardWebStoreAdminUserFactory* this, HashMap* hashMap);


void WizardWebStoreAdminUserFactory_init(WizardWebStoreAdminUserFactory* this) {
}

WizardWebStoreAdminUserFactory* WizardWebStoreAdminUserFactory_new(void) {
    WizardWebStoreAdminUserFactory* this = calloc(1, sizeof(WizardWebStoreAdminUserFactory));
    WizardWebStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* WizardWebStoreAdminUserFactory_getInstance(WizardWebStoreAdminUserFactory* this) {
        return WizardWebStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* WizardWebStoreAdminUserFactory_getInstance(WizardWebStoreAdminUserFactory* this, HashMap* hashMap) {
        return WizardWebStoreAdminUser_new(hashMap);
}

