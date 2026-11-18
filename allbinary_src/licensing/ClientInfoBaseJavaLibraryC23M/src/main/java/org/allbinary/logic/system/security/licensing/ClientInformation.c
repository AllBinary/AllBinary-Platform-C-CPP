// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/ClientInformation.h"
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
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationData.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif
#if __has_include("org/allbinary/util/BasicArrayListUtil.h")
#include "org/allbinary/util/BasicArrayListUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/string/CommonSeps.h")
#include "org/allbinary/string/CommonSeps.h"
#endif
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif
#if __has_include("org/allbinary/logic/system/hardware/SystemHardwareFactory.h")
#include "org/allbinary/logic/system/hardware/SystemHardwareFactory.h"
#endif






















void ClientInformation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ClientInformation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ClientInformation", nullptr);
    java_register_method("ClientInformation", "init", (void*) ClientInformation_initMethod);
    java_register_method("ClientInformation", "getOperatingSystemInterface", (void*) ClientInformation_getOperatingSystemInterface);
    java_register_method("ClientInformation", "getName", (void*) ClientInformation_getName);
    java_register_method("ClientInformation", "getSpecialName", (void*) ClientInformation_getSpecialName);
    java_register_method("ClientInformation", "getVersion", (void*) ClientInformation_getVersion);
    java_register_method("ClientInformation", "getLicenseId", (void*) ClientInformation_getLicenseId);
    java_register_method("ClientInformation", "getLicenseServers", (void*) ClientInformation_getLicenseServers);
    java_register_method("ClientInformation", "getLicenseServer", (void*) ClientInformation_getLicenseServer);
    java_register_method("ClientInformation", "getNumberOfLicenseServers", (void*) ClientInformation_getNumberOfLicenseServers);
    java_register_method("ClientInformation", "toHashtable", (void*) ClientInformation_toHashtable);
    java_register_method("ClientInformation", "isSameId", (void*) ClientInformation_isSameId);
    java_register_method("ClientInformation", "isLargerOrDifferentServerList", (void*) ClientInformation_isLargerOrDifferentServerList);
    java_register_method("ClientInformation", "setHardSale", (void*) ClientInformation_setHardSale);
    java_register_method("ClientInformation", "isHardSale", (void*) ClientInformation_isHardSale);
    java_register_method("ClientInformation", "setOperatingSystemInterface", (void*) ClientInformation_setOperatingSystemInterface);
    java_register_method("ClientInformation", "setLicenseId", (void*) ClientInformation_setLicenseId);
    java_register_method("ClientInformation", "setLicenseServers", (void*) ClientInformation_setLicenseServers);
    java_register_method("ClientInformation", "toShortString", (void*) ClientInformation_toShortString);
}

static void ClientInformation_initFields(ClientInformation* this) {
    this->operatingSystemInterface = (NoOperatingSystem_staticInit(), NoOperatingSystem_NO_OPERATING_SYSTEM);
    this->tsUtil = TsUtil_getInstance();
    
    
    
    
    this->hardSale = true;
    this->licenseId = StringUtil_getInstance()->EMPTY_STRING;
    this->licenseServers = BasicArrayListUtil_getImmutableInstance(BasicArrayListUtil_getInstance());
}


void ClientInformation_init(ClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName) {
    ClientInformation_register();
    ClientInformation_initFields(this);
        this->name = name;
        this->version = version;
        this->specialName = specialName;
        this->shortName = java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), shortName), CommonSeps_getInstance()->UNDERSCORE), version));
        ClientInformation_initMethod(this);
}

ClientInformation* ClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName) {
    ClientInformation* this = java_object_alloc(sizeof(ClientInformation), "ClientInformation");
    ClientInformation_init(this, name, version, specialName, shortName);
    return this;
}


void ClientInformation_initMethod(ClientInformation* this) {
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
        Hashtable_put(clientInfoHashtable, abeClientInformationData->NAME, this->name);
        Hashtable_put(clientInfoHashtable, abeClientInformationData->VERSION, this->version);
        Hashtable_put(clientInfoHashtable, abeClientInformationData->SPECIALNAME, this->specialName);
        Hashtable_put(clientInfoHashtable, abeClientInformationData->LICENSEID, ClientInformation_getLicenseId(this));
        Hashtable_put(clientInfoHashtable, abeClientInformationData->OSNAME, GenericOperatingSystem_getName(genericOperatingSystem));
        Hashtable_put(clientInfoHashtable, abeClientInformationData->OSARCH, GenericOperatingSystem_getArch(genericOperatingSystem));
        Hashtable_put(clientInfoHashtable, abeClientInformationData->OSVERSION, GenericOperatingSystem_getVersion(genericOperatingSystem));
        Hashtable_put(clientInfoHashtable, abeClientInformationData->OS, java_string_of(genericOperatingSystem));
        HardwareInterface* hardwareInterface = SystemHardwareFactory_getInstance(SystemHardwareFactory_getInstance(), genericOperatingSystem);
        const char* hardwareString = java_string_of(hardwareInterface);
        Hashtable_put(clientInfoHashtable, abeClientInformationData->HARDWARE, hardwareString);
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

