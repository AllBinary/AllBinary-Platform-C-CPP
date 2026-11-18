// Generated Code Do Not Modify
#include "org/allbinary/device/OpenGLESGraphicsFactory.h"
#include "org/allbinary/device/OpenGLESNullGraphicsFactory.h"
#include "org/allbinary/device/OpenGLESGraphics.h"




void OpenGLESGraphicsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLESGraphicsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESGraphicsFactory", nullptr);
    java_register_method("OpenGLESGraphicsFactory", "getOpenGLESGraphicsInstance", (void*) OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance);
}

void OpenGLESGraphicsFactory_init(OpenGLESGraphicsFactory* this) {
    OpenGLESGraphicsFactory_register();
}

OpenGLESGraphicsFactory* OpenGLESGraphicsFactory_new(void) {
    OpenGLESGraphicsFactory* this = java_object_alloc(sizeof(OpenGLESGraphicsFactory), "OpenGLESGraphicsFactory");
    OpenGLESGraphicsFactory_init(this);
    return this;
}


OpenGLESGraphics* OpenGLESGraphicsFactory_getOpenGLESGraphicsInstance(OpenGLESGraphicsFactory* this) {
        return OpenGLESNullGraphicsFactory_getInstance();
}

