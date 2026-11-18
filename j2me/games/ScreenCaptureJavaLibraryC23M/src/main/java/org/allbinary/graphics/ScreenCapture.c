// Generated Code Do Not Modify
#include "org/allbinary/graphics/ScreenCapture.h"






void ScreenCapture_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScreenCapture_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenCapture", nullptr);
    java_register_method("ScreenCapture", "saveFrame", (void*) ScreenCapture_saveFrame);
    java_register_method("ScreenCapture", "startRecording", (void*) ScreenCapture_startRecording);
    java_register_method("ScreenCapture", "endRecording", (void*) ScreenCapture_endRecording);
}

void ScreenCapture_init(ScreenCapture* this) {
    ScreenCapture_register();
}

ScreenCapture* ScreenCapture_new(void) {
    ScreenCapture* this = java_object_alloc(sizeof(ScreenCapture), "ScreenCapture");
    ScreenCapture_init(this);
    return this;
}


void ScreenCapture_saveFrame(ScreenCapture* this) {
}


void ScreenCapture_startRecording(ScreenCapture* this) {
}


void ScreenCapture_endRecording(ScreenCapture* this) {
}

