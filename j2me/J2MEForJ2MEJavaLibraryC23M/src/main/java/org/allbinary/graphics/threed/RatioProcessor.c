// Generated Code Do Not Modify
#include "org/allbinary/graphics/threed/RatioProcessor.h"




void RatioProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RatioProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RatioProcessor", nullptr);
    java_register_method("RatioProcessor", "setCustom", (void*) RatioProcessor_setCustom);
}

void RatioProcessor_init(RatioProcessor* this) {
    RatioProcessor_register();
}

RatioProcessor* RatioProcessor_new(void) {
    RatioProcessor* this = java_object_alloc(sizeof(RatioProcessor), "RatioProcessor");
    RatioProcessor_init(this);
    return this;
}


void RatioProcessor_setCustom(RatioProcessor* this, int32_t width, int32_t height, float ratio) {
}

