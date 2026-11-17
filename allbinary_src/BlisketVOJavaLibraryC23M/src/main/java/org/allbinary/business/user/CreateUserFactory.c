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
// package org.allbinary.business.user

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "java/util/HashMap.h"
#include "org/allbinary/business/user/role/UserRole.h"
#include "org/allbinary/business/user/role/UserRoleB.h"
#include "org/allbinary/business/user/role/UserRoleData.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"

typedef struct CreateUserFactory CreateUserFactory;
struct CreateUserFactory {
    char unused;
};


CreateUserFactory* CreateUserFactory_new(void);

void CreateUserFactory_init(CreateUserFactory* this);
UserInterface* CreateUserFactory_getInstance(HashMap* hashMap);


void CreateUserFactory_init(CreateUserFactory* this) {
}

CreateUserFactory* CreateUserFactory_new(void) {
    CreateUserFactory* this = calloc(1, sizeof(CreateUserFactory));
    CreateUserFactory_init(this);
    return this;
}


// throws Exception
UserInterface* CreateUserFactory_getInstance(HashMap* hashMap) {
        if (hashMap != nullptr) {
            const char* roleString = ((const char*) HashMap_get(hashMap, JAVA_CALL(UserRoleData_NAME, toString)));
            if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), roleString)) {
                UserRole* role = UserRoleB_getRole(roleString);
                return JAVA_CALL(UserRole_getUserFactory(role), getInstance, hashMap);
            } else {
                java_throw(java_exception_new("Exception", "No Role Specified"));
            }
        } else {
            java_throw(java_exception_new("Exception", "Null HashMap"));
        }
}

