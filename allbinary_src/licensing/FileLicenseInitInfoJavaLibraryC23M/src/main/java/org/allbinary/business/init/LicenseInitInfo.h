#ifndef ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
#define ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
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
typedef struct DebugFactory DebugFactory;
typedef struct NoDebug NoDebug;
typedef struct StringUtil StringUtil;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListD BasicArrayListD;
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

typedef struct LicenseInitInfo LicenseInitInfo;
struct LicenseInitInfo {
    const char* id;
    BasicArrayList* serverVector;
};


LicenseInitInfo* LicenseInitInfo_new(void);

void LicenseInitInfo_init(LicenseInitInfo* this);

const char* LicenseInitInfo_getLicenseId(LicenseInitInfo* this);

const char* LicenseInitInfo_getServer(LicenseInitInfo* this, int32_t index);

int32_t LicenseInitInfo_getNumberOfServers(LicenseInitInfo* this);

void LicenseInitInfo_setLicenseId(LicenseInitInfo* this, const char* value);

void LicenseInitInfo_clearServers(LicenseInitInfo* this);

void LicenseInitInfo_setServer(LicenseInitInfo* this, const char* value, int32_t index);

void LicenseInitInfo_addServer(LicenseInitInfo* this, const char* value);

BasicArrayList* LicenseInitInfo_getServerList(LicenseInitInfo* this);

void LicenseInitInfo_setServerList(LicenseInitInfo* this, BasicArrayList* servers);
#define LicenseInitInfo_new0 LicenseInitInfo_new
#define LicenseInitInfo_init0 LicenseInitInfo_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void LicenseInitInfo_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void LicenseInitInfo_register(void);

#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif

#endif // ORG_ALLBINARY_BUSINESS_INIT_LICENSEINITINFO_H
