// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/SimpleShaderInitializer.h"
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"


static SimpleShaderInitializer* SimpleShaderInitializer_instanceC;


void SimpleShaderInitializer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SimpleShaderInitializer_instanceC = SimpleShaderInitializer_new();
}

void SimpleShaderInitializer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimpleShaderInitializer", "ShaderInitializer");
}

void SimpleShaderInitializer_init(SimpleShaderInitializer* this) {
    SimpleShaderInitializer_register();
    ShaderInitializer_init(&this->base);
}

SimpleShaderInitializer* SimpleShaderInitializer_new(void) {
    SimpleShaderInitializer* this = java_object_alloc(sizeof(SimpleShaderInitializer), "SimpleShaderInitializer");
    SimpleShaderInitializer_init(this);
    return this;
}


SimpleShaderInitializer* SimpleShaderInitializer_getInstance(void) {
        return (SimpleShaderInitializer_staticInit(), SimpleShaderInitializer_instanceC);
}

