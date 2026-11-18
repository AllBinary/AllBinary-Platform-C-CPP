// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLESImageProperties.h"



void OpenGLESImageProperties_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLESImageProperties_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESImageProperties", nullptr);
}

static void OpenGLESImageProperties_initFields(OpenGLESImageProperties* this) {
    this->textureID = -1;
    this->scaleX = 1.0f;
    this->scaleY = 1.0f;
    this->scaleX2 = 1.0f;
    this->scaleY2 = 1.0f;
    this->angle = 0;
    this->redf = 1.0f;
    this->greenf = 1.0f;
    this->bluef = 1.0f;
    this->alphaf = 1.0f;
}

void OpenGLESImageProperties_init(OpenGLESImageProperties* this) {
    OpenGLESImageProperties_register();
    OpenGLESImageProperties_initFields(this);
}

OpenGLESImageProperties* OpenGLESImageProperties_new(void) {
    OpenGLESImageProperties* this = java_object_alloc(sizeof(OpenGLESImageProperties), "OpenGLESImageProperties");
    OpenGLESImageProperties_init(this);
    return this;
}

