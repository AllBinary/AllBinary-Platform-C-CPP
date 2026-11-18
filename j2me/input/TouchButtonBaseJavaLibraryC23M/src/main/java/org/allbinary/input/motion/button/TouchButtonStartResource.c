// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonStartResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonStartResource_instance;



void TouchButtonStartResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonStartResource_instance = TouchButtonStartResource_new();
}

void TouchButtonStartResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonStartResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonStartResource_getInstance(void) {
        return (TouchButtonStartResource_staticInit(), TouchButtonStartResource_instance);
}


void TouchButtonStartResource_init(TouchButtonStartResource* this) {
    TouchButtonStartResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_start_64_by_64.png", "/touch_button_start_hint_64_by_64.png");
}

TouchButtonStartResource* TouchButtonStartResource_new(void) {
    TouchButtonStartResource* this = java_object_alloc(sizeof(TouchButtonStartResource), "TouchButtonStartResource");
    TouchButtonStartResource_init(this);
    return this;
}

