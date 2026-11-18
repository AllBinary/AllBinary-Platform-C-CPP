// Generated Code Do Not Modify
#include "org/allbinary/input/motion/button/TouchButtonGenericActionResource.h"
#include "org/allbinary/input/motion/button/TouchButtonResource.h"


static TouchButtonResource* TouchButtonGenericActionResource_instance;



void TouchButtonGenericActionResource_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    TouchButtonGenericActionResource_instance = TouchButtonGenericActionResource_new();
}

void TouchButtonGenericActionResource_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonGenericActionResource", "TouchButtonResource");
}


TouchButtonResource* TouchButtonGenericActionResource_getInstance(void) {
        return (TouchButtonGenericActionResource_staticInit(), TouchButtonGenericActionResource_instance);
}


void TouchButtonGenericActionResource_init(TouchButtonGenericActionResource* this) {
    TouchButtonGenericActionResource_register();
        TouchButtonResource_init(&this->base, "/touch_button_generic_action_64_by_64.png", "/touch_button_generic_action_hint_64_by_64.png");
}

TouchButtonGenericActionResource* TouchButtonGenericActionResource_new(void) {
    TouchButtonGenericActionResource* this = java_object_alloc(sizeof(TouchButtonGenericActionResource), "TouchButtonGenericActionResource");
    TouchButtonGenericActionResource_init(this);
    return this;
}

