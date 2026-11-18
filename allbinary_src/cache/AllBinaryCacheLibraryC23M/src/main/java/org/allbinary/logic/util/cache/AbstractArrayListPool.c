// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/AbstractArrayListPool.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"
#include "org/allbinary/logic/util/cache/PoolInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"








void AbstractArrayListPool_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AbstractArrayListPool_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AbstractArrayListPool", nullptr);
    java_register_method("AbstractArrayListPool", "clear", (void*) AbstractArrayListPool_clear);
    java_register_method("AbstractArrayListPool", "remove", (void*) AbstractArrayListPool_remove);
    java_register_method("AbstractArrayListPool", "add", (void*) AbstractArrayListPool_add);
    java_register_method("AbstractArrayListPool", "addArray", (void*) AbstractArrayListPool_addArray);
}

static void AbstractArrayListPool_initFields(AbstractArrayListPool* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->buffers = BasicArrayListD_new();
    
}


void AbstractArrayListPool_init(AbstractArrayListPool* this, CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    AbstractArrayListPool_register();
    AbstractArrayListPool_initFields(this);
        this->cacheableInterfaceFactoryInterface = cacheableInterfaceFactoryInterface;
}

AbstractArrayListPool* AbstractArrayListPool_new(CacheableInterfaceFactoryInterface* cacheableInterfaceFactoryInterface) {
    AbstractArrayListPool* this = java_object_alloc(sizeof(AbstractArrayListPool), "AbstractArrayListPool");
    AbstractArrayListPool_init(this, cacheableInterfaceFactoryInterface);
    return this;
}


// throws Exception
void AbstractArrayListPool_clear(AbstractArrayListPool* this) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
CacheableInterface* AbstractArrayListPool_remove(AbstractArrayListPool* this, void* key) {
        java_throw(java_exception_new("Exception", this->commonStrings->NOT_IMPLEMENTED));
}


// throws Exception
void AbstractArrayListPool_add(AbstractArrayListPool* this, CacheableInterface* cacheableInterface) {
        BasicArrayList_add(this->buffers, cacheableInterface);
}


// throws Exception
void AbstractArrayListPool_addArray(AbstractArrayListPool* this, CacheableInterface** cacheableInterfaces) {
        for (int32_t index = 0; index < java_array_length(cacheableInterfaces); index++) {
            BasicArrayList_add(this->buffers, cacheableInterfaces[index]);
        }
}

