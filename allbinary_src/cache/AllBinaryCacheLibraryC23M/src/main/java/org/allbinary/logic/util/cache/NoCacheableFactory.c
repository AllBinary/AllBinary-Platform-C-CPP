// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/NoCacheableFactory.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"





void NoCacheableFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NoCacheableFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoCacheableFactory", nullptr);
    java_register_method("NoCacheableFactory", "getInstance", (void*) NoCacheableFactory_getInstance);
}


void NoCacheableFactory_init(NoCacheableFactory* this) {
    NoCacheableFactory_register();
}

NoCacheableFactory* NoCacheableFactory_new(void) {
    NoCacheableFactory* this = java_object_alloc(sizeof(NoCacheableFactory), "NoCacheableFactory");
    NoCacheableFactory_init(this);
    return this;
}


// throws Exception
CacheableInterface* NoCacheableFactory_getInstance(NoCacheableFactory* this, void* key) {
        java_throw(java_exception_new("Exception", "This Factory Does Not"));
}

