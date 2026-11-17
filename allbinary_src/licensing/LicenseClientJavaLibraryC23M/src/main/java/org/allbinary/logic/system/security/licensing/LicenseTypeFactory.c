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
// package org.allbinary.logic.system.security.licensing

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct LicenseTypeFactory LicenseTypeFactory;
struct LicenseTypeFactory {
    LicenseType* UNKNOWN;
    LicenseType* DEMO;
    LicenseType* NORMAL;
};

static LicenseTypeFactory* LicenseTypeFactory_instance;

LicenseTypeFactory* LicenseTypeFactory_new(void);
LicenseTypeFactory* LicenseTypeFactory_getInstance(void);
LicenseType* LicenseTypeFactory_getInstance(LicenseTypeFactory* this, const char* name);

// Static fields with runtime initializers: call this once at startup
void LicenseTypeFactory_staticInit(void) {
    LicenseTypeFactory_instance = LicenseTypeFactory_new();
}

static void LicenseTypeFactory_initFields(LicenseTypeFactory* this) {
    this->UNKNOWN = LicenseType_new(CommonStrings_getInstance()->UNKNOWN);
    this->DEMO = LicenseType_new("Demo");
    this->NORMAL = LicenseType_new("Normal");
}

void LicenseTypeFactory_init(LicenseTypeFactory* this) {
    LicenseTypeFactory_initFields(this);
}

LicenseTypeFactory* LicenseTypeFactory_new(void) {
    LicenseTypeFactory* this = calloc(1, sizeof(LicenseTypeFactory));
    LicenseTypeFactory_init(this);
    return this;
}


LicenseTypeFactory* LicenseTypeFactory_getInstance(void) {
        return LicenseTypeFactory_instance;
}


// Java overloaded method: C needs a different name
LicenseType* LicenseTypeFactory_getInstance(LicenseTypeFactory* this, const char* name) {
        if (JAVA_CALL(LicenseType_getName(this->DEMO), compareTo, name) == 0) {
            return this->DEMO;
        } else if (JAVA_CALL(LicenseType_getName(this->NORMAL), compareTo, name) == 0) {
            return this->NORMAL;
        }
        return this->UNKNOWN;
}

