// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/PoolInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/PoolType.h"
#include "org/allbinary/logic/util/cache/CachePolicy.h"





void PoolInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PoolInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PoolInterfaceFactory", nullptr);
}


void PoolInterfaceFactory_init(PoolInterfaceFactory* this) {
    PoolInterfaceFactory_register();
}

PoolInterfaceFactory* PoolInterfaceFactory_new(void) {
    PoolInterfaceFactory* this = java_object_alloc(sizeof(PoolInterfaceFactory), "PoolInterfaceFactory");
    PoolInterfaceFactory_init(this);
    return this;
}


// throws Exception
PoolInterface* PoolInterfaceFactory_getInstance(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface, PoolType* poolType, CachePolicy* cachePolicy) {
        java_throw(java_exception_new("Exception", java_concat("No Such PoolType: ", java_string_of(poolType))));
}

