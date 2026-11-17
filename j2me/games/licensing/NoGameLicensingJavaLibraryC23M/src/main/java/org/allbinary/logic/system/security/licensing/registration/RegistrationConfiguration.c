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
// package org.allbinary.logic.system.security.licensing.registration

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/logic/string/StringMaker.h"

typedef struct RegistrationConfiguration RegistrationConfiguration;
struct RegistrationConfiguration {
    const char* registrationCode;
    const char* NAME;
};

static RegistrationConfiguration* RegistrationConfiguration_SINGLETON;

RegistrationConfiguration* RegistrationConfiguration_new(void);

void RegistrationConfiguration_init(RegistrationConfiguration* this);
RegistrationConfiguration* RegistrationConfiguration_getInstance(void);
static void RegistrationConfiguration_read(RegistrationConfiguration* this);
void RegistrationConfiguration_write(RegistrationConfiguration* this);
const char* RegistrationConfiguration_toString(RegistrationConfiguration* this);
void RegistrationConfiguration_setRegistrationCode(RegistrationConfiguration* this, const char* registrationCode);
const char* RegistrationConfiguration_getRegistrationCode(RegistrationConfiguration* this);

// Static fields with runtime initializers: call this once at startup
void RegistrationConfiguration_staticInit(void) {
    RegistrationConfiguration_SINGLETON = RegistrationConfiguration_new();
}

static void RegistrationConfiguration_initFields(RegistrationConfiguration* this) {
    this->registrationCode = "No Registration Code";
    this->NAME = "registrationid";
}


void RegistrationConfiguration_init(RegistrationConfiguration* this) {
    RegistrationConfiguration_initFields(this);
}

RegistrationConfiguration* RegistrationConfiguration_new(void) {
    RegistrationConfiguration* this = calloc(1, sizeof(RegistrationConfiguration));
    RegistrationConfiguration_init(this);
    return this;
}


RegistrationConfiguration* RegistrationConfiguration_getInstance(void) {
        return RegistrationConfiguration_SINGLETON;
}


// throws Exception
static void RegistrationConfiguration_read(RegistrationConfiguration* this) {
}


// throws Exception
void RegistrationConfiguration_write(RegistrationConfiguration* this) {
}


const char* RegistrationConfiguration_toString(RegistrationConfiguration* this) {
        return JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), "Registration Code: "), append, RegistrationConfiguration_getRegistrationCode(this)), toString);
}


void RegistrationConfiguration_setRegistrationCode(RegistrationConfiguration* this, const char* registrationCode) {
        this->registrationCode = registrationCode;
}


const char* RegistrationConfiguration_getRegistrationCode(RegistrationConfiguration* this) {
        return this->registrationCode;
}

