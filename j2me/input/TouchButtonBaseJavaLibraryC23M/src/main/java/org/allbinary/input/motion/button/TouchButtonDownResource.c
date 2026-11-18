// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonDownResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonDownResource_instance;



void TouchButtonDownResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonDownResource_instance = TouchButtonDownResource_new();
}

void TouchButtonDownResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonDownResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonDownResource_getInstance(void) {
        return (TouchButtonDownResource_staticInit(), TouchButtonDownResource_instance);
}


void TouchButtonDownResource_init(TouchButtonDownResource* this) {
    TouchButtonDownResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_down_arrow_64_by_64.png", "/touch_button_down_arrow_hint_64_by_64.png");
}

TouchButtonDownResource* TouchButtonDownResource_new(void) {
    TouchButtonDownResource* this = java_object_alloc(sizeof(TouchButtonDownResource), "TouchButtonDownResource");
    TouchButtonDownResource_init(this);
    return this;
}

