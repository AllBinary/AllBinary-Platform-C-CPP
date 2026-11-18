#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_H
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
typedef struct StringMaker StringMaker;

typedef struct RegistrationConfiguration RegistrationConfiguration;
struct RegistrationConfiguration {
    const char* registrationCode;
    const char* NAME;
};


RegistrationConfiguration* RegistrationConfiguration_new(void);

void RegistrationConfiguration_init(RegistrationConfiguration* this);

RegistrationConfiguration* RegistrationConfiguration_getInstance(void);


void RegistrationConfiguration_write(RegistrationConfiguration* this);

const char* RegistrationConfiguration_toString(RegistrationConfiguration* this);

void RegistrationConfiguration_setRegistrationCode(RegistrationConfiguration* this, const char* registrationCode);

const char* RegistrationConfiguration_getRegistrationCode(RegistrationConfiguration* this);
#define RegistrationConfiguration_new0 RegistrationConfiguration_new
#define RegistrationConfiguration_init0 RegistrationConfiguration_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RegistrationConfiguration_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RegistrationConfiguration_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_REGISTRATION_REGISTRATIONCONFIGURATION_H
