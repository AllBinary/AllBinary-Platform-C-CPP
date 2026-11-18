// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/UniformCameraPositionOpenGLProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#include "org/allbinary/graphics/opengles/shader/ShaderComposite.h"





void UniformCameraPositionOpenGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void UniformCameraPositionOpenGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("UniformCameraPositionOpenGLProcessor", "OpenGLObject3dProcessor");
    java_register_method("UniformCameraPositionOpenGLProcessor", "process", (void*) UniformCameraPositionOpenGLProcessor_process);
}


void UniformCameraPositionOpenGLProcessor_init(UniformCameraPositionOpenGLProcessor* this, ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformCameraPositionOpenGLProcessor_register();
    OpenGLObject3dProcessor_init(&this->base);
}

UniformCameraPositionOpenGLProcessor* UniformCameraPositionOpenGLProcessor_new(ShaderComposite* shaderComposite, int32_t handleIndex) {
    UniformCameraPositionOpenGLProcessor* this = java_object_alloc(sizeof(UniformCameraPositionOpenGLProcessor), "UniformCameraPositionOpenGLProcessor");
    UniformCameraPositionOpenGLProcessor_init(this, shaderComposite, handleIndex);
    return this;
}


void UniformCameraPositionOpenGLProcessor_process(UniformCameraPositionOpenGLProcessor* this, GL10* gl, void* anyType) {
}

