// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonTurnRightResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonTurnRightResource_instance;



void TouchButtonTurnRightResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonTurnRightResource_instance = TouchButtonTurnRightResource_new();
}

void TouchButtonTurnRightResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonTurnRightResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonTurnRightResource_getInstance(void) {
        return (TouchButtonTurnRightResource_staticInit(), TouchButtonTurnRightResource_instance);
}


void TouchButtonTurnRightResource_init(TouchButtonTurnRightResource* this) {
    TouchButtonTurnRightResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_turn_right_arrow_64_by_64.png", "/touch_button_turn_right_arrow_hint_64_by_64.png");
}

TouchButtonTurnRightResource* TouchButtonTurnRightResource_new(void) {
    TouchButtonTurnRightResource* this = java_object_alloc(sizeof(TouchButtonTurnRightResource), "TouchButtonTurnRightResource");
    TouchButtonTurnRightResource_init(this);
    return this;
}

