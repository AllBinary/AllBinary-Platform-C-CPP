// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/util/BasicArrayList.h"
#include "org/allbinary/util/BasicArrayListD.h"


static OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_instance;



void OpenGLESImageExclusionUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLESImageExclusionUtil_instance = OpenGLESImageExclusionUtil_new();
}

void OpenGLESImageExclusionUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESImageExclusionUtil", nullptr);
    java_register_method("OpenGLESImageExclusionUtil", "isCustomScaling", (void*) OpenGLESImageExclusionUtil_isCustomScaling);
}

static void OpenGLESImageExclusionUtil_initFields(OpenGLESImageExclusionUtil* this) {
    this->list = BasicArrayListD_new();
}

void OpenGLESImageExclusionUtil_init(OpenGLESImageExclusionUtil* this) {
    OpenGLESImageExclusionUtil_register();
    OpenGLESImageExclusionUtil_initFields(this);
}

OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_new(void) {
    OpenGLESImageExclusionUtil* this = java_object_alloc(sizeof(OpenGLESImageExclusionUtil), "OpenGLESImageExclusionUtil");
    OpenGLESImageExclusionUtil_init(this);
    return this;
}


OpenGLESImageExclusionUtil* OpenGLESImageExclusionUtil_getInstance(void) {
        return (OpenGLESImageExclusionUtil_staticInit(), OpenGLESImageExclusionUtil_instance);
}


bool OpenGLESImageExclusionUtil_isCustomScaling(OpenGLESImageExclusionUtil* this, Image* image) {
        return false;
}

