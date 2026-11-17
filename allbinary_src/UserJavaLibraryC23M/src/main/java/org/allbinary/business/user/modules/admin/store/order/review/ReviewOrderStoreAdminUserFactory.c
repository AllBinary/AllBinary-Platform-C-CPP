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
// package org.allbinary.business.user.modules.admin.store.order.review

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

typedef struct ReviewOrderStoreAdminUserFactory ReviewOrderStoreAdminUserFactory;
struct ReviewOrderStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


ReviewOrderStoreAdminUserFactory* ReviewOrderStoreAdminUserFactory_new(void);

void ReviewOrderStoreAdminUserFactory_init(ReviewOrderStoreAdminUserFactory* this);
UserInterface* ReviewOrderStoreAdminUserFactory_getInstance(ReviewOrderStoreAdminUserFactory* this);
UserInterface* ReviewOrderStoreAdminUserFactory_getInstance(ReviewOrderStoreAdminUserFactory* this, HashMap* hashMap);


void ReviewOrderStoreAdminUserFactory_init(ReviewOrderStoreAdminUserFactory* this) {
}

ReviewOrderStoreAdminUserFactory* ReviewOrderStoreAdminUserFactory_new(void) {
    ReviewOrderStoreAdminUserFactory* this = calloc(1, sizeof(ReviewOrderStoreAdminUserFactory));
    ReviewOrderStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* ReviewOrderStoreAdminUserFactory_getInstance(ReviewOrderStoreAdminUserFactory* this) {
        return ReviewOrderStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* ReviewOrderStoreAdminUserFactory_getInstance(ReviewOrderStoreAdminUserFactory* this, HashMap* hashMap) {
        return ReviewOrderStoreAdminUser_new(hashMap);
}

