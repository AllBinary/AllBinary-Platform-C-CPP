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
#include "org/allbinary/business/user/UserFactoryInterface.h"
#include "org/allbinary/business/user/UserInterface.h"

typedef struct WebStoreAdminUserFactory WebStoreAdminUserFactory;
struct WebStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


WebStoreAdminUserFactory* WebStoreAdminUserFactory_new(void);

void WebStoreAdminUserFactory_init(WebStoreAdminUserFactory* this);
UserInterface* WebStoreAdminUserFactory_getInstance(WebStoreAdminUserFactory* this);
UserInterface* WebStoreAdminUserFactory_getInstance(WebStoreAdminUserFactory* this, HashMap* hashMap);


void WebStoreAdminUserFactory_init(WebStoreAdminUserFactory* this) {
}

WebStoreAdminUserFactory* WebStoreAdminUserFactory_new(void) {
    WebStoreAdminUserFactory* this = calloc(1, sizeof(WebStoreAdminUserFactory));
    WebStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* WebStoreAdminUserFactory_getInstance(WebStoreAdminUserFactory* this) {
        return WebStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* WebStoreAdminUserFactory_getInstance(WebStoreAdminUserFactory* this, HashMap* hashMap) {
        return WebStoreAdminUser_new(hashMap);
}

