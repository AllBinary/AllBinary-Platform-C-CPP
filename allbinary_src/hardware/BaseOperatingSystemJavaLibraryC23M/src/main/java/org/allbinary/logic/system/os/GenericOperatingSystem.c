// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/GenericOperatingSystem.h"
#include "org/allbinary/logic/java/character/CharacterSet.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/string/StringValidationUtil.h"
#include "org/allbinary/string/CommonSeps.h"
#include "org/allbinary/logic/system/os/OperatingSystemInterface.h"
#include "org/allbinary/logic/system/os/SystemProperties.h"














void GenericOperatingSystem_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void GenericOperatingSystem_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("GenericOperatingSystem", nullptr);
    java_register_method("GenericOperatingSystem", "getName", (void*) GenericOperatingSystem_getName);
    java_register_method("GenericOperatingSystem", "getVersion", (void*) GenericOperatingSystem_getVersion);
    java_register_method("GenericOperatingSystem", "getArch", (void*) GenericOperatingSystem_getArch);
    java_register_method("GenericOperatingSystem", "getCharacterSet", (void*) GenericOperatingSystem_getCharacterSet);
    java_register_method("GenericOperatingSystem", "isOverScan", (void*) GenericOperatingSystem_isOverScan);
    java_register_method("GenericOperatingSystem", "getOverScanXPercent", (void*) GenericOperatingSystem_getOverScanXPercent);
    java_register_method("GenericOperatingSystem", "getOverScanYPercent", (void*) GenericOperatingSystem_getOverScanYPercent);
    java_register_method("GenericOperatingSystem", "isScalable", (void*) GenericOperatingSystem_isScalable);
    java_register_method("GenericOperatingSystem", "isAutoHide", (void*) GenericOperatingSystem_isAutoHide);
    java_register_method("GenericOperatingSystem", "toString", (void*) GenericOperatingSystem_toString);
}

static void GenericOperatingSystem_initFields(GenericOperatingSystem* this) {
    this->osName = nullptr;
    this->osArch = nullptr;
    this->osVersion = nullptr;
    this->characterSet = CharacterSet_new();
    this->scalable = false;
}


void GenericOperatingSystem_init(GenericOperatingSystem* this) {
    GenericOperatingSystem_register();
    GenericOperatingSystem_initFields(this);
        SystemProperties* systemProperties = SystemProperties_getInstance();
        StringValidationUtil* stringValidationUtil = StringValidationUtil_getInstance();
        const char* EMPTY_STRING = StringUtil_getInstance()->EMPTY_STRING;
        if (StringValidationUtil_isEmpty(stringValidationUtil, SystemProperties_getName(systemProperties))) {
            this->osName = EMPTY_STRING;
        } else {
            this->osName = SystemProperties_getName(systemProperties);
        }
        if (StringValidationUtil_isEmpty(stringValidationUtil, SystemProperties_getArch(systemProperties))) {
            this->osArch = EMPTY_STRING;
        } else {
            this->osArch = SystemProperties_getArch(systemProperties);
        }
        if (StringValidationUtil_isEmpty(stringValidationUtil, SystemProperties_getVersion(systemProperties))) {
            this->osVersion = EMPTY_STRING;
        } else {
            this->osVersion = SystemProperties_getVersion(systemProperties);
        }
}

GenericOperatingSystem* GenericOperatingSystem_new(void) {
    GenericOperatingSystem* this = java_object_alloc(sizeof(GenericOperatingSystem), "GenericOperatingSystem");
    GenericOperatingSystem_init(this);
    return this;
}


const char* GenericOperatingSystem_getName(GenericOperatingSystem* this) {
        return this->osName;
}


const char* GenericOperatingSystem_getVersion(GenericOperatingSystem* this) {
        return this->osVersion;
}


const char* GenericOperatingSystem_getArch(GenericOperatingSystem* this) {
        return this->osArch;
}


CharacterSet* GenericOperatingSystem_getCharacterSet(GenericOperatingSystem* this) {
        return this->characterSet;
}


bool GenericOperatingSystem_isOverScan(GenericOperatingSystem* this) {
        return false;
}


int32_t GenericOperatingSystem_getOverScanXPercent(GenericOperatingSystem* this) {
        return 100;
}


int32_t GenericOperatingSystem_getOverScanYPercent(GenericOperatingSystem* this) {
        return 100;
}


bool GenericOperatingSystem_isScalable(GenericOperatingSystem* this) {
        return this->scalable;
}


bool GenericOperatingSystem_isAutoHide(GenericOperatingSystem* this) {
        return false;
}


const char* GenericOperatingSystem_toString(GenericOperatingSystem* this) {
        const char* NEW_LINE = CommonSeps_getInstance()->NEW_LINE;
        StringMaker* osBuffer = StringMaker_new();
        StringMaker_append(osBuffer, "Operating System Info: \n");
        StringMaker_append(osBuffer, GenericOperatingSystem_getName(this));
        StringMaker_append(osBuffer, NEW_LINE);
        StringMaker_append(osBuffer, GenericOperatingSystem_getArch(this));
        StringMaker_append(osBuffer, NEW_LINE);
        StringMaker_append(osBuffer, GenericOperatingSystem_getVersion(this));
        StringMaker_append(osBuffer, NEW_LINE);
        StringMaker_append(osBuffer, StringUtil_toString(StringUtil_getInstance(), GenericOperatingSystem_getCharacterSet(this)));
        StringMaker_append(osBuffer, NEW_LINE);
        return java_string_of(osBuffer);
}

