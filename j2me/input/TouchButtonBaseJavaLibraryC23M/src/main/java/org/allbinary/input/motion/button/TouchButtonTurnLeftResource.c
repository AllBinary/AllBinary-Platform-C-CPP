// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonTurnLeftResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonTurnLeftResource_instance;



void TouchButtonTurnLeftResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonTurnLeftResource_instance = TouchButtonTurnLeftResource_new();
}

void TouchButtonTurnLeftResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonTurnLeftResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonTurnLeftResource_getInstance(void) {
        return (TouchButtonTurnLeftResource_staticInit(), TouchButtonTurnLeftResource_instance);
}


void TouchButtonTurnLeftResource_init(TouchButtonTurnLeftResource* this) {
    TouchButtonTurnLeftResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_turn_left_arrow_64_by_64.png", "/touch_button_turn_left_arrow_hint_64_by_64.png");
}

TouchButtonTurnLeftResource* TouchButtonTurnLeftResource_new(void) {
    TouchButtonTurnLeftResource* this = java_object_alloc(sizeof(TouchButtonTurnLeftResource), "TouchButtonTurnLeftResource");
    TouchButtonTurnLeftResource_init(this);
    return this;
}

