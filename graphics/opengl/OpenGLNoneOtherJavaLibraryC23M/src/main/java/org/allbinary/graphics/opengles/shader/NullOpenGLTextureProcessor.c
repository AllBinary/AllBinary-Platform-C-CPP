// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/NullOpenGLTextureProcessor.h"
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"


static OpenGLObject3dProcessor* NullOpenGLTextureProcessor_instance;


void NullOpenGLTextureProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullOpenGLTextureProcessor_instance = OpenGLObject3dProcessor_new();
}

void NullOpenGLTextureProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullOpenGLTextureProcessor", nullptr);
}

void NullOpenGLTextureProcessor_init(NullOpenGLTextureProcessor* this) {
    NullOpenGLTextureProcessor_register();
}

NullOpenGLTextureProcessor* NullOpenGLTextureProcessor_new(void) {
    NullOpenGLTextureProcessor* this = java_object_alloc(sizeof(NullOpenGLTextureProcessor), "NullOpenGLTextureProcessor");
    NullOpenGLTextureProcessor_init(this);
    return this;
}


OpenGLObject3dProcessor* NullOpenGLTextureProcessor_getInstance(void) {
        return (NullOpenGLTextureProcessor_staticInit(), NullOpenGLTextureProcessor_instance);
}

