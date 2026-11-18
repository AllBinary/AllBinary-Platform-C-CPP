// Generated Code Do Not Modify
#include "org/allbinary/graphics/OpenGLBitmapConfig.h"




void OpenGLBitmapConfig_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLBitmapConfig_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLBitmapConfig", nullptr);
}

static void OpenGLBitmapConfig_initFields(OpenGLBitmapConfig* this) {
    
}


void OpenGLBitmapConfig_init(OpenGLBitmapConfig* this, void* bitmapConfig) {
    OpenGLBitmapConfig_register();
    OpenGLBitmapConfig_initFields(this);
        this->bitmapConfig = bitmapConfig;
}

OpenGLBitmapConfig* OpenGLBitmapConfig_new(void* bitmapConfig) {
    OpenGLBitmapConfig* this = java_object_alloc(sizeof(OpenGLBitmapConfig), "OpenGLBitmapConfig");
    OpenGLBitmapConfig_init(this, bitmapConfig);
    return this;
}

