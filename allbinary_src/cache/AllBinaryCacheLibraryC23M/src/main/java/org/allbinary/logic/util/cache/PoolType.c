// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/PoolType.h"
#include "org/allbinary/logic/util/cache/CacheType.h"






void PoolType_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void PoolType_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PoolType", nullptr);
    java_register_method("PoolType", "getCacheType", (void*) PoolType_getCacheType);
    java_register_method("PoolType", "toString", (void*) PoolType_toString);
}

static void PoolType_initFields(PoolType* this) {
    
}


void PoolType_init(PoolType* this, CacheType* cacheType) {
    PoolType_register();
    PoolType_initFields(this);
        this->cacheType = cacheType;
}

PoolType* PoolType_new(CacheType* cacheType) {
    PoolType* this = java_object_alloc(sizeof(PoolType), "PoolType");
    PoolType_init(this, cacheType);
    return this;
}


CacheType* PoolType_getCacheType(PoolType* this) {
        return this->cacheType;
}


const char* PoolType_toString(PoolType* this) {
        const char* POOL_TYPE = "PoolType: ";
        return java_concat(POOL_TYPE, java_string_of(PoolType_getCacheType(this)));
}

