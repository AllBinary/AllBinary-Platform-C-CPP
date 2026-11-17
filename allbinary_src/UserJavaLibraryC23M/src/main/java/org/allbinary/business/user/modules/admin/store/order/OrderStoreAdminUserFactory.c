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
// package org.allbinary.business.user.modules.admin.store.order

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

typedef struct OrderStoreAdminUserFactory OrderStoreAdminUserFactory;
struct OrderStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


OrderStoreAdminUserFactory* OrderStoreAdminUserFactory_new(void);

void OrderStoreAdminUserFactory_init(OrderStoreAdminUserFactory* this);
UserInterface* OrderStoreAdminUserFactory_getInstance(OrderStoreAdminUserFactory* this);
UserInterface* OrderStoreAdminUserFactory_getInstance(OrderStoreAdminUserFactory* this, HashMap* hashMap);


void OrderStoreAdminUserFactory_init(OrderStoreAdminUserFactory* this) {
}

OrderStoreAdminUserFactory* OrderStoreAdminUserFactory_new(void) {
    OrderStoreAdminUserFactory* this = calloc(1, sizeof(OrderStoreAdminUserFactory));
    OrderStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* OrderStoreAdminUserFactory_getInstance(OrderStoreAdminUserFactory* this) {
        return OrderStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* OrderStoreAdminUserFactory_getInstance(OrderStoreAdminUserFactory* this, HashMap* hashMap) {
        return OrderStoreAdminUser_new(hashMap);
}

