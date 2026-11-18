// Generated Code Do Not Modify
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"
#include "org/allbinary/animation/transition/shake/ShakeEvent.h"








void ShakeAnimationListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ShakeAnimationListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShakeAnimationListener", nullptr);
    java_register_method("ShakeAnimationListener", "onSmallShakeEvent", (void*) ShakeAnimationListener_onSmallShakeEvent);
    java_register_method("ShakeAnimationListener", "onMediumShakeEvent", (void*) ShakeAnimationListener_onMediumShakeEvent);
    java_register_method("ShakeAnimationListener", "onLargeShakeEvent", (void*) ShakeAnimationListener_onLargeShakeEvent);
    java_register_method("ShakeAnimationListener", "onShakeEvent", (void*) ShakeAnimationListener_onShakeEvent);
    java_register_method("ShakeAnimationListener", "getType", (void*) ShakeAnimationListener_getType);
}

void ShakeAnimationListener_init(ShakeAnimationListener* this) {
    ShakeAnimationListener_register();
}

ShakeAnimationListener* ShakeAnimationListener_new(void) {
    ShakeAnimationListener* this = java_object_alloc(sizeof(ShakeAnimationListener), "ShakeAnimationListener");
    ShakeAnimationListener_init(this);
    return this;
}


void ShakeAnimationListener_onSmallShakeEvent(ShakeAnimationListener* this) {
}


void ShakeAnimationListener_onMediumShakeEvent(ShakeAnimationListener* this) {
}


void ShakeAnimationListener_onLargeShakeEvent(ShakeAnimationListener* this) {
}


void ShakeAnimationListener_onShakeEvent(ShakeAnimationListener* this, ShakeEvent* shakeEvent) {
}


int32_t ShakeAnimationListener_getType(ShakeAnimationListener* this) {
        return 0;
}

