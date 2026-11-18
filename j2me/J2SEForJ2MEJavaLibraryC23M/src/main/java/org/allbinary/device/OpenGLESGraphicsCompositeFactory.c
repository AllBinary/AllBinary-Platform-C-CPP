// Generated Code Do Not Modify
#include "org/allbinary/device/OpenGLESGraphicsCompositeFactory.h"
#include "org/allbinary/device/OpenGLESGraphicsFactory.h"


static OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_instance;




void OpenGLESGraphicsCompositeFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLESGraphicsCompositeFactory_instance = OpenGLESGraphicsCompositeFactory_new();
}

void OpenGLESGraphicsCompositeFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESGraphicsCompositeFactory", nullptr);
    java_register_method("OpenGLESGraphicsCompositeFactory", "set", (void*) OpenGLESGraphicsCompositeFactory_set);
    java_register_method("OpenGLESGraphicsCompositeFactory", "get", (void*) OpenGLESGraphicsCompositeFactory_get);
}

static void OpenGLESGraphicsCompositeFactory_initFields(OpenGLESGraphicsCompositeFactory* this) {
    this->openGLESGraphicsFactory = OpenGLESGraphicsFactory_new();
}

void OpenGLESGraphicsCompositeFactory_init(OpenGLESGraphicsCompositeFactory* this) {
    OpenGLESGraphicsCompositeFactory_register();
    OpenGLESGraphicsCompositeFactory_initFields(this);
}

OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_new(void) {
    OpenGLESGraphicsCompositeFactory* this = java_object_alloc(sizeof(OpenGLESGraphicsCompositeFactory), "OpenGLESGraphicsCompositeFactory");
    OpenGLESGraphicsCompositeFactory_init(this);
    return this;
}


OpenGLESGraphicsCompositeFactory* OpenGLESGraphicsCompositeFactory_getInstance(void) {
        return (OpenGLESGraphicsCompositeFactory_staticInit(), OpenGLESGraphicsCompositeFactory_instance);
}


void OpenGLESGraphicsCompositeFactory_set(OpenGLESGraphicsCompositeFactory* this, OpenGLESGraphicsFactory* openGLESGraphicsFactory) {
        this->openGLESGraphicsFactory = openGLESGraphicsFactory;
}


OpenGLESGraphicsFactory* OpenGLESGraphicsCompositeFactory_get(OpenGLESGraphicsCompositeFactory* this) {
        return this->openGLESGraphicsFactory;
}

