// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonFireResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonFireResource_instance;



void TouchButtonFireResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonFireResource_instance = TouchButtonFireResource_new();
}

void TouchButtonFireResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonFireResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonFireResource_getInstance(void) {
        return (TouchButtonFireResource_staticInit(), TouchButtonFireResource_instance);
}


void TouchButtonFireResource_init(TouchButtonFireResource* this) {
    TouchButtonFireResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_fire_64_by_64.png", "/touch_button_fire_hint_64_by_64.png");
}

TouchButtonFireResource* TouchButtonFireResource_new(void) {
    TouchButtonFireResource* this = java_object_alloc(sizeof(TouchButtonFireResource), "TouchButtonFireResource");
    TouchButtonFireResource_init(this);
    return this;
}

