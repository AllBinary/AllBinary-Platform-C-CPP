// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLThreadUtil.h"


static OpenGLThreadUtil* OpenGLThreadUtil_instance;





void OpenGLThreadUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLThreadUtil_instance = OpenGLThreadUtil_new();
}

void OpenGLThreadUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLThreadUtil", nullptr);
    java_register_method("OpenGLThreadUtil", "set", (void*) OpenGLThreadUtil_set);
    java_register_method("OpenGLThreadUtil", "onPause", (void*) OpenGLThreadUtil_onPause);
    java_register_method("OpenGLThreadUtil", "onResume", (void*) OpenGLThreadUtil_onResume);
}

void OpenGLThreadUtil_init(OpenGLThreadUtil* this) {
    OpenGLThreadUtil_register();
}

OpenGLThreadUtil* OpenGLThreadUtil_new(void) {
    OpenGLThreadUtil* this = java_object_alloc(sizeof(OpenGLThreadUtil), "OpenGLThreadUtil");
    OpenGLThreadUtil_init(this);
    return this;
}


OpenGLThreadUtil* OpenGLThreadUtil_getInstance(void) {
        return (OpenGLThreadUtil_staticInit(), OpenGLThreadUtil_instance);
}


void OpenGLThreadUtil_set(OpenGLThreadUtil* this, void* glSurfaceView) {
}


void OpenGLThreadUtil_onPause(OpenGLThreadUtil* this) {
}


void OpenGLThreadUtil_onResume(OpenGLThreadUtil* this) {
}

