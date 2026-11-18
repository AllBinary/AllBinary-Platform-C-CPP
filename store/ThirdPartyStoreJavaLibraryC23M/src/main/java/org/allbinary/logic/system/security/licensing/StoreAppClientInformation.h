#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H
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
typedef struct AbeClientInformation AbeClientInformation;
typedef struct LongArrayIdentifierInterface LongArrayIdentifierInterface;
#include "org/allbinary/thirdparty/store/LongArrayIdentifierInterface.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"

typedef struct StoreAppClientInformation StoreAppClientInformation;
struct StoreAppClientInformation {
    AbeClientInformation base;
    LongArrayIdentifierInterface LongArrayIdentifierInterface_interface;
    int64_t* longArrayIdentifier;
};


StoreAppClientInformation* StoreAppClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier);

void StoreAppClientInformation_init(StoreAppClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier);

int64_t* StoreAppClientInformation_getLongArrayIdentifier(StoreAppClientInformation* this);
#define StoreAppClientInformation_new5 StoreAppClientInformation_new
#define StoreAppClientInformation_init5 StoreAppClientInformation_init
#ifndef StoreAppClientInformation_getOperatingSystemInterface
#define StoreAppClientInformation_getOperatingSystemInterface ClientInformation_getOperatingSystemInterface
#endif
#ifndef StoreAppClientInformation_getName
#define StoreAppClientInformation_getName ClientInformation_getName
#endif
#ifndef StoreAppClientInformation_getSpecialName
#define StoreAppClientInformation_getSpecialName ClientInformation_getSpecialName
#endif
#ifndef StoreAppClientInformation_getVersion
#define StoreAppClientInformation_getVersion ClientInformation_getVersion
#endif
#ifndef StoreAppClientInformation_getLicenseId
#define StoreAppClientInformation_getLicenseId ClientInformation_getLicenseId
#endif
#ifndef StoreAppClientInformation_getLicenseServers
#define StoreAppClientInformation_getLicenseServers ClientInformation_getLicenseServers
#endif
#ifndef StoreAppClientInformation_getLicenseServer
#define StoreAppClientInformation_getLicenseServer ClientInformation_getLicenseServer
#endif
#ifndef StoreAppClientInformation_getNumberOfLicenseServers
#define StoreAppClientInformation_getNumberOfLicenseServers ClientInformation_getNumberOfLicenseServers
#endif
#ifndef StoreAppClientInformation_toHashtable
#define StoreAppClientInformation_toHashtable ClientInformation_toHashtable
#endif
#ifndef StoreAppClientInformation_isSameId
#define StoreAppClientInformation_isSameId ClientInformation_isSameId
#endif
#ifndef StoreAppClientInformation_isLargerOrDifferentServerList
#define StoreAppClientInformation_isLargerOrDifferentServerList ClientInformation_isLargerOrDifferentServerList
#endif
#ifndef StoreAppClientInformation_setHardSale
#define StoreAppClientInformation_setHardSale ClientInformation_setHardSale
#endif
#ifndef StoreAppClientInformation_isHardSale
#define StoreAppClientInformation_isHardSale ClientInformation_isHardSale
#endif
#ifndef StoreAppClientInformation_setOperatingSystemInterface
#define StoreAppClientInformation_setOperatingSystemInterface ClientInformation_setOperatingSystemInterface
#endif
#ifndef StoreAppClientInformation_setLicenseId
#define StoreAppClientInformation_setLicenseId ClientInformation_setLicenseId
#endif
#ifndef StoreAppClientInformation_setLicenseServers
#define StoreAppClientInformation_setLicenseServers ClientInformation_setLicenseServers
#endif
#ifndef StoreAppClientInformation_toShortString
#define StoreAppClientInformation_toShortString ClientInformation_toShortString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void StoreAppClientInformation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void StoreAppClientInformation_register(void);


#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_STOREAPPCLIENTINFORMATION_H
