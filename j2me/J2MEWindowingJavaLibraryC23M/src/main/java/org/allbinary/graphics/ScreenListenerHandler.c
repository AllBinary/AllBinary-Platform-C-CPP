// Generated Code Do Not Modify
#include "org/allbinary/graphics/ScreenListenerHandler.h"
#include "org/allbinary/graphics/ScreenEmptyListener.h"
#include "org/allbinary/graphics/ScreenListenerInterface.h"


static ScreenListenerHandler* ScreenListenerHandler_instance;





void ScreenListenerHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ScreenListenerHandler_instance = ScreenListenerHandler_new();
}

void ScreenListenerHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ScreenListenerHandler", nullptr);
    java_register_method("ScreenListenerHandler", "setListener", (void*) ScreenListenerHandler_setListener);
    java_register_method("ScreenListenerHandler", "fireWithState", (void*) ScreenListenerHandler_fireWithState);
    java_register_method("ScreenListenerHandler", "fire", (void*) ScreenListenerHandler_fire);
}

static void ScreenListenerHandler_initFields(ScreenListenerHandler* this) {
    this->screenListenerInterface = ScreenEmptyListener_new();
}

void ScreenListenerHandler_init(ScreenListenerHandler* this) {
    ScreenListenerHandler_register();
    ScreenListenerHandler_initFields(this);
}

ScreenListenerHandler* ScreenListenerHandler_new(void) {
    ScreenListenerHandler* this = java_object_alloc(sizeof(ScreenListenerHandler), "ScreenListenerHandler");
    ScreenListenerHandler_init(this);
    return this;
}


ScreenListenerHandler* ScreenListenerHandler_getInstance(void) {
        return (ScreenListenerHandler_staticInit(), ScreenListenerHandler_instance);
}


void ScreenListenerHandler_setListener(ScreenListenerHandler* this, ScreenListenerInterface* screenListenerInterface) {
        this->screenListenerInterface = screenListenerInterface;
}


void ScreenListenerHandler_fireWithState(ScreenListenerHandler* this, bool isFullScreen) {
        ScreenListenerInterface_onFullScreen(this->screenListenerInterface, isFullScreen);
}


void ScreenListenerHandler_fire(ScreenListenerHandler* this) {
        ScreenListenerInterface_onFullScreenDisplay(this->screenListenerInterface);
}

