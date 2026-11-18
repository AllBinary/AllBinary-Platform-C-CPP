// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/LicenseStrings.h"


static LicenseStrings* LicenseStrings_instance;


void LicenseStrings_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    LicenseStrings_instance = LicenseStrings_new();
}

void LicenseStrings_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LicenseStrings", nullptr);
}

static void LicenseStrings_initFields(LicenseStrings* this) {
    this->LOCKED = "Demo Locked Feature";
}

void LicenseStrings_init(LicenseStrings* this) {
    LicenseStrings_register();
    LicenseStrings_initFields(this);
}

LicenseStrings* LicenseStrings_new(void) {
    LicenseStrings* this = java_object_alloc(sizeof(LicenseStrings), "LicenseStrings");
    LicenseStrings_init(this);
    return this;
}


LicenseStrings* LicenseStrings_getInstance(void) {
        return (LicenseStrings_staticInit(), LicenseStrings_instance);
}

