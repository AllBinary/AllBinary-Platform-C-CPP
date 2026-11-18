// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColorCacheFactory.h"
#include "org/allbinary/logic/StdUtil.h"
#include "org/allbinary/util/ABHashtable.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#if __has_include("org/allbinary/logic/StdUtil.h")
#include "org/allbinary/logic/StdUtil.h"
#endif


static BasicColorCacheFactory* BasicColorCacheFactory_instance;





void BasicColorCacheFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    BasicColorCacheFactory_instance = BasicColorCacheFactory_new();
}

void BasicColorCacheFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColorCacheFactory", nullptr);
    java_register_method("BasicColorCacheFactory", "add", (void*) BasicColorCacheFactory_add);
    java_register_method("BasicColorCacheFactory", "getAndOrCreate", (void*) BasicColorCacheFactory_getAndOrCreate);
}

static void BasicColorCacheFactory_initFields(BasicColorCacheFactory* this) {
    this->hashtable = StdUtil_createHashtable(StdUtil_getInstance());
}


BasicColorCacheFactory* BasicColorCacheFactory_getInstance(void) {
        return (BasicColorCacheFactory_staticInit(), BasicColorCacheFactory_instance);
}


void BasicColorCacheFactory_init(BasicColorCacheFactory* this) {
    BasicColorCacheFactory_register();
    BasicColorCacheFactory_initFields(this);
}

BasicColorCacheFactory* BasicColorCacheFactory_new(void) {
    BasicColorCacheFactory* this = java_object_alloc(sizeof(BasicColorCacheFactory), "BasicColorCacheFactory");
    BasicColorCacheFactory_init(this);
    return this;
}


void BasicColorCacheFactory_add(BasicColorCacheFactory* this, BasicColor* basicDefaultColor) {
        Hashtable_put(this->hashtable, BasicColor_intValue(basicDefaultColor), basicDefaultColor);
}


// synchronized
BasicColor* BasicColorCacheFactory_getAndOrCreate(BasicColorCacheFactory* this, int32_t integer) {
        BasicColor* basicColor = ((BasicColor*) Hashtable_get(this->hashtable, integer));
        if (basicColor == nullptr) {
            basicColor = BasicColorFactory_createInstance(BasicColorFactory_getInstance(), Integer_intValue(integer));
            Hashtable_put(this->hashtable, integer, basicColor);
        }
        return basicColor;
}

