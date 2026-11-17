// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/IndexedBasicArrayListCache.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/logic/util/cache/BaseBasicArrayListCache.h"
#include "org/allbinary/logic/util/cache/CacheInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"












void IndexedBasicArrayListCache_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IndexedBasicArrayListCache_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IndexedBasicArrayListCache", "BaseBasicArrayListCache");
    java_register_method("IndexedBasicArrayListCache", "init", (void*) IndexedBasicArrayListCache_initMethod);
    java_register_method("IndexedBasicArrayListCache", "getAt", (void*) IndexedBasicArrayListCache_getAt);
    java_register_method("IndexedBasicArrayListCache", "addDefault", (void*) IndexedBasicArrayListCache_addDefault);
    java_register_method("IndexedBasicArrayListCache", "addObject", (void*) IndexedBasicArrayListCache_addObject);
    java_register_method("IndexedBasicArrayListCache", "add", (void*) IndexedBasicArrayListCache_add);
    java_register_method("IndexedBasicArrayListCache", "addArray", (void*) IndexedBasicArrayListCache_addArray);
    java_register_method("IndexedBasicArrayListCache", "clear", (void*) IndexedBasicArrayListCache_clear);
}

static void IndexedBasicArrayListCache_initFields(IndexedBasicArrayListCache* this) {
    this->commonStrings = CommonStrings_getInstance();
    this->size = 0;
    this->index = 0;
}


// throws Exception
IndexedBasicArrayListCache* IndexedBasicArrayListCache_createCache(int32_t size) {
        IndexedBasicArrayListCache* indexedBasicArrayListCache = IndexedBasicArrayListCache_new();
        IndexedBasicArrayListCache_initMethod(indexedBasicArrayListCache, size);
        return indexedBasicArrayListCache;
}


void IndexedBasicArrayListCache_init(IndexedBasicArrayListCache* this) {
    IndexedBasicArrayListCache_register();
    BaseBasicArrayListCache_init(&this->base);
    IndexedBasicArrayListCache_initFields(this);
}

IndexedBasicArrayListCache* IndexedBasicArrayListCache_new(void) {
    IndexedBasicArrayListCache* this = java_object_alloc(sizeof(IndexedBasicArrayListCache), "IndexedBasicArrayListCache");
    IndexedBasicArrayListCache_init(this);
    return this;
}


// throws Exception
void IndexedBasicArrayListCache_initMethod(IndexedBasicArrayListCache* this, int32_t size) {
        if (this->size < size) {
            BasicArrayList_ensureCapacity(this->base.list, size);
            for (int32_t index = size - 1; index >= this->size; index--) {
                IndexedBasicArrayListCache_addDefault(this);
            }
            this->size = size;
        }
}


void* IndexedBasicArrayListCache_getAt(IndexedBasicArrayListCache* this, int32_t index) {
        return this->base.list->objectArray[index];
}


// throws Exception
void IndexedBasicArrayListCache_addDefault(IndexedBasicArrayListCache* this) {
}


// throws Exception
void IndexedBasicArrayListCache_addObject(IndexedBasicArrayListCache* this, void* anyType) {
        BasicArrayList_add(this->base.list, anyType);
}


// throws Exception
void IndexedBasicArrayListCache_add(IndexedBasicArrayListCache* this, CacheableInterface* cacheableInterface) {
        BasicArrayList_add(this->base.list, cacheableInterface);
}


// throws Exception
void IndexedBasicArrayListCache_addArray(IndexedBasicArrayListCache* this, CacheableInterface** cacheableInterfaces) {
        java_throw(java_exception_new("Exception", "No Imple"));
}


void IndexedBasicArrayListCache_clear(IndexedBasicArrayListCache* this) {
        this->index = 0;
}

