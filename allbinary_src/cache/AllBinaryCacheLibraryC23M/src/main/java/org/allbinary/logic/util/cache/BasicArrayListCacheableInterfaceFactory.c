// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/BasicArrayListCacheableInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/BasicArrayListCacheable.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"




void BasicArrayListCacheableInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayListCacheableInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListCacheableInterfaceFactory", nullptr);
    java_register_method("BasicArrayListCacheableInterfaceFactory", "getInstance", (void*) BasicArrayListCacheableInterfaceFactory_getInstance);
}

void BasicArrayListCacheableInterfaceFactory_init(BasicArrayListCacheableInterfaceFactory* this) {
    BasicArrayListCacheableInterfaceFactory_register();
}

BasicArrayListCacheableInterfaceFactory* BasicArrayListCacheableInterfaceFactory_new(void) {
    BasicArrayListCacheableInterfaceFactory* this = java_object_alloc(sizeof(BasicArrayListCacheableInterfaceFactory), "BasicArrayListCacheableInterfaceFactory");
    BasicArrayListCacheableInterfaceFactory_init(this);
    return this;
}


// throws Exception
CacheableInterface* BasicArrayListCacheableInterfaceFactory_getInstance(BasicArrayListCacheableInterfaceFactory* this, void* key) {
        return BasicArrayListCacheable_new();
}

