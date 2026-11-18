#ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
#define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
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
typedef struct LicenseInitInfo LicenseInitInfo;

typedef struct LicenseInitInfoUtil LicenseInitInfoUtil;
struct LicenseInitInfoUtil {
    const char* INITFILENAME;
    const char* ABOUT;
    const char* PRIVACY_POLICY;
    const char* OFFICIAL_ALLBINARY_SERVICES_SERVER;
};


LicenseInitInfoUtil* LicenseInitInfoUtil_new(void);

LicenseInitInfoUtil* LicenseInitInfoUtil_getInstance(void);

void LicenseInitInfoUtil_setFilePath(LicenseInitInfoUtil* this, const char* filePath);

void LicenseInitInfoUtil_init(LicenseInitInfoUtil* this);

void LicenseInitInfoUtil_write(LicenseInitInfoUtil* this, LicenseInitInfo* initData);

LicenseInitInfo* LicenseInitInfoUtil_read(LicenseInitInfoUtil* this);

LicenseInitInfo* LicenseInitInfoUtil_readAgain(LicenseInitInfoUtil* this, int32_t initializeCounter);
#define LicenseInitInfoUtil_new0 LicenseInitInfoUtil_new
#define LicenseInitInfoUtil_init0 LicenseInitInfoUtil_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseInitInfoUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseInitInfoUtil_register(void);


#endif // ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFOUTIL_H
