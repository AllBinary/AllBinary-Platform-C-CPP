// Generated Code Do Not Modify
#include "org/allbinary/graphics/ScreenCaptureFactory.h"
#include "org/allbinary/graphics/ScreenCaptureNoneFactory.h"
#include "org/allbinary/graphics/ScreenCapture.h"


static ScreenCapture* ScreenCaptureFactory_instance;


void ScreenCaptureFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScreenCaptureFactory_instance = ScreenCaptureNoneFactory_getInstance();
}

void ScreenCaptureFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenCaptureFactory", nullptr);
}

void ScreenCaptureFactory_init(ScreenCaptureFactory* this) {
    ScreenCaptureFactory_register();
}

ScreenCaptureFactory* ScreenCaptureFactory_new(void) {
    ScreenCaptureFactory* this = java_object_alloc(sizeof(ScreenCaptureFactory), "ScreenCaptureFactory");
    ScreenCaptureFactory_init(this);
    return this;
}


ScreenCapture* ScreenCaptureFactory_getInstance(void) {
        return (ScreenCaptureFactory_staticInit(), ScreenCaptureFactory_instance);
}

