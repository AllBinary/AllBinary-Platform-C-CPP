// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonStrafeRightResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonStrafeRightResource_instance;



void TouchButtonStrafeRightResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonStrafeRightResource_instance = TouchButtonStrafeRightResource_new();
}

void TouchButtonStrafeRightResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonStrafeRightResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonStrafeRightResource_getInstance(void) {
        return (TouchButtonStrafeRightResource_staticInit(), TouchButtonStrafeRightResource_instance);
}


void TouchButtonStrafeRightResource_init(TouchButtonStrafeRightResource* this) {
    TouchButtonStrafeRightResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_strafe_right_arrow_64_by_64.png", "/touch_button_strafe_right_arrow_hint_64_by_64.png");
}

TouchButtonStrafeRightResource* TouchButtonStrafeRightResource_new(void) {
    TouchButtonStrafeRightResource* this = java_object_alloc(sizeof(TouchButtonStrafeRightResource), "TouchButtonStrafeRightResource");
    TouchButtonStrafeRightResource_init(this);
    return this;
}

