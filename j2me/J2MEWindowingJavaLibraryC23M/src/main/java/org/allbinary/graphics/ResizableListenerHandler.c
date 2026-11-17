// Generated Code Do Not Modify
#include "org/allbinary/graphics/ResizableListenerHandler.h"
#include "org/allbinary/graphics/ResizableListenerInterface.h"


static ResizableListenerHandler* ResizableListenerHandler_instance;





void ResizableListenerHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ResizableListenerHandler_instance = ResizableListenerHandler_new();
}

void ResizableListenerHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResizableListenerHandler", nullptr);
    java_register_method("ResizableListenerHandler", "setListener", (void*) ResizableListenerHandler_setListener);
    java_register_method("ResizableListenerHandler", "fire", (void*) ResizableListenerHandler_fire);
    java_register_method("ResizableListenerHandler", "fireEvent", (void*) ResizableListenerHandler_fireEvent);
}

void ResizableListenerHandler_init(ResizableListenerHandler* this) {
    ResizableListenerHandler_register();
}

ResizableListenerHandler* ResizableListenerHandler_new(void) {
    ResizableListenerHandler* this = java_object_alloc(sizeof(ResizableListenerHandler), "ResizableListenerHandler");
    ResizableListenerHandler_init(this);
    return this;
}


ResizableListenerHandler* ResizableListenerHandler_getInstance(void) {
        return (ResizableListenerHandler_staticInit(), ResizableListenerHandler_instance);
}


void ResizableListenerHandler_setListener(ResizableListenerHandler* this, ResizableListenerInterface* resizableListenerInterface) {
}


void ResizableListenerHandler_fire(ResizableListenerHandler* this, bool isFullScreen) {
}


// throws Exception
// synchronized
void ResizableListenerHandler_fireEvent(ResizableListenerHandler* this, bool value) {
}

