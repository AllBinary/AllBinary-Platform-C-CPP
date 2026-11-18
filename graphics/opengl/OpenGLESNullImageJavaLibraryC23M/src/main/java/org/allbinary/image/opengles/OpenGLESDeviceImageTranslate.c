// Generated Code Do Not Modify
#include "org/allbinary/image/opengles/OpenGLESDeviceImageTranslate.h"
#include "javax/microedition/khronos/opengles/GL10.h"
#include "org/allbinary/image/opengles/OpenGLESImageTranslate.h"
#include "org/allbinary/image/opengles/OpenGLESImage.h"





void OpenGLESDeviceImageTranslate_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void OpenGLESDeviceImageTranslate_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("OpenGLESDeviceImageTranslate", "OpenGLESImageTranslate");
    java_register_method("OpenGLESDeviceImageTranslate", "translate", (void*) OpenGLESDeviceImageTranslate_translate);
    java_register_method("OpenGLESDeviceImageTranslate", "translate2", (void*) OpenGLESDeviceImageTranslate_translate2);
}

static void OpenGLESDeviceImageTranslate_initFields(OpenGLESDeviceImageTranslate* this) {
    this->translateX = 0.0f;
    this->translateY = 0.0f;
    this->translateX2 = 0.0f;
    this->translateY2 = 0.0f;
}

void OpenGLESDeviceImageTranslate_init(OpenGLESDeviceImageTranslate* this) {
    OpenGLESDeviceImageTranslate_register();
    OpenGLESImageTranslate_init(&this->base);
    OpenGLESDeviceImageTranslate_initFields(this);
}

OpenGLESDeviceImageTranslate* OpenGLESDeviceImageTranslate_new(void) {
    OpenGLESDeviceImageTranslate* this = java_object_alloc(sizeof(OpenGLESDeviceImageTranslate), "OpenGLESDeviceImageTranslate");
    OpenGLESDeviceImageTranslate_init(this);
    return this;
}


void OpenGLESDeviceImageTranslate_translate(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage, float x, float y) {
        OpenGLESImageProcessor_translate(openGLESImage->imageProcessor, gl, this->translateX + (openGLESImage->openGLESImageProperties->scaleX * x), this->translateY + (openGLESImage->openGLESImageProperties->scaleY * y));
}


void OpenGLESDeviceImageTranslate_translate2(OpenGLESDeviceImageTranslate* this, GL10* gl, OpenGLESImage* openGLESImage) {
        OpenGLESImageProcessor_translate(openGLESImage->imageProcessor, gl, this->translateX2, this->translateY2);
}

