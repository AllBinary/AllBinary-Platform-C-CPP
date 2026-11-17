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
// package org.allbinary.business.user.modules.admin.store.order.adjust

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

typedef struct AdjustOrderStoreAdminUserFactory AdjustOrderStoreAdminUserFactory;
struct AdjustOrderStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


AdjustOrderStoreAdminUserFactory* AdjustOrderStoreAdminUserFactory_new(void);

void AdjustOrderStoreAdminUserFactory_init(AdjustOrderStoreAdminUserFactory* this);
UserInterface* AdjustOrderStoreAdminUserFactory_getInstance(AdjustOrderStoreAdminUserFactory* this);
UserInterface* AdjustOrderStoreAdminUserFactory_getInstance(AdjustOrderStoreAdminUserFactory* this, HashMap* hashMap);


void AdjustOrderStoreAdminUserFactory_init(AdjustOrderStoreAdminUserFactory* this) {
}

AdjustOrderStoreAdminUserFactory* AdjustOrderStoreAdminUserFactory_new(void) {
    AdjustOrderStoreAdminUserFactory* this = calloc(1, sizeof(AdjustOrderStoreAdminUserFactory));
    AdjustOrderStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* AdjustOrderStoreAdminUserFactory_getInstance(AdjustOrderStoreAdminUserFactory* this) {
        return AdjustOrderStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* AdjustOrderStoreAdminUserFactory_getInstance(AdjustOrderStoreAdminUserFactory* this, HashMap* hashMap) {
        return AdjustOrderStoreAdminUser_new(hashMap);
}

