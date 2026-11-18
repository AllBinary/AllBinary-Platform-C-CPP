// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonReverseResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonReverseResource_instance;



void TouchButtonReverseResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonReverseResource_instance = TouchButtonReverseResource_new();
}

void TouchButtonReverseResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonReverseResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonReverseResource_getInstance(void) {
        return (TouchButtonReverseResource_staticInit(), TouchButtonReverseResource_instance);
}


void TouchButtonReverseResource_init(TouchButtonReverseResource* this) {
    TouchButtonReverseResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_reverse_64_by_64.png", "/touch_button_reverse_hint_64_by_64.png");
}

TouchButtonReverseResource* TouchButtonReverseResource_new(void) {
    TouchButtonReverseResource* this = java_object_alloc(sizeof(TouchButtonReverseResource), "TouchButtonReverseResource");
    TouchButtonReverseResource_init(this);
    return this;
}

