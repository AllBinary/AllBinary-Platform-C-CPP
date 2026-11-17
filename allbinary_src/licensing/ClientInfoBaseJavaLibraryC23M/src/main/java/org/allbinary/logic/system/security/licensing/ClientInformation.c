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
#include "org/allbinary/TsUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/system/hardware/HardwareInterface.h"
#include "org/allbinary/logic/system/hardware/SystemHardwareFactory.h"
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/system/os/NoOperatingSystem.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListUtil.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
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
void ClientInformation_init(ClientInformation* this);
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

static void ClientInformation_initFields(ClientInformation* this) {
    this->operatingSystemInterface = NoOperatingSystem_NO_OPERATING_SYSTEM;
    this->tsUtil = TsUtil_getInstance();
    
    
    
    
    this->hardSale = true;
    this->licenseId = StringUtil_getInstance()->EMPTY_STRING;
    this->licenseServers = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}


void ClientInformation_init(ClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName) {
    ClientInformation_initFields(this);
        this->name = name;
        this->version = version;
        this->specialName = specialName;
        this->shortName = JAVA_CALL(JAVA_CALL(JAVA_CALL(StringMaker_append(StringMaker_new(), shortName), append, CommonSeps_getInstance()->UNDERSCORE), append, version), toString);
        ClientInformation_init(this);
}

ClientInformation* ClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName) {
    ClientInformation* this = calloc(1, sizeof(ClientInformation));
    ClientInformation_init(this, name, version, specialName, shortName);
    return this;
}


void ClientInformation_init(ClientInformation* this) {
}


GenericOperatingSystem* ClientInformation_getOperatingSystemInterface(ClientInformation* this) {
        return this->operatingSystemInterface;
}


const char* ClientInformation_getName(ClientInformation* this) {
        return this->name;
}


const char* ClientInformation_getSpecialName(ClientInformation* this) {
        return this->specialName;
}


const char* ClientInformation_getVersion(ClientInformation* this) {
        return this->version;
}


const char* ClientInformation_getLicenseId(ClientInformation* this) {
        return this->licenseId;
}


BasicArrayList* ClientInformation_getLicenseServers(ClientInformation* this) {
        return this->licenseServers;
}


const char* ClientInformation_getLicenseServer(ClientInformation* this, int32_t index) {
        return ((const char*) this->licenseServers->objectArray[index]);
}


int32_t ClientInformation_getNumberOfLicenseServers(ClientInformation* this) {
        return BasicArrayList_size(this->licenseServers);
}


ABHashtable* ClientInformation_toHashtable(ClientInformation* this) {
        AbeClientInformationData* abeClientInformationData = AbeClientInformationData_getInstance();
        GenericOperatingSystem* genericOperatingSystem = ClientInformation_getOperatingSystemInterface(this);
        ABHashtable* clientInfoHashtable = StdUtil_createHashtable(StdUtil_getInstance());
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->NAME, this->name);
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->VERSION, this->version);
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->SPECIALNAME, this->specialName);
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->LICENSEID, ClientInformation_getLicenseId(this));
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->OSNAME, GenericOperatingSystem_getName(genericOperatingSystem));
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->OSARCH, GenericOperatingSystem_getArch(genericOperatingSystem));
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->OSVERSION, GenericOperatingSystem_getVersion(genericOperatingSystem));
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->OS, GenericOperatingSystem_toString(genericOperatingSystem));
        HardwareInterface* hardwareInterface = SystemHardwareFactory_getInstance(SystemHardwareFactory_getInstance(), genericOperatingSystem);
        const char* hardwareString = HardwareInterface_toString(hardwareInterface);
        ABHashtable_put(clientInfoHashtable, abeClientInformationData->HARDWARE, hardwareString);
        return clientInfoHashtable;
}


bool ClientInformation_isSameId(ClientInformation* this, const char* alicenseId) {
        if (TsUtil_compareTo(this->tsUtil, ClientInformation_getLicenseId(this), alicenseId) == 0) {
            return true;
        } else {
            return false;
        }
}


bool ClientInformation_isLargerOrDifferentServerList(ClientInformation* this, BasicArrayList* list) {
        int32_t size = BasicArrayList_size(list) - 1;
        int32_t currentSize = BasicArrayList_size(this->licenseServers) - 1;
        if (size > currentSize) {
            return true;
        }
        for (int32_t index = size; index >= 0; index--) {
            const char* newServerName = ((const char*) list->objectArray[index]);
            for (int32_t index2 = currentSize; index2 >= 0; index2--) {
                const char* nextOldServerName = ((const char*) this->licenseServers->objectArray[index]);
                if (TsUtil_compareTo(this->tsUtil, newServerName, nextOldServerName) != 0) {
                    return true;
                }
            }
        }
        return false;
}


void ClientInformation_setHardSale(ClientInformation* this, bool hardSale) {
        this->hardSale = hardSale;
}


bool ClientInformation_isHardSale(ClientInformation* this) {
        return this->hardSale;
}


void ClientInformation_setOperatingSystemInterface(ClientInformation* this, GenericOperatingSystem* operatingSystemInterface) {
        this->operatingSystemInterface = operatingSystemInterface;
}


void ClientInformation_setLicenseId(ClientInformation* this, const char* licenseId) {
        this->licenseId = licenseId;
}


void ClientInformation_setLicenseServers(ClientInformation* this, BasicArrayList* licenseServers) {
        this->licenseServers = licenseServers;
}


const char* ClientInformation_toShortString(ClientInformation* this) {
        return this->shortName;
}

