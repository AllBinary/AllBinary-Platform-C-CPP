// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LicenseServerInitFileUtil.h"




static void LicenseServerInitFileUtil_write(LicenseServerInitFileUtil* this);

void LicenseServerInitFileUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LicenseServerInitFileUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseServerInitFileUtil", nullptr);
    java_register_method("LicenseServerInitFileUtil", "init", (void*) LicenseServerInitFileUtil_initMethod);
    java_register_method("LicenseServerInitFileUtil", "write", (void*) LicenseServerInitFileUtil_write);
}

void LicenseServerInitFileUtil_init(LicenseServerInitFileUtil* this) {
    LicenseServerInitFileUtil_register();
}

LicenseServerInitFileUtil* LicenseServerInitFileUtil_new(void) {
    LicenseServerInitFileUtil* this = java_object_alloc(sizeof(LicenseServerInitFileUtil), "LicenseServerInitFileUtil");
    LicenseServerInitFileUtil_init(this);
    return this;
}


void LicenseServerInitFileUtil_initMethod(LicenseServerInitFileUtil* this) {
}


static void LicenseServerInitFileUtil_write(LicenseServerInitFileUtil* this) {
}

