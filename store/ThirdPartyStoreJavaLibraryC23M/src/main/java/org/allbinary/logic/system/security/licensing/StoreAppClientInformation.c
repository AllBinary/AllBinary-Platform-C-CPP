// Generated Code Do Not Modify
#include "org/allbinary/logic/system/security/licensing/StoreAppClientInformation.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformation.h"





void StoreAppClientInformation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void StoreAppClientInformation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("StoreAppClientInformation", "AbeClientInformation");
    java_register_method("StoreAppClientInformation", "getLongArrayIdentifier", (void*) StoreAppClientInformation_getLongArrayIdentifier);
}

static void StoreAppClientInformation_initFields(StoreAppClientInformation* this) {
    
}


void StoreAppClientInformation_init(StoreAppClientInformation* this, const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier) {
    StoreAppClientInformation_register();
        AbeClientInformation_init(&this->base, name, version, specialName, shortName);
        StoreAppClientInformation_initFields(this);
        this->longArrayIdentifier = longArrayIdentifier;
}

StoreAppClientInformation* StoreAppClientInformation_new(const char* name, const char* version, const char* specialName, const char* shortName, int64_t* longArrayIdentifier) {
    StoreAppClientInformation* this = java_object_alloc(sizeof(StoreAppClientInformation), "StoreAppClientInformation");
    StoreAppClientInformation_init(this, name, version, specialName, shortName, longArrayIdentifier);
    return this;
}


int64_t* StoreAppClientInformation_getLongArrayIdentifier(StoreAppClientInformation* this) {
        return this->longArrayIdentifier;
}

