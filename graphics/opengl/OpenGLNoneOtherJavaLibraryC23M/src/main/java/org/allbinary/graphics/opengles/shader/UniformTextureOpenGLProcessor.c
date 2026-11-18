// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/UniformTextureOpenGLProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"





void UniformTextureOpenGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UniformTextureOpenGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UniformTextureOpenGLProcessor", "OpenGLObject3dProcessor");
    java_register_method("UniformTextureOpenGLProcessor", "process", (void*) UniformTextureOpenGLProcessor_process);
}


void UniformTextureOpenGLProcessor_init(UniformTextureOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformTextureOpenGLProcessor_register();
    OpenGLObject3dProcessor_init(&this->base);
}

UniformTextureOpenGLProcessor* UniformTextureOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformTextureOpenGLProcessor* this = java_object_alloc(sizeof(UniformTextureOpenGLProcessor), "UniformTextureOpenGLProcessor");
    UniformTextureOpenGLProcessor_init(this, shaderComposite, handleIndex);
    return this;
}


void UniformTextureOpenGLProcessor_process(UniformTextureOpenGLProcessor* this, GL10* gl, void* unused, int32_t index) {
}

