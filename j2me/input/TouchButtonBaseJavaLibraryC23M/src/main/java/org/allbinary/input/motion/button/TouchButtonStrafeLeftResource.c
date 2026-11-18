// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonStrafeLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonStrafeLeftResource_instance;



void TouchButtonStrafeLeftResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonStrafeLeftResource_instance = TouchButtonStrafeLeftResource_new();
}

void TouchButtonStrafeLeftResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonStrafeLeftResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonStrafeLeftResource_getInstance(void) {
        return (TouchButtonStrafeLeftResource_staticInit(), TouchButtonStrafeLeftResource_instance);
}


void TouchButtonStrafeLeftResource_init(TouchButtonStrafeLeftResource* this) {
    TouchButtonStrafeLeftResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_strafe_left_arrow_64_by_64.png", "/touch_button_strafe_left_arrow_hint_64_by_64.png");
}

TouchButtonStrafeLeftResource* TouchButtonStrafeLeftResource_new(void) {
    TouchButtonStrafeLeftResource* this = java_object_alloc(sizeof(TouchButtonStrafeLeftResource), "TouchButtonStrafeLeftResource");
    TouchButtonStrafeLeftResource_init(this);
    return this;
}

