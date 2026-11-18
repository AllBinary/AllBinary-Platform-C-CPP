// Generated Code Do Not Modify
#include "org/allbinary/animation/transition/shake/ShakeAnimationListenerFactory.h"
#include "org/allbinary/animation/transition/shake/NoShakeAnimationListener.h"
#include "org/allbinary/animation/transition/shake/ShakeAnimationListener.h"




void ShakeAnimationListenerFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ShakeAnimationListenerFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ShakeAnimationListenerFactory", nullptr);
}

void ShakeAnimationListenerFactory_init(ShakeAnimationListenerFactory* this) {
    ShakeAnimationListenerFactory_register();
}

ShakeAnimationListenerFactory* ShakeAnimationListenerFactory_new(void) {
    ShakeAnimationListenerFactory* this = java_object_alloc(sizeof(ShakeAnimationListenerFactory), "ShakeAnimationListenerFactory");
    ShakeAnimationListenerFactory_init(this);
    return this;
}


ShakeAnimationListener* ShakeAnimationListenerFactory_getInstance(void) {
        return NoShakeAnimationListener_new();
}

