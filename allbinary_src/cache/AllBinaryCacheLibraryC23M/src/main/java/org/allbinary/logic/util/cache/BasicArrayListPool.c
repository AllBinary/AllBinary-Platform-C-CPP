// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/BasicArrayListPool.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/logic/util/cache/BasicArrayListCacheable.h"








void BasicArrayListPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayListPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListPool", "AbstractArrayListPool");
    java_register_method("BasicArrayListPool", "clear", (void*) BasicArrayListPool_clear);
    java_register_method("BasicArrayListPool", "remove", (void*) BasicArrayListPool_remove);
    java_register_method("BasicArrayListPool", "addAll", (void*) BasicArrayListPool_addAll);
    java_register_method("BasicArrayListPool", "releaseUsedBackToPool", (void*) BasicArrayListPool_releaseUsedBackToPool);
}


void BasicArrayListPool_init(BasicArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    BasicArrayListPool_register();
        AbstractArrayListPool_init(&this->base, cacheableInterfaceFactoryInterface);
}

BasicArrayListPool* BasicArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    BasicArrayListPool* this = java_object_alloc(sizeof(BasicArrayListPool), "BasicArrayListPool");
    BasicArrayListPool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


void BasicArrayListPool_clear(BasicArrayListPool* this) {
        BasicArrayList_clear(this->base.buffers);
}


// throws Exception
CacheableInterface* BasicArrayListPool_remove(BasicArrayListPool* this, void* key) {
        int32_t size = BasicArrayList_size(this->base.buffers);
        if (size > 0) {
            return ((CacheableInterface*) BasicArrayList_removeAt(this->base.buffers, size - 1));
        } else {
            return CacheableInterfaceFactoryInterface_getInstance(this->base.cacheableInterfaceFactoryInterface, key);
        }
}


// throws Exception
void BasicArrayListPool_addAll(BasicArrayListPool* this, BasicArrayList* usedList) {
        for (int32_t index = BasicArrayList_size(usedList); --index >= 0; ) {
            CacheableInterface* anyType = ((CacheableInterface*) usedList->objectArray[index]);
            AbstractArrayListPool_add(this, anyType);
        }
        BasicArrayList_clear(usedList);
}


// throws Exception
void BasicArrayListPool_releaseUsedBackToPool(BasicArrayListPool* this, BasicArrayList* usedList) {
        for (int32_t index = BasicArrayList_size(usedList); --index >= 0; ) {
            BasicArrayListCacheable* list = ((BasicArrayListCacheable*) usedList->objectArray[index]);
            if (BasicArrayList_size(list) == 0) {
                BasicArrayList_removeAt(usedList, index);
                AbstractArrayListPool_add(this, list);
            }
        }
}

