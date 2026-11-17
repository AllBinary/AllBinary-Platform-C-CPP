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
// package org.allbinary.business.init.db

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/db/DbInitInfo.h"

typedef struct UserDbInitInfo UserDbInitInfo;
struct UserDbInitInfo {
    DbInitInfo base;
};

static const char* UserDbInitInfo_INITFILE = "userdbinitdata.dat";

UserDbInitInfo* UserDbInitInfo_new(void);

void UserDbInitInfo_init(UserDbInitInfo* this);

UserDbInitInfo* UserDbInitInfo_new1(bool read);
void UserDbInitInfo_init1(UserDbInitInfo* this, bool read);


void UserDbInitInfo_init(UserDbInitInfo* this) {
        DbInitInfo_init(&this->base, UserDbInitInfo_INITFILE, true);
}

UserDbInitInfo* UserDbInitInfo_new(void) {
    UserDbInitInfo* this = calloc(1, sizeof(UserDbInitInfo));
    UserDbInitInfo_init(this);
    return this;
}


void UserDbInitInfo_init1(UserDbInitInfo* this, bool read) {
        DbInitInfo_init(&this->base, UserDbInitInfo_INITFILE, read);
}

UserDbInitInfo* UserDbInitInfo_new1(bool read) {
    UserDbInitInfo* this = calloc(1, sizeof(UserDbInitInfo));
    UserDbInitInfo_init1(this, read);
    return this;
}

