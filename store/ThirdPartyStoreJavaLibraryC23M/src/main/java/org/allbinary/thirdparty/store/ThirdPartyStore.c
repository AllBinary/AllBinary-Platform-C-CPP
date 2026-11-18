// Generated Code Do Not Modify
#include "org/allbinary/thirdparty/store/ThirdPartyStore.h"
#include "org/allbinary/logic/system/security/licensing/AbeClientInformationInterface.h"








void ThirdPartyStore_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ThirdPartyStore_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThirdPartyStore", nullptr);
    java_register_method("ThirdPartyStore", "authorize", (void*) ThirdPartyStore_authorize);
    java_register_method("ThirdPartyStore", "isAuthorized", (void*) ThirdPartyStore_isAuthorized);
    java_register_method("ThirdPartyStore", "setAuthorized", (void*) ThirdPartyStore_setAuthorized);
    java_register_method("ThirdPartyStore", "getName", (void*) ThirdPartyStore_getName);
}

static void ThirdPartyStore_initFields(ThirdPartyStore* this) {
    this->authorized = false;
    
}


void ThirdPartyStore_init(ThirdPartyStore* this, const char* name) {
    ThirdPartyStore_register();
    ThirdPartyStore_initFields(this);
        this->name = name;
}

ThirdPartyStore* ThirdPartyStore_new(const char* name) {
    ThirdPartyStore* this = java_object_alloc(sizeof(ThirdPartyStore), "ThirdPartyStore");
    ThirdPartyStore_init(this, name);
    return this;
}


void ThirdPartyStore_authorize(ThirdPartyStore* this, AbeClientInformationInterface* clientInformationInterface) {
}


bool ThirdPartyStore_isAuthorized(ThirdPartyStore* this) {
        return this->authorized;
}


void ThirdPartyStore_setAuthorized(ThirdPartyStore* this, bool authorized) {
        this->authorized = authorized;
}


const char* ThirdPartyStore_getName(ThirdPartyStore* this) {
        return this->name;
}

