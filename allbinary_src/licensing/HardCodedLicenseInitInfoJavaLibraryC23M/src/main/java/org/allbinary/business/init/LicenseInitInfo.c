// Generated Code Do Not Modify
#include "org/allbinary/business/init/LicenseInitInfo.h"
#include "org/allbinary/debug/DebugFactory.h"
#include "org/allbinary/debug/NoDebug.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif













void LicenseInitInfo_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LicenseInitInfo_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseInitInfo", nullptr);
    java_register_method("LicenseInitInfo", "getLicenseId", (void*) LicenseInitInfo_getLicenseId);
    java_register_method("LicenseInitInfo", "getServer", (void*) LicenseInitInfo_getServer);
    java_register_method("LicenseInitInfo", "getNumberOfServers", (void*) LicenseInitInfo_getNumberOfServers);
    java_register_method("LicenseInitInfo", "setLicenseId", (void*) LicenseInitInfo_setLicenseId);
    java_register_method("LicenseInitInfo", "clearServers", (void*) LicenseInitInfo_clearServers);
    java_register_method("LicenseInitInfo", "setServer", (void*) LicenseInitInfo_setServer);
    java_register_method("LicenseInitInfo", "addServer", (void*) LicenseInitInfo_addServer);
    java_register_method("LicenseInitInfo", "getServerList", (void*) LicenseInitInfo_getServerList);
    java_register_method("LicenseInitInfo", "setServerList", (void*) LicenseInitInfo_setServerList);
}

static void LicenseInitInfo_initFields(LicenseInitInfo* this) {
    this->id = StringUtil_getInstance()->EMPTY_STRING;
    this->serverList = BasicArrayListD_new();
}


void LicenseInitInfo_init(LicenseInitInfo* this) {
    LicenseInitInfo_register();
    LicenseInitInfo_initFields(this);
}

LicenseInitInfo* LicenseInitInfo_new(void) {
    LicenseInitInfo* this = java_object_alloc(sizeof(LicenseInitInfo), "LicenseInitInfo");
    LicenseInitInfo_init(this);
    return this;
}


const char* LicenseInitInfo_getLicenseId(LicenseInitInfo* this) {
        return this->id;
}


const char* LicenseInitInfo_getServer(LicenseInitInfo* this, int32_t index) {
        return ((const char*) BasicArrayList_get(this->serverList, index));
}


int32_t LicenseInitInfo_getNumberOfServers(LicenseInitInfo* this) {
        return BasicArrayList_size(this->serverList);
}


void LicenseInitInfo_setLicenseId(LicenseInitInfo* this, const char* value) {
        this->id = value;
}


void LicenseInitInfo_clearServers(LicenseInitInfo* this) {
        BasicArrayList_clear(this->serverList);
}


void LicenseInitInfo_setServer(LicenseInitInfo* this, const char* value, int32_t index) {
        BasicArrayList_addAt(this->serverList, index, value);
}


void LicenseInitInfo_addServer(LicenseInitInfo* this, const char* value) {
        BasicArrayList_add(this->serverList, value);
}


BasicArrayList* LicenseInitInfo_getServerList(LicenseInitInfo* this) {
        return this->serverList;
}


void LicenseInitInfo_setServerList(LicenseInitInfo* this, BasicArrayList* servers) {
        if (DebugFactory_getInstance() == NoDebug_getInstance()) {
            this->serverList = servers;
        }
}

