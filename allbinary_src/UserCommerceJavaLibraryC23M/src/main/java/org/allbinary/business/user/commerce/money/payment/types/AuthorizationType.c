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
// package org.allbinary.business.user.commerce.money.payment.types

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct AuthorizationType AuthorizationType;
struct AuthorizationType {
    const char* name;
};


AuthorizationType* AuthorizationType_new(const char* name);

void AuthorizationType_init(AuthorizationType* this, const char* name);
const char* AuthorizationType_toString(AuthorizationType* this);

static void AuthorizationType_initFields(AuthorizationType* this) {
    
}


void AuthorizationType_init(AuthorizationType* this, const char* name) {
    AuthorizationType_initFields(this);
        this->name = name;
}

AuthorizationType* AuthorizationType_new(const char* name) {
    AuthorizationType* this = calloc(1, sizeof(AuthorizationType));
    AuthorizationType_init(this, name);
    return this;
}


const char* AuthorizationType_toString(AuthorizationType* this) {
        return this->name;
}

