// Generated Code Do Not Modify
#include "org/allbinary/thirdparty/store/ThirdPartyStoreFactory.h"
#include "org/allbinary/thirdparty/store/NoThirdPartyStore.h"
#include "org/allbinary/thirdparty/store/ThirdPartyStore.h"


static NoThirdPartyStore* ThirdPartyStoreFactory_instance;



void ThirdPartyStoreFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ThirdPartyStoreFactory_instance = NoThirdPartyStore_new();
}

void ThirdPartyStoreFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ThirdPartyStoreFactory", nullptr);
}


ThirdPartyStore* ThirdPartyStoreFactory_getInstance(void) {
        return (ThirdPartyStoreFactory_staticInit(), ThirdPartyStoreFactory_instance);
}


void ThirdPartyStoreFactory_init(ThirdPartyStoreFactory* this) {
    ThirdPartyStoreFactory_register();
}

ThirdPartyStoreFactory* ThirdPartyStoreFactory_new(void) {
    ThirdPartyStoreFactory* this = java_object_alloc(sizeof(ThirdPartyStoreFactory), "ThirdPartyStoreFactory");
    ThirdPartyStoreFactory_init(this);
    return this;
}

