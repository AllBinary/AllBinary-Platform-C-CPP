// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#include "javax/microedition/lcdui/Image.h"


static OpenGLUtil* OpenGLUtil_instance;





void OpenGLUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLUtil_instance = OpenGLUtil_new();
}

void OpenGLUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLUtil", nullptr);
    java_register_method("OpenGLUtil", "addImage", (void*) OpenGLUtil_addImage);
    java_register_method("OpenGLUtil", "clear", (void*) OpenGLUtil_clear);
    java_register_method("OpenGLUtil", "addRunnable", (void*) OpenGLUtil_addRunnable);
}

void OpenGLUtil_init(OpenGLUtil* this) {
    OpenGLUtil_register();
}

OpenGLUtil* OpenGLUtil_new(void) {
    OpenGLUtil* this = java_object_alloc(sizeof(OpenGLUtil), "OpenGLUtil");
    OpenGLUtil_init(this);
    return this;
}


OpenGLUtil* OpenGLUtil_getInstance(void) {
        return (OpenGLUtil_staticInit(), OpenGLUtil_instance);
}


Image* OpenGLUtil_addImage(OpenGLUtil* this, Image* image) {
        return image;
}


void OpenGLUtil_clear(OpenGLUtil* this) {
}


void OpenGLUtil_addRunnable(OpenGLUtil* this, Runnable* runnable) {
}

