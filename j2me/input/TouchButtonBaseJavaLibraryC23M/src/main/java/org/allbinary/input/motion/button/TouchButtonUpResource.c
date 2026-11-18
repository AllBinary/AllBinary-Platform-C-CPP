// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonUpResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonUpResource_instance;



void TouchButtonUpResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonUpResource_instance = TouchButtonUpResource_new();
}

void TouchButtonUpResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonUpResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonUpResource_getInstance(void) {
        return (TouchButtonUpResource_staticInit(), TouchButtonUpResource_instance);
}


void TouchButtonUpResource_init(TouchButtonUpResource* this) {
    TouchButtonUpResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_up_arrow_64_by_64.png", "/touch_button_up_arrow_hint_64_by_64.png");
}

TouchButtonUpResource* TouchButtonUpResource_new(void) {
    TouchButtonUpResource* this = java_object_alloc(sizeof(TouchButtonUpResource), "TouchButtonUpResource");
    TouchButtonUpResource_init(this);
    return this;
}

