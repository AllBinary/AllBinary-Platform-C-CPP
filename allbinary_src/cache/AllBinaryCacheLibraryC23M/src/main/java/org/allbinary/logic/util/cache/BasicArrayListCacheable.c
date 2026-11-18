// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/BasicArrayListCacheable.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif




void BasicArrayListCacheable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicArrayListCacheable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicArrayListCacheable", "BasicArrayListD");
    java_register_method("BasicArrayListCacheable", "getKey", (void*) BasicArrayListCacheable_getKey);
}

void BasicArrayListCacheable_init(BasicArrayListCacheable* this) {
    BasicArrayListCacheable_register();
    BasicArrayListD_init(&this->base);
}

BasicArrayListCacheable* BasicArrayListCacheable_new(void) {
    BasicArrayListCacheable* this = java_object_alloc(sizeof(BasicArrayListCacheable), "BasicArrayListCacheable");
    BasicArrayListCacheable_init(this);
    return this;
}


void* BasicArrayListCacheable_getKey(BasicArrayListCacheable* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

