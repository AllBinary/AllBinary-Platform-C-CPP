// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLFeatureUtil.h"


static OpenGLFeatureUtil* OpenGLFeatureUtil_instance;




void OpenGLFeatureUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLFeatureUtil_instance = OpenGLFeatureUtil_new();
}

void OpenGLFeatureUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLFeatureUtil", nullptr);
    java_register_method("OpenGLFeatureUtil", "isAnyThreed", (void*) OpenGLFeatureUtil_isAnyThreed);
}


OpenGLFeatureUtil* OpenGLFeatureUtil_getInstance(void) {
        return (OpenGLFeatureUtil_staticInit(), OpenGLFeatureUtil_instance);
}


void OpenGLFeatureUtil_init(OpenGLFeatureUtil* this) {
    OpenGLFeatureUtil_register();
}

OpenGLFeatureUtil* OpenGLFeatureUtil_new(void) {
    OpenGLFeatureUtil* this = java_object_alloc(sizeof(OpenGLFeatureUtil), "OpenGLFeatureUtil");
    OpenGLFeatureUtil_init(this);
    return this;
}


bool OpenGLFeatureUtil_isAnyThreed(OpenGLFeatureUtil* this) {
        return false;
}

