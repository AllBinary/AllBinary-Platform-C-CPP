// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/SimpleCompositeShaderUpdater.h"
#include "org/allbinary/graphics/opengles/shader/CompositeShaderUpdater.h"




void SimpleCompositeShaderUpdater_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimpleCompositeShaderUpdater_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleCompositeShaderUpdater", "CompositeShaderUpdater");
}


void SimpleCompositeShaderUpdater_init(SimpleCompositeShaderUpdater* this, const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    SimpleCompositeShaderUpdater_register();
        CompositeShaderUpdater_init(&this->base, uniformBlockArray, uniformArray, attributeArray, attributeHandleArray);
}

SimpleCompositeShaderUpdater* SimpleCompositeShaderUpdater_new(const char** uniformBlockArray, const char** uniformArray, const char** attributeArray, int32_t* attributeHandleArray) {
    SimpleCompositeShaderUpdater* this = java_object_alloc(sizeof(SimpleCompositeShaderUpdater), "SimpleCompositeShaderUpdater");
    SimpleCompositeShaderUpdater_init(this, uniformBlockArray, uniformArray, attributeArray, attributeHandleArray);
    return this;
}

