// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/CacheInterfaceFactory.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheType.h"
#include "org/allbinary/logic/util/cache/CachePolicy.h"





void CacheInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CacheInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CacheInterfaceFactory", nullptr);
}


void CacheInterfaceFactory_init(CacheInterfaceFactory* this) {
    CacheInterfaceFactory_register();
}

CacheInterfaceFactory* CacheInterfaceFactory_new(void) {
    CacheInterfaceFactory* this = java_object_alloc(sizeof(CacheInterfaceFactory), "CacheInterfaceFactory");
    CacheInterfaceFactory_init(this);
    return this;
}


// throws Exception
CacheInterface* CacheInterfaceFactory_getInstance(CacheType* cacheType, CachePolicy* cachePolicy) {
        java_throw(java_exception_new("Exception", java_concat("No such ", java_string_of(cacheType))));
}

