// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/ShaderOpenGLProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"









void ShaderOpenGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ShaderOpenGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShaderOpenGLProcessor", "OpenGLProcessor");
    java_register_method("ShaderOpenGLProcessor", "process0", (void*) ShaderOpenGLProcessor_process0);
    java_register_method("ShaderOpenGLProcessor", "process1", (void*) ShaderOpenGLProcessor_process1);
    java_register_method("ShaderOpenGLProcessor", "process", (void*) ShaderOpenGLProcessor_process);
    java_register_method("ShaderOpenGLProcessor", "process2", (void*) ShaderOpenGLProcessor_process2);
    java_register_method("ShaderOpenGLProcessor", "process3", (void*) ShaderOpenGLProcessor_process3);
}


void ShaderOpenGLProcessor_init(ShaderOpenGLProcessor* this) {
    ShaderOpenGLProcessor_register();
    OpenGLProcessor_init(&this->base);
}

ShaderOpenGLProcessor* ShaderOpenGLProcessor_new(void) {
    ShaderOpenGLProcessor* this = java_object_alloc(sizeof(ShaderOpenGLProcessor), "ShaderOpenGLProcessor");
    ShaderOpenGLProcessor_init(this);
    return this;
}


void ShaderOpenGLProcessor_process0(ShaderOpenGLProcessor* this, GL10* gl) {
}


void ShaderOpenGLProcessor_process1(ShaderOpenGLProcessor* this, GL10* gl) {
}


void ShaderOpenGLProcessor_process(ShaderOpenGLProcessor* this, GL10* gl) {
}


void ShaderOpenGLProcessor_process2(ShaderOpenGLProcessor* this, GL10* gl) {
}


void ShaderOpenGLProcessor_process3(ShaderOpenGLProcessor* this, GL10* gl) {
}

