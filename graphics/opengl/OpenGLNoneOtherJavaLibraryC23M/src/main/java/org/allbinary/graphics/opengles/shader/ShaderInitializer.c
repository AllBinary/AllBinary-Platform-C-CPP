// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ShaderInitializer.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/string/CommonStrings.h"
#include "org/allbinary/graphics/opengles/shader/Shader.h"


static ShaderInitializer* ShaderInitializer_instance;



void ShaderInitializer_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ShaderInitializer_instance = ShaderInitializer_new();
}

void ShaderInitializer_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShaderInitializer", nullptr);
    java_register_method("ShaderInitializer", "init", (void*) ShaderInitializer_initMethod);
}

static void ShaderInitializer_initFields(ShaderInitializer* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void ShaderInitializer_init(ShaderInitializer* this) {
    ShaderInitializer_register();
    ShaderInitializer_initFields(this);
}

ShaderInitializer* ShaderInitializer_new(void) {
    ShaderInitializer* this = java_object_alloc(sizeof(ShaderInitializer), "ShaderInitializer");
    ShaderInitializer_init(this);
    return this;
}


ShaderInitializer* ShaderInitializer_getInstance(void) {
        return (ShaderInitializer_staticInit(), ShaderInitializer_instance);
}


int32_t ShaderInitializer_initMethod(ShaderInitializer* this, GL10* gl, Shader** shader, const char** attributeArray) {
        return -1;
}

