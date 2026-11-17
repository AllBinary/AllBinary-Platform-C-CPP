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
// package org.allbinary.business.user.modules.admin.store.payment

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

typedef struct PaymentStoreAdminUserFactory PaymentStoreAdminUserFactory;
struct PaymentStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


PaymentStoreAdminUserFactory* PaymentStoreAdminUserFactory_new(void);

void PaymentStoreAdminUserFactory_init(PaymentStoreAdminUserFactory* this);
UserInterface* PaymentStoreAdminUserFactory_getInstance(PaymentStoreAdminUserFactory* this);
UserInterface* PaymentStoreAdminUserFactory_getInstance(PaymentStoreAdminUserFactory* this, HashMap* hashMap);


void PaymentStoreAdminUserFactory_init(PaymentStoreAdminUserFactory* this) {
}

PaymentStoreAdminUserFactory* PaymentStoreAdminUserFactory_new(void) {
    PaymentStoreAdminUserFactory* this = calloc(1, sizeof(PaymentStoreAdminUserFactory));
    PaymentStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* PaymentStoreAdminUserFactory_getInstance(PaymentStoreAdminUserFactory* this) {
        return PaymentStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* PaymentStoreAdminUserFactory_getInstance(PaymentStoreAdminUserFactory* this, HashMap* hashMap) {
        return PaymentStoreAdminUser_new(hashMap);
}

