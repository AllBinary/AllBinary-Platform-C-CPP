// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/BasicColorUtilFactory.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"




void BasicColorUtilFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void BasicColorUtilFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("BasicColorUtilFactory", nullptr);
}

void BasicColorUtilFactory_init(BasicColorUtilFactory* this) {
    BasicColorUtilFactory_register();
}

BasicColorUtilFactory* BasicColorUtilFactory_new(void) {
    BasicColorUtilFactory* this = java_object_alloc(sizeof(BasicColorUtilFactory), "BasicColorUtilFactory");
    BasicColorUtilFactory_init(this);
    return this;
}


BasicColorUtil* BasicColorUtilFactory_getInstance(void) {
        return BasicColorUtil_getInstance();
}

