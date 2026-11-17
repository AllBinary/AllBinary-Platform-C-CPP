// Generated Code Do Not Modify
#include "org/allbinary/graphics/color/ColorChangeEventHandler.h"


static ColorChangeEventHandler* ColorChangeEventHandler_eventHandler;



void ColorChangeEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    ColorChangeEventHandler_eventHandler = ColorChangeEventHandler_new();
}

void ColorChangeEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ColorChangeEventHandler", "BasicEventHandler");
}


void ColorChangeEventHandler_init(ColorChangeEventHandler* this) {
    ColorChangeEventHandler_register();
    BasicEventHandler_init(&this->base);
}

ColorChangeEventHandler* ColorChangeEventHandler_new(void) {
    ColorChangeEventHandler* this = java_object_alloc(sizeof(ColorChangeEventHandler), "ColorChangeEventHandler");
    ColorChangeEventHandler_init(this);
    return this;
}


// synchronized
ColorChangeEventHandler* ColorChangeEventHandler_getInstance(void) {
        return (ColorChangeEventHandler_staticInit(), ColorChangeEventHandler_eventHandler);
}

