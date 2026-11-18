// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ModelViewProjection.h"
#include "org/allbinary/logic/NullUtil.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif


static ModelViewProjection* ModelViewProjection_instance;



void ModelViewProjection_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ModelViewProjection_instance = ModelViewProjection_new();
}

void ModelViewProjection_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ModelViewProjection", nullptr);
    java_register_method("ModelViewProjection", "get", (void*) ModelViewProjection_get);
}

void ModelViewProjection_init(ModelViewProjection* this) {
    ModelViewProjection_register();
}

ModelViewProjection* ModelViewProjection_new(void) {
    ModelViewProjection* this = java_object_alloc(sizeof(ModelViewProjection), "ModelViewProjection");
    ModelViewProjection_init(this);
    return this;
}


ModelViewProjection* ModelViewProjection_getInstance(void) {
        return (ModelViewProjection_staticInit(), ModelViewProjection_instance);
}


float* ModelViewProjection_get(ModelViewProjection* this) {
        return NullUtil_getInstance()->NULL_FLOAT_ARRAY;
}

