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

typedef struct BasicUserRoleData BasicUserRoleData;
struct BasicUserRoleData {
    char unused;
};

const char* BasicUserRoleData_NAME = "BASIC_USER_ROLE_NAME";

BasicUserRoleData* BasicUserRoleData_new(void);

void BasicUserRoleData_init(BasicUserRoleData* this);


void BasicUserRoleData_init(BasicUserRoleData* this) {
}

BasicUserRoleData* BasicUserRoleData_new(void) {
    BasicUserRoleData* this = calloc(1, sizeof(BasicUserRoleData));
    BasicUserRoleData_init(this);
    return this;
}

