// Generated Code Do Not Modify
#include "org/allbinary/logic/system/os/SystemProperties.h"


static SystemProperties* SystemProperties_instance;







void SystemProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SystemProperties_instance = SystemProperties_new();
}

void SystemProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SystemProperties", nullptr);
    java_register_method("SystemProperties", "getName", (void*) SystemProperties_getName);
    java_register_method("SystemProperties", "getArch", (void*) SystemProperties_getArch);
    java_register_method("SystemProperties", "getVersion", (void*) SystemProperties_getVersion);
    java_register_method("SystemProperties", "getUserHomePath", (void*) SystemProperties_getUserHomePath);
}

static void SystemProperties_initFields(SystemProperties* this) {
    this->OS_NAME = "os.name";
    this->OS_ARCH = "os.arch";
    this->OS_VERSION = "os.version";
    this->USER_HOME = "user.home";
}


SystemProperties* SystemProperties_getInstance(void) {
        return (SystemProperties_staticInit(), SystemProperties_instance);
}


void SystemProperties_init(SystemProperties* this) {
    SystemProperties_register();
    SystemProperties_initFields(this);
}

SystemProperties* SystemProperties_new(void) {
    SystemProperties* this = java_object_alloc(sizeof(SystemProperties), "SystemProperties");
    SystemProperties_init(this);
    return this;
}


const char* SystemProperties_getName(SystemProperties* this) {
        return System_getProperty(this->OS_NAME);
}


const char* SystemProperties_getArch(SystemProperties* this) {
        return System_getProperty(this->OS_ARCH);
}


const char* SystemProperties_getVersion(SystemProperties* this) {
        return System_getProperty(this->OS_VERSION);
}


const char* SystemProperties_getUserHomePath(SystemProperties* this) {
        return System_getProperty(this->USER_HOME);
}

