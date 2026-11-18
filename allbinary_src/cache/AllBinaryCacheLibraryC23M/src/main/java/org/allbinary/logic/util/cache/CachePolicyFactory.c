// Generated Code Do Not Modify
#include "org/allbinary/logic/util/cache/CachePolicyFactory.h"
#include "org/allbinary/logic/util/cache/CachePolicy.h"


static CachePolicyFactory* CachePolicyFactory_instance;


void CachePolicyFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    CachePolicyFactory_instance = CachePolicyFactory_new();
}

void CachePolicyFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CachePolicyFactory", nullptr);
}

static void CachePolicyFactory_initFields(CachePolicyFactory* this) {
    this->NAME = "lru";
    this->MAX_TIME_THOUSAND_MAX = CachePolicy_new(this->NAME, (Long_staticInit(), Long_MAX_VALUE), 1000);
    this->THIRTY_MINUTES_TEN_THOUSAND_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 30, 10000);
    this->THIRTY_MINUTES_FIFTY_THOUSAND_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 30, 100000);
    this->ONE_MINUTE_FIVE_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 1, 5);
    this->ONE_MINUTE_TEN_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 1, 10);
    this->ONE_MINUTE_ONE_HUNDRED_MAX = CachePolicy_new(this->NAME, 1000 * 60 * 1, 100);
}

void CachePolicyFactory_init(CachePolicyFactory* this) {
    CachePolicyFactory_register();
    CachePolicyFactory_initFields(this);
}

CachePolicyFactory* CachePolicyFactory_new(void) {
    CachePolicyFactory* this = java_object_alloc(sizeof(CachePolicyFactory), "CachePolicyFactory");
    CachePolicyFactory_init(this);
    return this;
}


CachePolicyFactory* CachePolicyFactory_getInstance(void) {
        return (CachePolicyFactory_staticInit(), CachePolicyFactory_instance);
}

