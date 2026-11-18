// Generated Code Do Not Modify
#include "org/allbinary/game/midlet/LicenseLoadingType.h"




void LicenseLoadingType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LicenseLoadingType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseLoadingType", nullptr);
}


void LicenseLoadingType_init(LicenseLoadingType* this, const char* name) {
    LicenseLoadingType_register();
}

LicenseLoadingType* LicenseLoadingType_new(const char* name) {
    LicenseLoadingType* this = java_object_alloc(sizeof(LicenseLoadingType), "LicenseLoadingType");
    LicenseLoadingType_init(this, name);
    return this;
}

