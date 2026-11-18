// Generated Code Do Not Modify
#include "org/allbinary/input/TouchJ2ME.h"







void TouchJ2ME_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchJ2ME_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchJ2ME", nullptr);
    java_register_method("TouchJ2ME", "pointerDragged", (void*) TouchJ2ME_pointerDragged);
    java_register_method("TouchJ2ME", "pointerPressed", (void*) TouchJ2ME_pointerPressed);
    java_register_method("TouchJ2ME", "pointerReleased", (void*) TouchJ2ME_pointerReleased);
}


void TouchJ2ME_init(TouchJ2ME* this) {
    TouchJ2ME_register();
}

TouchJ2ME* TouchJ2ME_new(void) {
    TouchJ2ME* this = java_object_alloc(sizeof(TouchJ2ME), "TouchJ2ME");
    TouchJ2ME_init(this);
    return this;
}


void TouchJ2ME_pointerDragged(TouchJ2ME* this, int32_t x, int32_t y) {
}


void TouchJ2ME_pointerPressed(TouchJ2ME* this, int32_t x, int32_t y) {
}


void TouchJ2ME_pointerReleased(TouchJ2ME* this, int32_t x, int32_t y) {
}

