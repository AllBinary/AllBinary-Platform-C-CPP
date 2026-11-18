// Generated Code Do Not Modify
#include "org/allbinary/device/OpenGLESNullGraphicsFactory.h"
#include "org/allbinary/device/OpenGLESGraphics.h"


static OpenGLESGraphics* OpenGLESNullGraphicsFactory_instance;


void OpenGLESNullGraphicsFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLESNullGraphicsFactory_instance = OpenGLESGraphics_new();
}

void OpenGLESNullGraphicsFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESNullGraphicsFactory", nullptr);
}

void OpenGLESNullGraphicsFactory_init(OpenGLESNullGraphicsFactory* this) {
    OpenGLESNullGraphicsFactory_register();
}

OpenGLESNullGraphicsFactory* OpenGLESNullGraphicsFactory_new(void) {
    OpenGLESNullGraphicsFactory* this = java_object_alloc(sizeof(OpenGLESNullGraphicsFactory), "OpenGLESNullGraphicsFactory");
    OpenGLESNullGraphicsFactory_init(this);
    return this;
}


OpenGLESGraphics* OpenGLESNullGraphicsFactory_getInstance(void) {
        return (OpenGLESNullGraphicsFactory_staticInit(), OpenGLESNullGraphicsFactory_instance);
}

