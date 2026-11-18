// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonBlankResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonBlankResource_instance;



void TouchButtonBlankResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonBlankResource_instance = TouchButtonBlankResource_new();
}

void TouchButtonBlankResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonBlankResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonBlankResource_getInstance(void) {
        return (TouchButtonBlankResource_staticInit(), TouchButtonBlankResource_instance);
}


void TouchButtonBlankResource_init(TouchButtonBlankResource* this) {
    TouchButtonBlankResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_64_by_64.png", "/touch_button_hint_64_by_64.png");
}

TouchButtonBlankResource* TouchButtonBlankResource_new(void) {
    TouchButtonBlankResource* this = java_object_alloc(sizeof(TouchButtonBlankResource), "TouchButtonBlankResource");
    TouchButtonBlankResource_init(this);
    return this;
}

