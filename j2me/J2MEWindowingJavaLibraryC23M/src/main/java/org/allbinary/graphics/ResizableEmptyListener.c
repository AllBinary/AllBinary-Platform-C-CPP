// Generated Code Do Not Modify
#include "org/allbinary/graphics/ResizableEmptyListener.h"
#include "org/allbinary/graphics/ResizableListenerInterface.h"




void ResizableEmptyListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ResizableEmptyListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ResizableEmptyListener", nullptr);
    java_register_method("ResizableEmptyListener", "onResizable", (void*) ResizableEmptyListener_onResizable);
}

void ResizableEmptyListener_init(ResizableEmptyListener* this) {
    ResizableEmptyListener_register();
}

ResizableEmptyListener* ResizableEmptyListener_new(void) {
    ResizableEmptyListener* this = java_object_alloc(sizeof(ResizableEmptyListener), "ResizableEmptyListener");
    ResizableEmptyListener_init(this);
    return this;
}


void ResizableEmptyListener_onResizable(ResizableEmptyListener* this, bool isResizable) {
}

