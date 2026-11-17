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
// package org.allbinary.business.user.modules.admin.store.product

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

typedef struct ProductStoreAdminUserFactory ProductStoreAdminUserFactory;
struct ProductStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


ProductStoreAdminUserFactory* ProductStoreAdminUserFactory_new(void);

void ProductStoreAdminUserFactory_init(ProductStoreAdminUserFactory* this);
UserInterface* ProductStoreAdminUserFactory_getInstance(ProductStoreAdminUserFactory* this);
UserInterface* ProductStoreAdminUserFactory_getInstance(ProductStoreAdminUserFactory* this, HashMap* hashMap);


void ProductStoreAdminUserFactory_init(ProductStoreAdminUserFactory* this) {
}

ProductStoreAdminUserFactory* ProductStoreAdminUserFactory_new(void) {
    ProductStoreAdminUserFactory* this = calloc(1, sizeof(ProductStoreAdminUserFactory));
    ProductStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* ProductStoreAdminUserFactory_getInstance(ProductStoreAdminUserFactory* this) {
        return ProductStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* ProductStoreAdminUserFactory_getInstance(ProductStoreAdminUserFactory* this, HashMap* hashMap) {
        return ProductStoreAdminUser_new(hashMap);
}

