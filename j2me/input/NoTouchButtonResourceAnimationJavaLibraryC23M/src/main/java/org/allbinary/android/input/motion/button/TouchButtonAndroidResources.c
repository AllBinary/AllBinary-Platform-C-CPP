// Generated Code Do Not Modify
#include "org/allbinary/android/input/motion/button/TouchButtonAndroidResources.h"




void TouchButtonAndroidResources_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TouchButtonAndroidResources_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TouchButtonAndroidResources", "Init");
    java_register_method("TouchButtonAndroidResources", "init", (void*) TouchButtonAndroidResources_initMethod);
}

void TouchButtonAndroidResources_init(TouchButtonAndroidResources* this) {
    TouchButtonAndroidResources_register();
    Init_init(&this->base);
}

TouchButtonAndroidResources* TouchButtonAndroidResources_new(void) {
    TouchButtonAndroidResources* this = java_object_alloc(sizeof(TouchButtonAndroidResources), "TouchButtonAndroidResources");
    TouchButtonAndroidResources_init(this);
    return this;
}


void TouchButtonAndroidResources_initMethod(TouchButtonAndroidResources* this) {
}

