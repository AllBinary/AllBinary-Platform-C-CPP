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
// package org.allbinary

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/business/init/LicenseInitInfoUtil.h"
#include "org/allbinary/data/resource/ResourceUtil.h"
#include "org/allbinary/logic/system/security/licensing/PartnerIdentifierFileUtil.h"

typedef struct AllBinaryAndroidGameInitializationUtil AllBinaryAndroidGameInitializationUtil;
struct AllBinaryAndroidGameInitializationUtil {
    char unused;
};


AllBinaryAndroidGameInitializationUtil* AllBinaryAndroidGameInitializationUtil_new(void);
void AllBinaryAndroidGameInitializationUtil_init(void);

void AllBinaryAndroidGameInitializationUtil_init(AllBinaryAndroidGameInitializationUtil* this) {
}

AllBinaryAndroidGameInitializationUtil* AllBinaryAndroidGameInitializationUtil_new(void) {
    AllBinaryAndroidGameInitializationUtil* this = calloc(1, sizeof(AllBinaryAndroidGameInitializationUtil));
    AllBinaryAndroidGameInitializationUtil_init(this);
    return this;
}


void AllBinaryAndroidGameInitializationUtil_init(void) {
        ResourceUtil* resourceUtil = ResourceUtil_getInstance();
        AndroidResources* androidResources = AndroidResources_getInstance();
        LicenseInitInfoUtil* licenseInitInfoUtil = LicenseInitInfoUtil_getInstance();
        ResourceUtil_addResource(resourceUtil, licenseInitInfoUtil->INITFILENAME, java_string_of(androidResources->raw->licenseinitdata));
        ResourceUtil_addResource(resourceUtil, PartnerIdentifierFileUtil_getInstance()->FILE_NAME, java_string_of(androidResources->raw->partner));
        ResourceUtil_addResource(resourceUtil, licenseInitInfoUtil->ABOUT, java_string_of(androidResources->raw->about));
}

