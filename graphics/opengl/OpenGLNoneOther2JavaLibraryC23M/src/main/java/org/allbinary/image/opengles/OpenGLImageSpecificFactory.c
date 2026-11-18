// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLImageSpecificFactory.h"


static OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_instance;


void OpenGLImageSpecificFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLImageSpecificFactory_instance = OpenGLImageSpecificFactory_new();
}

void OpenGLImageSpecificFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLImageSpecificFactory", nullptr);
}

static void OpenGLImageSpecificFactory_initFields(OpenGLImageSpecificFactory* this) {
    this->updating = false;
}

void OpenGLImageSpecificFactory_init(OpenGLImageSpecificFactory* this) {
    OpenGLImageSpecificFactory_register();
    OpenGLImageSpecificFactory_initFields(this);
}

OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_new(void) {
    OpenGLImageSpecificFactory* this = java_object_alloc(sizeof(OpenGLImageSpecificFactory), "OpenGLImageSpecificFactory");
    OpenGLImageSpecificFactory_init(this);
    return this;
}


OpenGLImageSpecificFactory* OpenGLImageSpecificFactory_getInstance(void) {
        return (OpenGLImageSpecificFactory_staticInit(), OpenGLImageSpecificFactory_instance);
}

