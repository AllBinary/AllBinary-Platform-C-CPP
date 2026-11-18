// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLFeature.h"




void OpenGLFeature_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLFeature_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLFeature", "Feature");
}


void OpenGLFeature_init(OpenGLFeature* this, const char* name) {
    OpenGLFeature_register();
        Feature_init(&this->base, name);
}

OpenGLFeature* OpenGLFeature_new(const char* name) {
    OpenGLFeature* this = java_object_alloc(sizeof(OpenGLFeature), "OpenGLFeature");
    OpenGLFeature_init(this, name);
    return this;
}

