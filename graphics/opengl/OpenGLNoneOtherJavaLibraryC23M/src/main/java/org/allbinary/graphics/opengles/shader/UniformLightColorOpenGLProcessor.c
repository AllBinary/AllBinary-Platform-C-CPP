// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/UniformLightColorOpenGLProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"





void UniformLightColorOpenGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UniformLightColorOpenGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UniformLightColorOpenGLProcessor", "OpenGLObject3dProcessor");
    java_register_method("UniformLightColorOpenGLProcessor", "process", (void*) UniformLightColorOpenGLProcessor_process);
}


void UniformLightColorOpenGLProcessor_init(UniformLightColorOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformLightColorOpenGLProcessor_register();
    OpenGLObject3dProcessor_init(&this->base);
}

UniformLightColorOpenGLProcessor* UniformLightColorOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformLightColorOpenGLProcessor* this = java_object_alloc(sizeof(UniformLightColorOpenGLProcessor), "UniformLightColorOpenGLProcessor");
    UniformLightColorOpenGLProcessor_init(this, shaderComposite, handleIndex);
    return this;
}


void UniformLightColorOpenGLProcessor_process(UniformLightColorOpenGLProcessor* this, GL10* gl, void* unused) {
}

