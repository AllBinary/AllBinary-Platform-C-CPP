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


SystemProperties* SystemProperties_getInstance(void) {
        return (SystemProperties_staticInit(), SystemProperties_instance);
}


void SystemProperties_init(SystemProperties* this) {
    SystemProperties_register();
}

SystemProperties* SystemProperties_new(void) {
    SystemProperties* this = java_object_alloc(sizeof(SystemProperties), "SystemProperties");
    SystemProperties_init(this);
    return this;
}


const char* SystemProperties_getName(SystemProperties* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* SystemProperties_getArch(SystemProperties* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* SystemProperties_getVersion(SystemProperties* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}


const char* SystemProperties_getUserHomePath(SystemProperties* this) {
        java_throw(java_exception_new("RuntimeException", ""));
}

