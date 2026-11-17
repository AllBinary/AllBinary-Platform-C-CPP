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
// package org.allbinary.business.user.modules.admin.store.order.ship

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

typedef struct ShipOrderStoreAdminUserFactory ShipOrderStoreAdminUserFactory;
struct ShipOrderStoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


ShipOrderStoreAdminUserFactory* ShipOrderStoreAdminUserFactory_new(void);

void ShipOrderStoreAdminUserFactory_init(ShipOrderStoreAdminUserFactory* this);
UserInterface* ShipOrderStoreAdminUserFactory_getInstance(ShipOrderStoreAdminUserFactory* this);
UserInterface* ShipOrderStoreAdminUserFactory_getInstance(ShipOrderStoreAdminUserFactory* this, HashMap* hashMap);


void ShipOrderStoreAdminUserFactory_init(ShipOrderStoreAdminUserFactory* this) {
}

ShipOrderStoreAdminUserFactory* ShipOrderStoreAdminUserFactory_new(void) {
    ShipOrderStoreAdminUserFactory* this = calloc(1, sizeof(ShipOrderStoreAdminUserFactory));
    ShipOrderStoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* ShipOrderStoreAdminUserFactory_getInstance(ShipOrderStoreAdminUserFactory* this) {
        return ShipOrderStoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* ShipOrderStoreAdminUserFactory_getInstance(ShipOrderStoreAdminUserFactory* this, HashMap* hashMap) {
        return ShipOrderStoreAdminUser_new(hashMap);
}

