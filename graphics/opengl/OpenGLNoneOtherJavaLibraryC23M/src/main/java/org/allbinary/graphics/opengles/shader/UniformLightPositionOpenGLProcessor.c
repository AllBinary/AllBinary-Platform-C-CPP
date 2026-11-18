// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/UniformLightPositionOpenGLProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"





void UniformLightPositionOpenGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UniformLightPositionOpenGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UniformLightPositionOpenGLProcessor", "OpenGLObject3dProcessor");
    java_register_method("UniformLightPositionOpenGLProcessor", "process", (void*) UniformLightPositionOpenGLProcessor_process);
}


void UniformLightPositionOpenGLProcessor_init(UniformLightPositionOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformLightPositionOpenGLProcessor_register();
    OpenGLObject3dProcessor_init(&this->base);
}

UniformLightPositionOpenGLProcessor* UniformLightPositionOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformLightPositionOpenGLProcessor* this = java_object_alloc(sizeof(UniformLightPositionOpenGLProcessor), "UniformLightPositionOpenGLProcessor");
    UniformLightPositionOpenGLProcessor_init(this, shaderComposite, handleIndex);
    return this;
}


void UniformLightPositionOpenGLProcessor_process(UniformLightPositionOpenGLProcessor* this, GL10* gl, void* unused) {
}

