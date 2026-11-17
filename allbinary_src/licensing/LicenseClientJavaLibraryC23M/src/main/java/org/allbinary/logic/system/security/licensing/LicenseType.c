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

typedef struct LicenseType LicenseType;
struct LicenseType {
    const char* name;
};


LicenseType* LicenseType_new(const char* name);

void LicenseType_init(LicenseType* this, const char* name);
static void LicenseType_setName(LicenseType* this, const char* name);
const char* LicenseType_getName(LicenseType* this);

static void LicenseType_initFields(LicenseType* this) {
    this->name = nullptr;
}


void LicenseType_init(LicenseType* this, const char* name) {
    LicenseType_initFields(this);
        LicenseType_setName(this, name);
}

LicenseType* LicenseType_new(const char* name) {
    LicenseType* this = calloc(1, sizeof(LicenseType));
    LicenseType_init(this, name);
    return this;
}


static void LicenseType_setName(LicenseType* this, const char* name) {
        this->name = name;
}


const char* LicenseType_getName(LicenseType* this) {
        return this->name;
}

