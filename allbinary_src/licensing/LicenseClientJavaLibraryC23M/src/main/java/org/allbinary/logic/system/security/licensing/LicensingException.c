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
#include "org/allbinary/logic/system/security/licensing/Exception.h"

typedef struct LicensingException LicensingException;
struct LicensingException {
    Exception base;
};

constexpr int64_t LicensingException_serialVersionUID = 1LL;

LicensingException* LicensingException_new(void);

void LicensingException_init(LicensingException* this);

LicensingException* LicensingException_new1(const char* msg);
void LicensingException_init1(LicensingException* this, const char* msg);


void LicensingException_init(LicensingException* this) {
    Exception_init(&this->base);
}

LicensingException* LicensingException_new(void) {
    LicensingException* this = calloc(1, sizeof(LicensingException));
    LicensingException_init(this);
    return this;
}


void LicensingException_init1(LicensingException* this, const char* msg) {
        Exception_init(&this->base, msg);
}

LicensingException* LicensingException_new1(const char* msg) {
    LicensingException* this = calloc(1, sizeof(LicensingException));
    LicensingException_init1(this, msg);
    return this;
}

