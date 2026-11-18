// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ShaderManagerFactory.h"
#include "org/allbinary/graphics/opengles/shader/ShaderManager.h"


static ShaderManagerFactory* ShaderManagerFactory_instance;



void ShaderManagerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ShaderManagerFactory_instance = ShaderManagerFactory_new();
}

void ShaderManagerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShaderManagerFactory", nullptr);
    java_register_method("ShaderManagerFactory", "create", (void*) ShaderManagerFactory_create);
}

void ShaderManagerFactory_init(ShaderManagerFactory* this) {
    ShaderManagerFactory_register();
}

ShaderManagerFactory* ShaderManagerFactory_new(void) {
    ShaderManagerFactory* this = java_object_alloc(sizeof(ShaderManagerFactory), "ShaderManagerFactory");
    ShaderManagerFactory_init(this);
    return this;
}


ShaderManagerFactory* ShaderManagerFactory_getInstance(void) {
        return (ShaderManagerFactory_staticInit(), ShaderManagerFactory_instance);
}


ShaderManager* ShaderManagerFactory_create(ShaderManagerFactory* this) {
        return ShaderManager_getInstance();
}

