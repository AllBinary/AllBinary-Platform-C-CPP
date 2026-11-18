// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"


static OpenGLESImageProcessor* OpenGLESImageProcessor_instance;






void OpenGLESImageProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLESImageProcessor_instance = OpenGLESImageProcessor_new();
}

void OpenGLESImageProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESImageProcessor", nullptr);
    java_register_method("OpenGLESImageProcessor", "translate", (void*) OpenGLESImageProcessor_translate);
    java_register_method("OpenGLESImageProcessor", "rotate", (void*) OpenGLESImageProcessor_rotate);
    java_register_method("OpenGLESImageProcessor", "scale", (void*) OpenGLESImageProcessor_scale);
    java_register_method("OpenGLESImageProcessor", "colorMask", (void*) OpenGLESImageProcessor_colorMask);
}

void OpenGLESImageProcessor_init(OpenGLESImageProcessor* this) {
    OpenGLESImageProcessor_register();
}

OpenGLESImageProcessor* OpenGLESImageProcessor_new(void) {
    OpenGLESImageProcessor* this = java_object_alloc(sizeof(OpenGLESImageProcessor), "OpenGLESImageProcessor");
    OpenGLESImageProcessor_init(this);
    return this;
}


OpenGLESImageProcessor* OpenGLESImageProcessor_getInstance(void) {
        return (OpenGLESImageProcessor_staticInit(), OpenGLESImageProcessor_instance);
}


void OpenGLESImageProcessor_translate(OpenGLESImageProcessor* this, GL10* gl, float translateX, float translateY) {
}


void OpenGLESImageProcessor_rotate(OpenGLESImageProcessor* this, GL10* gl, float angle) {
}


void OpenGLESImageProcessor_scale(OpenGLESImageProcessor* this, GL10* gl, float scaleX, float scaleY) {
}


void OpenGLESImageProcessor_colorMask(OpenGLESImageProcessor* this, GL10* gl, float red, float green, float blue, float alpha) {
}

