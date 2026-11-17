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
// package org.allbinary.business.user.modules.admin.store

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

typedef struct StoreAdminUserFactory StoreAdminUserFactory;
struct StoreAdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


StoreAdminUserFactory* StoreAdminUserFactory_new(void);

void StoreAdminUserFactory_init(StoreAdminUserFactory* this);
UserInterface* StoreAdminUserFactory_getInstance(StoreAdminUserFactory* this);
UserInterface* StoreAdminUserFactory_getInstance(StoreAdminUserFactory* this, HashMap* hashMap);


void StoreAdminUserFactory_init(StoreAdminUserFactory* this) {
}

StoreAdminUserFactory* StoreAdminUserFactory_new(void) {
    StoreAdminUserFactory* this = calloc(1, sizeof(StoreAdminUserFactory));
    StoreAdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* StoreAdminUserFactory_getInstance(StoreAdminUserFactory* this) {
        return StoreAdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* StoreAdminUserFactory_getInstance(StoreAdminUserFactory* this, HashMap* hashMap) {
        return StoreAdminUser_new(hashMap);
}

