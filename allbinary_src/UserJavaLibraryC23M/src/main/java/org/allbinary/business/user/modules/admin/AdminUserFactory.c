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
// package org.allbinary.business.user.modules.admin

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

typedef struct AdminUserFactory AdminUserFactory;
struct AdminUserFactory {
    UserFactoryInterface UserFactoryInterface_interface;
};


AdminUserFactory* AdminUserFactory_new(void);

void AdminUserFactory_init(AdminUserFactory* this);
UserInterface* AdminUserFactory_getInstance(AdminUserFactory* this);
UserInterface* AdminUserFactory_getInstance(AdminUserFactory* this, HashMap* hashMap);


void AdminUserFactory_init(AdminUserFactory* this) {
}

AdminUserFactory* AdminUserFactory_new(void) {
    AdminUserFactory* this = calloc(1, sizeof(AdminUserFactory));
    AdminUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* AdminUserFactory_getInstance(AdminUserFactory* this) {
        return AdminUser_new();
}


// throws Exception
// Java overloaded method: C needs a different name
UserInterface* AdminUserFactory_getInstance(AdminUserFactory* this, HashMap* hashMap) {
        return AdminUser_new(hashMap);
}

