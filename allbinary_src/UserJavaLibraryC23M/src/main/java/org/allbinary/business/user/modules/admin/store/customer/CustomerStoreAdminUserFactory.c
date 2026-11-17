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
// package org.allbinary.business.user.modules.admin.store.customer

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

typedef struct CustomerStoreAdminUserFactory CustomerStoreAdminUserFactory;
struct CustomerStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


CustomerStoreAdminUserFactory* CustomerStoreAdminUserFactory_new(void);

void CustomerStoreAdminUserFactory_init(CustomerStoreAdminUserFactory* this);
UserInterface* CustomerStoreAdminUserFactory_getInstance(CustomerStoreAdminUserFactory* this);
UserInterface* CustomerStoreAdminUserFactory_getInstance(CustomerStoreAdminUserFactory* this, HashMap* hashMap);


void CustomerStoreAdminUserFactory_init(CustomerStoreAdminUserFactory* this) {
}

CustomerStoreAdminUserFactory* CustomerStoreAdminUserFactory_new(void) {
    CustomerStoreAdminUserFactory* this = calloc(1, sizeof(CustomerStoreAdminUserFactory));
    CustomerStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* CustomerStoreAdminUserFactory_getInstance(CustomerStoreAdminUserFactory* this) {
        return CustomerStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* CustomerStoreAdminUserFactory_getInstance(CustomerStoreAdminUserFactory* this, HashMap* hashMap) {
        return CustomerStoreAdminUser_new(hashMap);
}

