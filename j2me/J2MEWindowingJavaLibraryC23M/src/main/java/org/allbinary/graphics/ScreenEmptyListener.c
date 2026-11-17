// Generated Code Do Not Modify
#include "org/allbinary/graphics/ScreenEmptyListener.h"
#include "org/allbinary/graphics/ScreenListenerInterface.h"





void ScreenEmptyListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ScreenEmptyListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenEmptyListener", nullptr);
    java_register_method("ScreenEmptyListener", "onFullScreen", (void*) ScreenEmptyListener_onFullScreen);
    java_register_method("ScreenEmptyListener", "onFullScreenDisplay", (void*) ScreenEmptyListener_onFullScreenDisplay);
}

void ScreenEmptyListener_init(ScreenEmptyListener* this) {
    ScreenEmptyListener_register();
}

ScreenEmptyListener* ScreenEmptyListener_new(void) {
    ScreenEmptyListener* this = java_object_alloc(sizeof(ScreenEmptyListener), "ScreenEmptyListener");
    ScreenEmptyListener_init(this);
    return this;
}


void ScreenEmptyListener_onFullScreen(ScreenEmptyListener* this, bool isFullScreen) {
}


void ScreenEmptyListener_onFullScreenDisplay(ScreenEmptyListener* this) {
}

