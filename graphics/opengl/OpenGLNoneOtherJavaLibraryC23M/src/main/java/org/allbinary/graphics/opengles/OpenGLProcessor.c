// Generated Code Do Not Modify
#include "org/allbinary/graphics/opengles/OpenGLProcessor.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/string/CommonStrings.h"




void OpenGLProcessor_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLProcessor_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLProcessor", nullptr);
    java_register_method("OpenGLProcessor", "process", (void*) OpenGLProcessor_process);
}

static void OpenGLProcessor_initFields(OpenGLProcessor* this) {
    this->logUtil = LogUtil_getInstance();
    this->commonStrings = CommonStrings_getInstance();
}

void OpenGLProcessor_init(OpenGLProcessor* this) {
    OpenGLProcessor_register();
    OpenGLProcessor_initFields(this);
}

OpenGLProcessor* OpenGLProcessor_new(void) {
    OpenGLProcessor* this = java_object_alloc(sizeof(OpenGLProcessor), "OpenGLProcessor");
    OpenGLProcessor_init(this);
    return this;
}


void OpenGLProcessor_process(OpenGLProcessor* this, GL10* gl) {
}

