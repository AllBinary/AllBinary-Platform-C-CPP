// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/PoolTypeFactory.h"
#include "org/allbinary/logic/util/cache/PoolType.h"
#include "org/allbinary/logic/util/cache/CacheTypeFactory.h"


static PoolTypeFactory* PoolTypeFactory_instance;


void PoolTypeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    PoolTypeFactory_instance = PoolTypeFactory_new();
}

void PoolTypeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("PoolTypeFactory", nullptr);
}

static void PoolTypeFactory_initFields(PoolTypeFactory* this) {
    this->VECTOR_POOL = PoolType_new(CacheTypeFactory_getInstance()->NO_CACHE);
}

void PoolTypeFactory_init(PoolTypeFactory* this) {
    PoolTypeFactory_register();
    PoolTypeFactory_initFields(this);
}

PoolTypeFactory* PoolTypeFactory_new(void) {
    PoolTypeFactory* this = java_object_alloc(sizeof(PoolTypeFactory), "PoolTypeFactory");
    PoolTypeFactory_init(this);
    return this;
}


PoolTypeFactory* PoolTypeFactory_getInstance(void) {
        return (PoolTypeFactory_staticInit(), PoolTypeFactory_instance);
}

