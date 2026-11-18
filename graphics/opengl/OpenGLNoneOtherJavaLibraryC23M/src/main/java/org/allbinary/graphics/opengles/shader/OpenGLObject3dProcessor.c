// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/shader/OpenGLObject3dProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/string/CommonStrings.h"





void OpenGLObject3dProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLObject3dProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLObject3dProcessor", nullptr);
    java_register_method("OpenGLObject3dProcessor", "process", (void*) OpenGLObject3dProcessor_process3);
    java_register_method("OpenGLObject3dProcessor", "process@3", (void*) OpenGLObject3dProcessor_process3);
    java_register_method("OpenGLObject3dProcessor", "process@4", (void*) OpenGLObject3dProcessor_process4);
}

static void OpenGLObject3dProcessor_initFields(OpenGLObject3dProcessor* this) {
    this->commonStrings = CommonStrings_getInstance();
}

void OpenGLObject3dProcessor_init(OpenGLObject3dProcessor* this) {
    OpenGLObject3dProcessor_register();
    OpenGLObject3dProcessor_initFields(this);
}

OpenGLObject3dProcessor* OpenGLObject3dProcessor_new(void) {
    OpenGLObject3dProcessor* this = java_object_alloc(sizeof(OpenGLObject3dProcessor), "OpenGLObject3dProcessor");
    OpenGLObject3dProcessor_init(this);
    return this;
}


void OpenGLObject3dProcessor_process3(OpenGLObject3dProcessor* this, GL10* gl, void* object3d) {
}


// Java overloaded method: C needs a different name
void OpenGLObject3dProcessor_process4(OpenGLObject3dProcessor* this, GL10* gl, void* object3d, int32_t index) {
}

