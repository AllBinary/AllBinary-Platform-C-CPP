// Generated Code Do Not Modify
#include "org/allbinary/graphics/ScreenCaptureNoneFactory.h"
#include "org/allbinary/graphics/ScreenCapture.h"


static ScreenCapture* ScreenCaptureNoneFactory_instance;


void ScreenCaptureNoneFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScreenCaptureNoneFactory_instance = ScreenCapture_new();
}

void ScreenCaptureNoneFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenCaptureNoneFactory", nullptr);
}

void ScreenCaptureNoneFactory_init(ScreenCaptureNoneFactory* this) {
    ScreenCaptureNoneFactory_register();
}

ScreenCaptureNoneFactory* ScreenCaptureNoneFactory_new(void) {
    ScreenCaptureNoneFactory* this = java_object_alloc(sizeof(ScreenCaptureNoneFactory), "ScreenCaptureNoneFactory");
    ScreenCaptureNoneFactory_init(this);
    return this;
}


ScreenCapture* ScreenCaptureNoneFactory_getInstance(void) {
        return (ScreenCaptureNoneFactory_staticInit(), ScreenCaptureNoneFactory_instance);
}

