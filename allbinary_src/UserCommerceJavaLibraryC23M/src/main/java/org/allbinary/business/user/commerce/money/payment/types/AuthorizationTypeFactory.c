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

typedef struct AuthorizationTypeFactory AuthorizationTypeFactory;
struct AuthorizationTypeFactory {
    AuthorizationType* NONE;
    AuthorizationType* VOICE;
    AuthorizationType* RETINAL;
    AuthorizationType* IMAGE;
    AuthorizationType* DNA;
    AuthorizationType* PRINT;
    AuthorizationType* CHIP;
};

static AuthorizationTypeFactory* AuthorizationTypeFactory_instance;

AuthorizationTypeFactory* AuthorizationTypeFactory_new(void);
AuthorizationTypeFactory* AuthorizationTypeFactory_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void AuthorizationTypeFactory_staticInit(void) {
    AuthorizationTypeFactory_instance = AuthorizationTypeFactory_new();
}

static void AuthorizationTypeFactory_initFields(AuthorizationTypeFactory* this) {
    this->NONE = AuthorizationType_new("None");
    this->VOICE = AuthorizationType_new("Voice");
    this->RETINAL = AuthorizationType_new("Retinal");
    this->IMAGE = AuthorizationType_new("Image");
    this->DNA = AuthorizationType_new("DNA");
    this->PRINT = AuthorizationType_new("Print");
    this->CHIP = AuthorizationType_new("Chip");
}

void AuthorizationTypeFactory_init(AuthorizationTypeFactory* this) {
    AuthorizationTypeFactory_initFields(this);
}

AuthorizationTypeFactory* AuthorizationTypeFactory_new(void) {
    AuthorizationTypeFactory* this = calloc(1, sizeof(AuthorizationTypeFactory));
    AuthorizationTypeFactory_init(this);
    return this;
}


AuthorizationTypeFactory* AuthorizationTypeFactory_getInstance(void) {
        return AuthorizationTypeFactory_instance;
}

