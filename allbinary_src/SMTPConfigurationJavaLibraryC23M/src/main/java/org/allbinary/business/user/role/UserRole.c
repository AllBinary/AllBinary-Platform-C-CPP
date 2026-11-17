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
// #include "java/io/Serializable.h"
#include "org/allbinary/business/user/UserFactoryInterface.h"

typedef struct UserRole UserRole;
struct UserRole {
    Serializable Serializable_interface;
    BasicUserRole* basicUserRole;
    UserFactoryInterface* userFactoryInterface;
};


UserRole* UserRole_new(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);

void UserRole_init(UserRole* this, BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface);
const char* UserRole_toString(UserRole* this);
BasicUserRole* UserRole_getBasicUserRole(UserRole* this);
UserFactoryInterface* UserRole_getUserFactory(UserRole* this);
int64_t UserRole_getSessionTimeout(UserRole* this);
int64_t UserRole_getSessionInactivityTimeout(UserRole* this);

static void UserRole_initFields(UserRole* this) {
    
    
}


void UserRole_init(UserRole* this, BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface) {
    UserRole_initFields(this);
        this->basicUserRole = aBasicUserRole;
        this->userFactoryInterface = aUserFactoryInterface;
}

UserRole* UserRole_new(BasicUserRole* aBasicUserRole, UserFactoryInterface* aUserFactoryInterface) {
    UserRole* this = calloc(1, sizeof(UserRole));
    UserRole_init(this, aBasicUserRole, aUserFactoryInterface);
    return this;
}


const char* UserRole_toString(UserRole* this) {
        return BasicUserRole_toString(this->basicUserRole);
}


BasicUserRole* UserRole_getBasicUserRole(UserRole* this) {
        return this->basicUserRole;
}


// throws Exception
UserFactoryInterface* UserRole_getUserFactory(UserRole* this) {
        return this->userFactoryInterface;
}


int64_t UserRole_getSessionTimeout(UserRole* this) {
        return BasicUserRole_getSessionTimeout(this->basicUserRole);
}


int64_t UserRole_getSessionInactivityTimeout(UserRole* this) {
        return BasicUserRole_getSessionInactivityTimeout(this->basicUserRole);
}

