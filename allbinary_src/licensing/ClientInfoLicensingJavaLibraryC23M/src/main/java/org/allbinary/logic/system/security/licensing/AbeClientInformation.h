#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATION_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATION_H
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
typedef struct ClientInformation ClientInformation;
typedef struct LicenseInitInfo LicenseInitInfo;
typedef struct LicenseInitInfoUtil LicenseInitInfoUtil;
typedef struct LogUtil LogUtil;
typedef struct PreLogUtil PreLogUtil;
typedef struct StringMaker StringMaker;
typedef struct StringValidationUtil StringValidationUtil;
typedef struct OperatingSystemFactory OperatingSystemFactory;
typedef struct CommonStrings CommonStrings;
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#include "org/allbinary/logic/system/security/licensing/ClientInformation.h"

// This is the information sent to the license server
typedef struct AbeClientInformation AbeClientInformation;
struct AbeClientInformation {
    ClientInformation base;
    LogUtil* logUtil;
};


AbeClientInformation* AbeClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName);

void AbeClientInformation_init(AbeClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName);

void AbeClientInformation_initMethod(AbeClientInformation* this);
#define AbeClientInformation_new4 AbeClientInformation_new
#define AbeClientInformation_init4 AbeClientInformation_init
#ifndef AbeClientInformation_getOperatingSystemInterface
#define AbeClientInformation_getOperatingSystemInterface ClientInformation_getOperatingSystemInterface
#endif
#ifndef AbeClientInformation_getName
#define AbeClientInformation_getName ClientInformation_getName
#endif
#ifndef AbeClientInformation_getSpecialName
#define AbeClientInformation_getSpecialName ClientInformation_getSpecialName
#endif
#ifndef AbeClientInformation_getVersion
#define AbeClientInformation_getVersion ClientInformation_getVersion
#endif
#ifndef AbeClientInformation_getLicenseId
#define AbeClientInformation_getLicenseId ClientInformation_getLicenseId
#endif
#ifndef AbeClientInformation_getLicenseServers
#define AbeClientInformation_getLicenseServers ClientInformation_getLicenseServers
#endif
#ifndef AbeClientInformation_getLicenseServer
#define AbeClientInformation_getLicenseServer ClientInformation_getLicenseServer
#endif
#ifndef AbeClientInformation_getNumberOfLicenseServers
#define AbeClientInformation_getNumberOfLicenseServers ClientInformation_getNumberOfLicenseServers
#endif
#ifndef AbeClientInformation_toHashtable
#define AbeClientInformation_toHashtable ClientInformation_toHashtable
#endif
#ifndef AbeClientInformation_isSameId
#define AbeClientInformation_isSameId ClientInformation_isSameId
#endif
#ifndef AbeClientInformation_isLargerOrDifferentServerList
#define AbeClientInformation_isLargerOrDifferentServerList ClientInformation_isLargerOrDifferentServerList
#endif
#ifndef AbeClientInformation_setHardSale
#define AbeClientInformation_setHardSale ClientInformation_setHardSale
#endif
#ifndef AbeClientInformation_isHardSale
#define AbeClientInformation_isHardSale ClientInformation_isHardSale
#endif
#ifndef AbeClientInformation_setOperatingSystemInterface
#define AbeClientInformation_setOperatingSystemInterface ClientInformation_setOperatingSystemInterface
#endif
#ifndef AbeClientInformation_setLicenseId
#define AbeClientInformation_setLicenseId ClientInformation_setLicenseId
#endif
#ifndef AbeClientInformation_setLicenseServers
#define AbeClientInformation_setLicenseServers ClientInformation_setLicenseServers
#endif
#ifndef AbeClientInformation_toShortString
#define AbeClientInformation_toShortString ClientInformation_toShortString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AbeClientInformation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AbeClientInformation_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_ABECLIENTINFORMATION_H
