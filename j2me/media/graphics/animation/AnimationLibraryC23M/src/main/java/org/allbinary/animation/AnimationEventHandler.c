// Generated Code Do Not Modify
#include "org/allbinary/animation/AnimationEventHandler.h"


static AnimationEventHandler* AnimationEventHandler_eventHandler;



void AnimationEventHandler_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnimationEventHandler_eventHandler = AnimationEventHandler_new();
}

void AnimationEventHandler_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationEventHandler", "BasicEventHandler");
}


void AnimationEventHandler_init(AnimationEventHandler* this) {
    AnimationEventHandler_register();
    BasicEventHandler_init(&this->base);
}

AnimationEventHandler* AnimationEventHandler_new(void) {
    AnimationEventHandler* this = java_object_alloc(sizeof(AnimationEventHandler), "AnimationEventHandler");
    AnimationEventHandler_init(this);
    return this;
}


// synchronized
AnimationEventHandler* AnimationEventHandler_getInstance(void) {
        return (AnimationEventHandler_staticInit(), AnimationEventHandler_eventHandler);
}

