// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/CachePolicy.h"









void CachePolicy_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CachePolicy_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CachePolicy", nullptr);
    java_register_method("CachePolicy", "getMaxTime", (void*) CachePolicy_getMaxTime);
    java_register_method("CachePolicy", "setMaxTime", (void*) CachePolicy_setMaxTime);
    java_register_method("CachePolicy", "getMaxSize", (void*) CachePolicy_getMaxSize);
    java_register_method("CachePolicy", "setMaxSize", (void*) CachePolicy_setMaxSize);
    java_register_method("CachePolicy", "getName", (void*) CachePolicy_getName);
}

static void CachePolicy_initFields(CachePolicy* this) {
    
    this->maxTime = 0;
    this->maxSize = 0;
}


void CachePolicy_init(CachePolicy* this, const char* name, int64_t maxTime, int64_t maxSize) {
    CachePolicy_register();
    CachePolicy_initFields(this);
        this->name = name;
        CachePolicy_setMaxTime(this, maxTime);
        CachePolicy_setMaxSize(this, maxSize);
}

CachePolicy* CachePolicy_new(const char* name, int64_t maxTime, int64_t maxSize) {
    CachePolicy* this = java_object_alloc(sizeof(CachePolicy), "CachePolicy");
    CachePolicy_init(this, name, maxTime, maxSize);
    return this;
}


int64_t CachePolicy_getMaxTime(CachePolicy* this) {
        return this->maxTime;
}


void CachePolicy_setMaxTime(CachePolicy* this, int64_t maxTime) {
        this->maxTime = maxTime;
}


int64_t CachePolicy_getMaxSize(CachePolicy* this) {
        return this->maxSize;
}


void CachePolicy_setMaxSize(CachePolicy* this, int64_t maxSize) {
        this->maxSize = maxSize;
}


const char* CachePolicy_getName(CachePolicy* this) {
        return this->name;
}

