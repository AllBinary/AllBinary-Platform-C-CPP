// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/NullOpenGLProcessorFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"


static OpenGLProcessor* NullOpenGLProcessorFactory_instance;


void NullOpenGLProcessorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullOpenGLProcessorFactory_instance = OpenGLProcessor_new();
}

void NullOpenGLProcessorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullOpenGLProcessorFactory", nullptr);
}

void NullOpenGLProcessorFactory_init(NullOpenGLProcessorFactory* this) {
    NullOpenGLProcessorFactory_register();
}

NullOpenGLProcessorFactory* NullOpenGLProcessorFactory_new(void) {
    NullOpenGLProcessorFactory* this = java_object_alloc(sizeof(NullOpenGLProcessorFactory), "NullOpenGLProcessorFactory");
    NullOpenGLProcessorFactory_init(this);
    return this;
}


OpenGLProcessor* NullOpenGLProcessorFactory_getInstance(void) {
        return (NullOpenGLProcessorFactory_staticInit(), NullOpenGLProcessorFactory_instance);
}

