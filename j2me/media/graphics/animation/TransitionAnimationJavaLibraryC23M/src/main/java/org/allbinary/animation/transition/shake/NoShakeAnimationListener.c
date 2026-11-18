// Generated Code Do Not Modify
#include "org/allbinary/animation/transition/shake/NoShakeAnimationListener.h"
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"


ShakeAnimationListener* NoShakeAnimationListener_NO_SHAKE_ANIMATION_LISTENER;

void NoShakeAnimationListener_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NoShakeAnimationListener_NO_SHAKE_ANIMATION_LISTENER = NoShakeAnimationListener_new();
}

void NoShakeAnimationListener_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NoShakeAnimationListener", "ShakeAnimationListener");
}

void NoShakeAnimationListener_init(NoShakeAnimationListener* this) {
    NoShakeAnimationListener_register();
    ShakeAnimationListener_init(&this->base);
}

NoShakeAnimationListener* NoShakeAnimationListener_new(void) {
    NoShakeAnimationListener* this = java_object_alloc(sizeof(NoShakeAnimationListener), "NoShakeAnimationListener");
    NoShakeAnimationListener_init(this);
    return this;
}

