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

typedef struct LicenseInterfaceSingleton LicenseInterfaceSingleton;
struct LicenseInterfaceSingleton {
    char unused;
};

static AbeLicenseInterface* LicenseInterfaceSingleton_licenseInterface;

LicenseInterfaceSingleton* LicenseInterfaceSingleton_new(void);
AbeLicenseInterface* LicenseInterfaceSingleton_getInstance(void);
void LicenseInterfaceSingleton_init(AbeLicenseInterface* licenseInterface);

// Static fields with runtime initializers: call this once at startup
void LicenseInterfaceSingleton_staticInit(void) {
    LicenseInterfaceSingleton_licenseInterface = AbeNoLicense_getInstance();
}

void LicenseInterfaceSingleton_init(LicenseInterfaceSingleton* this) {
}

LicenseInterfaceSingleton* LicenseInterfaceSingleton_new(void) {
    LicenseInterfaceSingleton* this = calloc(1, sizeof(LicenseInterfaceSingleton));
    LicenseInterfaceSingleton_init(this);
    return this;
}


AbeLicenseInterface* LicenseInterfaceSingleton_getInstance(void) {
        return LicenseInterfaceSingleton_licenseInterface;
}


void LicenseInterfaceSingleton_init(AbeLicenseInterface* licenseInterface) {
        if (licenseInterface != nullptr) {
            LicenseInterfaceSingleton_licenseInterface = licenseInterface;
        }
}

