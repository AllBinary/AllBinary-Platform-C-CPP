// Generated Code Do Not Modify
#include "javax/microedition/khronos/egl/EGLConfig.h"




void EGLConfig_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void EGLConfig_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("EGLConfig", nullptr);
}


void EGLConfig_init(EGLConfig* this) {
    EGLConfig_register();
        java_throw(java_exception_new("RuntimeException", ""));
}

EGLConfig* EGLConfig_new(void) {
    EGLConfig* this = java_object_alloc(sizeof(EGLConfig), "EGLConfig");
    EGLConfig_init(this);
    return this;
}

