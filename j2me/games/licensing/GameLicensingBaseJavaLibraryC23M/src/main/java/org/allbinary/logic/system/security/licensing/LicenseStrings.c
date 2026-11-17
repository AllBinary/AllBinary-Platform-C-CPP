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

typedef struct LicenseStrings LicenseStrings;
struct LicenseStrings {
    const char* LOCKED;
};

static LicenseStrings* LicenseStrings_instance;

LicenseStrings* LicenseStrings_new(void);
LicenseStrings* LicenseStrings_getInstance(void);

// Static fields with runtime initializers: call this once at startup
void LicenseStrings_staticInit(void) {
    LicenseStrings_instance = LicenseStrings_new();
}

static void LicenseStrings_initFields(LicenseStrings* this) {
    this->LOCKED = "Demo Locked Feature";
}

void LicenseStrings_init(LicenseStrings* this) {
    LicenseStrings_initFields(this);
}

LicenseStrings* LicenseStrings_new(void) {
    LicenseStrings* this = calloc(1, sizeof(LicenseStrings));
    LicenseStrings_init(this);
    return this;
}


LicenseStrings* LicenseStrings_getInstance(void) {
        return LicenseStrings_instance;
}

