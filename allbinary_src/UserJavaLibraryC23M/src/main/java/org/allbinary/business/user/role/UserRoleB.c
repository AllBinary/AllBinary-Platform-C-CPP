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
// package org.allbinary.business.user.role

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/business/user/UserFactoryInterface.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/business/user/role/UserRole.h"

typedef struct UserRoleB UserRoleB;
struct UserRoleB {
    UserRole base;
};

BasicArrayList* UserRoleB_roleVector;

UserRoleB* UserRoleB_new(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);

void UserRoleB_init(UserRoleB* this, BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);
UserRole* UserRoleB_getRole(const char* role);
BasicArrayList* UserRoleB_getAll(void);

// Static fields with runtime initializers: call this once at startup
void UserRoleB_staticInit(void) {
    UserRoleB_roleVector = BasicArrayListD_new();
}


void UserRoleB_init(UserRoleB* this, BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface) {
        UserRole_init(&this->base, aBasicUserRole, aUserFactoryInterface);
        JAVA_CALL(UserRoleB_roleVector, add, this);
}

UserRoleB* UserRoleB_new(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface) {
    UserRoleB* this = calloc(1, sizeof(UserRoleB));
    UserRoleB_init(this, aBasicUserRole, aUserFactoryInterface);
    return this;
}


// throws Exception
// synchronized
UserRole* UserRoleB_getRole(const char* role) {
        UserRoleFactory_getInstance();
        if (!StringValidationUtil_isEmpty(StringValidationUtil_getInstance(), role)) {
            BasicArrayList* roleVector = UserRoleB_getAll();
            int32_t size = BasicArrayList_size(roleVector);
            for (int32_t index = 0; index < size; index++) {
                UserRole* userRole = ((UserRole*) BasicArrayList_get(roleVector, index));
                if (strcmp(role, UserRole_toString(userRole)) == 0) {
                    return userRole;
                }
            }
        }
        java_throw(java_exception_new("Exception", java_concat("Unable to get role - Unknown Role = ", role)));
}


BasicArrayList* UserRoleB_getAll(void) {
        UserRoleFactory_getInstance();
        return UserRoleB_roleVector;
}

