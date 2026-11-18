// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"


static OpenGLESImageTranslate* OpenGLESImageTranslate_instance;




void OpenGLESImageTranslate_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    OpenGLESImageTranslate_instance = OpenGLESImageTranslate_new();
}

void OpenGLESImageTranslate_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESImageTranslate", nullptr);
    java_register_method("OpenGLESImageTranslate", "translate", (void*) OpenGLESImageTranslate_translate);
    java_register_method("OpenGLESImageTranslate", "translate2", (void*) OpenGLESImageTranslate_translate2);
}

void OpenGLESImageTranslate_init(OpenGLESImageTranslate* this) {
    OpenGLESImageTranslate_register();
}

OpenGLESImageTranslate* OpenGLESImageTranslate_new(void) {
    OpenGLESImageTranslate* this = java_object_alloc(sizeof(OpenGLESImageTranslate), "OpenGLESImageTranslate");
    OpenGLESImageTranslate_init(this);
    return this;
}


OpenGLESImageTranslate* OpenGLESImageTranslate_getInstance(void) {
        return (OpenGLESImageTranslate_staticInit(), OpenGLESImageTranslate_instance);
}


void OpenGLESImageTranslate_translate(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y) {
}


void OpenGLESImageTranslate_translate2(OpenGLESImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage) {
}

