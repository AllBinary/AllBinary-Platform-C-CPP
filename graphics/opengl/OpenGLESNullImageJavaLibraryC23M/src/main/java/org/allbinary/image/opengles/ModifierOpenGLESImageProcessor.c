// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/ModifierOpenGLESImageProcessor.h"
#include "org/allbinary/image/opengles/OpenGLESImageProcessor.h"


static ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_instanceC;


void ModifierOpenGLESImageProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ModifierOpenGLESImageProcessor_instanceC = ModifierOpenGLESImageProcessor_new();
}

void ModifierOpenGLESImageProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ModifierOpenGLESImageProcessor", "OpenGLESImageProcessor");
}

void ModifierOpenGLESImageProcessor_init(ModifierOpenGLESImageProcessor* this) {
    ModifierOpenGLESImageProcessor_register();
    OpenGLESImageProcessor_init(&this->base);
}

ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_new(void) {
    ModifierOpenGLESImageProcessor* this = java_object_alloc(sizeof(ModifierOpenGLESImageProcessor), "ModifierOpenGLESImageProcessor");
    ModifierOpenGLESImageProcessor_init(this);
    return this;
}


ModifierOpenGLESImageProcessor* ModifierOpenGLESImageProcessor_getInstance(void) {
        return (ModifierOpenGLESImageProcessor_staticInit(), ModifierOpenGLESImageProcessor_instanceC);
}

