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

typedef struct UserRoleData UserRoleData;
struct UserRoleData {
    char unused;
};

const char* UserRoleData_NAME = "ROLE";

UserRoleData* UserRoleData_new(void);

void UserRoleData_init(UserRoleData* this);


void UserRoleData_init(UserRoleData* this) {
}

UserRoleData* UserRoleData_new(void) {
    UserRoleData* this = calloc(1, sizeof(UserRoleData));
    UserRoleData_init(this);
    return this;
}

