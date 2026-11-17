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
// package org.allbinary.business.init

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"

typedef struct LicenseInitInfoUtil LicenseInitInfoUtil;
struct LicenseInitInfoUtil {
    const char* INITFILENAME;
    const char* ABOUT;
    const char* PRIVACY_POLICY;
    const char* OFFICIAL_ALLBINARY_SERVICES_SERVER;
};

static LicenseInitInfoUtil* LicenseInitInfoUtil_instance;

LicenseInitInfoUtil* LicenseInitInfoUtil_new(void);
LicenseInitInfoUtil* LicenseInitInfoUtil_getInstance(void);
void LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil* this, const char* filePath);

void LicenseInitInfoUtil_init(LicenseInitInfoUtil* this);
void LicenseInitInfoUtil_write(LicenseInitInfoUtil* this, LicenseInitInfo* initData);
LicenseInitInfo* LicenseInitInfoUtil_read(LicenseInitInfoUtil* this);
LicenseInitInfo* LicenseInitInfoUtil_readAgain(LicenseInitInfoUtil* this, int32_t initializeCounter);

// Static fields with runtime initializers: call this once at startup
void LicenseInitInfoUtil_staticInit(void) {
    LicenseInitInfoUtil_instance = LicenseInitInfoUtil_new();
}

static void LicenseInitInfoUtil_initFields(LicenseInitInfoUtil* this) {
    this->INITFILENAME = "licenseinitdata.dat";
    this->ABOUT = "about";
    this->PRIVACY_POLICY = "privacy_policy";
    this->OFFICIAL_ALLBINARY_SERVICES_SERVER = "https://services.allbinary.com/LicServ/serverssl.php";
}


LicenseInitInfoUtil* LicenseInitInfoUtil_getInstance(void) {
        return LicenseInitInfoUtil_instance;
}


// synchronized
void LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil* this, const char* filePath) {
}


void LicenseInitInfoUtil_init(LicenseInitInfoUtil* this) {
    LicenseInitInfoUtil_initFields(this);
}

LicenseInitInfoUtil* LicenseInitInfoUtil_new(void) {
    LicenseInitInfoUtil* this = calloc(1, sizeof(LicenseInitInfoUtil));
    LicenseInitInfoUtil_init(this);
    return this;
}


// throws Exception
// synchronized
void LicenseInitInfoUtil_write(LicenseInitInfoUtil* this, LicenseInitInfo* initData) {
}


// throws Exception
// synchronized
LicenseInitInfo* LicenseInitInfoUtil_read(LicenseInitInfoUtil* this) {
        return LicenseInitInfoUtil_readAgain(this, 0);
}


// throws Exception
// synchronized
LicenseInitInfo* LicenseInitInfoUtil_readAgain(LicenseInitInfoUtil* this, int32_t initializeCounter) {
        LicenseInitInfo* licenseInitInfo = LicenseInitInfo_new();
        LicenseInitInfo_clearServers(licenseInitInfo);
        LicenseInitInfo_addServer(licenseInitInfo, this->OFFICIAL_ALLBINARY_SERVICES_SERVER);
        return licenseInitInfo;
}

