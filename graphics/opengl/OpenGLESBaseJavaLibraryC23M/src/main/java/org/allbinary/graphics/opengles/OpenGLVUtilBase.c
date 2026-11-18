// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLVUtilBase.h"
#include "javax/microedition/khronos/opengles/GL10.h"






void OpenGLVUtilBase_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLVUtilBase_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLVUtilBase", nullptr);
    java_register_method("OpenGLVUtilBase", "glTexEnvix", (void*) OpenGLVUtilBase_glTexEnvix);
    java_register_method("OpenGLVUtilBase", "glTexParameterix", (void*) OpenGLVUtilBase_glTexParameterix);
    java_register_method("OpenGLVUtilBase", "glGenerateMipmap", (void*) OpenGLVUtilBase_glGenerateMipmap);
}

void OpenGLVUtilBase_init(OpenGLVUtilBase* this) {
    OpenGLVUtilBase_register();
}

OpenGLVUtilBase* OpenGLVUtilBase_new(void) {
    OpenGLVUtilBase* this = java_object_alloc(sizeof(OpenGLVUtilBase), "OpenGLVUtilBase");
    OpenGLVUtilBase_init(this);
    return this;
}


void OpenGLVUtilBase_glTexEnvix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param) {
}


void OpenGLVUtilBase_glTexParameterix(OpenGLVUtilBase* this, GL10* gl, int32_t target, int32_t pname, int32_t param) {
}


void OpenGLVUtilBase_glGenerateMipmap(OpenGLVUtilBase* this, GL10* gl, int32_t textureId, int32_t target, bool generateMipMap) {
}

