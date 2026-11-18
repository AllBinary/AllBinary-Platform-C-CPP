// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/AutomaticCacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/AutomaticCacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheType.h"
#include "org/allbinary/logic/util/cache/CachePolicy.h"





void AutomaticCacheInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AutomaticCacheInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AutomaticCacheInterfaceFactory", nullptr);
}


void AutomaticCacheInterfaceFactory_init(AutomaticCacheInterfaceFactory* this) {
    AutomaticCacheInterfaceFactory_register();
}

AutomaticCacheInterfaceFactory* AutomaticCacheInterfaceFactory_new(void) {
    AutomaticCacheInterfaceFactory* this = java_object_alloc(sizeof(AutomaticCacheInterfaceFactory), "AutomaticCacheInterfaceFactory");
    AutomaticCacheInterfaceFactory_init(this);
    return this;
}


// throws Exception
AutomaticCacheInterface* AutomaticCacheInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, CacheType* cacheType, CachePolicy* cachePolicy) {
        java_throw(java_exception_new("Exception", java_concat("No such ", java_string_of(cacheType))));
}

