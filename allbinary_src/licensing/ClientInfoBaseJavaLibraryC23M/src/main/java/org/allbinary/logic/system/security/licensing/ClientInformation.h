#ifndef ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H
#define ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H
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
typedef struct AbeClientInformationInterface AbeClientInformationInterface;
typedef struct AbeClientInformationData AbeClientInformationData;
typedef struct TsUtil TsUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct HardwareInterface HardwareInterface;
typedef struct SystemHardwareFactory SystemHardwareFactory;
typedef struct GenericOperatingSystem GenericOperatingSystem;
typedef struct NoOperatingSystem NoOperatingSystem;
typedef struct CommonSeps CommonSeps;
typedef struct BasicArrayList BasicArrayList;
typedef struct BasicArrayListUtil BasicArrayListUtil;
typedef struct StdUtil StdUtil;
typedef struct ABHashtable ABHashtable;
#if __has_include("org/allbinary/TsUtil.h")
#include "org/allbinary/TsUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"

// This is the information sent to the license server
typedef struct ClientInformation ClientInformation;
struct ClientInformation {
    AbeClientInformationInterface AbeClientInformationInterface_interface;
    GenericOperatingSystem* operatingSystemInterface;
    TsUtil* tsUtil;
    const char* name;
    const char* shortName;
    const char* version;
    const char* specialName;
    bool hardSale;
    const char* licenseId;
    BasicArrayList* licenseServers;
};


ClientInformation* ClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName);

void ClientInformation_init(ClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName);

void ClientInformation_initMethod(ClientInformation* this);

GenericOperatingSystem* ClientInformation_getOperatingSystemInterface(ClientInformation* this);

const char* ClientInformation_getName(ClientInformation* this);

const char* ClientInformation_getSpecialName(ClientInformation* this);

const char* ClientInformation_getVersion(ClientInformation* this);

const char* ClientInformation_getLicenseId(ClientInformation* this);

BasicArrayList* ClientInformation_getLicenseServers(ClientInformation* this);

const char* ClientInformation_getLicenseServer(ClientInformation* this, int32_t index);

int32_t ClientInformation_getNumberOfLicenseServers(ClientInformation* this);

ABHashtable* ClientInformation_toHashtable(ClientInformation* this);

bool ClientInformation_isSameId(ClientInformation* this, const char* alicenseId);

bool ClientInformation_isLargerOrDifferentServerList(ClientInformation* this, BasicArrayList* list);

void ClientInformation_setHardSale(ClientInformation* this, bool hardSale);

bool ClientInformation_isHardSale(ClientInformation* this);

void ClientInformation_setOperatingSystemInterface(ClientInformation* this, GenericOperatingSystem* operatingSystemInterface);

void ClientInformation_setLicenseId(ClientInformation* this, const char* licenseId);

void ClientInformation_setLicenseServers(ClientInformation* this, BasicArrayList* licenseServers);

const char* ClientInformation_toShortString(ClientInformation* this);
#define ClientInformation_new4 ClientInformation_new
#define ClientInformation_init4 ClientInformation_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ClientInformation_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ClientInformation_register(void);

#if __has_include("org/allbinary/logic/system/os/GenericOperatingSystem.h")
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayList.h")
#include "org/allbinary/util/BasicArrayList.h"
#endif
#if __has_include("org/allbinary/util/ABHashtable.h")
#include "org/allbinary/util/ABHashtable.h"
#endif

#endif // ORG_ALLBINARY_LOGIC_SYSTEM_SECURITY_LICENSING_CLIENTINFORMATION_H
