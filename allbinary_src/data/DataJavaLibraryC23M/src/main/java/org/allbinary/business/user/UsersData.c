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

typedef struct UsersData UsersData;
struct UsersData {
    char unused;
};

const char* UsersData_NAME = "USERS_NAME";

UsersData* UsersData_new(void);

void UsersData_init(UsersData* this);


void UsersData_init(UsersData* this) {
}

UsersData* UsersData_new(void) {
    UsersData* this = calloc(1, sizeof(UsersData));
    UsersData_init(this);
    return this;
}

