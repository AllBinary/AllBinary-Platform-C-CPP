// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/BasicArrayListResetablePool.h"
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"






void BasicArrayListResetablePool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayListResetablePool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListResetablePool", "AbstractArrayListPool");
    java_register_method("BasicArrayListResetablePool", "clear", (void*) BasicArrayListResetablePool_clear);
    java_register_method("BasicArrayListResetablePool", "remove", (void*) BasicArrayListResetablePool_remove);
}


void BasicArrayListResetablePool_init(BasicArrayListResetablePool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    BasicArrayListResetablePool_register();
        AbstractArrayListPool_init(&this->base, cacheableInterfaceFactoryInterface);
}

BasicArrayListResetablePool* BasicArrayListResetablePool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    BasicArrayListResetablePool* this = java_object_alloc(sizeof(BasicArrayListResetablePool), "BasicArrayListResetablePool");
    BasicArrayListResetablePool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


void BasicArrayListResetablePool_clear(BasicArrayListResetablePool* this) {
}


// throws Exception
CacheableInterface* BasicArrayListResetablePool_remove(BasicArrayListResetablePool* this, void* key) {
        int32_t size = BasicArrayList_size(this->base.buffers);
        if (size > 0) {
            return ((CacheableInterface*) BasicArrayList_removeAt(this->base.buffers, size - 1));
        } else {
            return CacheableInterfaceFactoryInterface_getInstance(this->base.cacheableInterfaceFactoryInterface, key);
        }
}

