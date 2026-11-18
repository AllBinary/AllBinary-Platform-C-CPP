// Generated Code Do Not Modify
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationBehavior.h"


static AnimationBehaviorFactory* AnimationBehaviorFactory_instance;



void AnimationBehaviorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnimationBehaviorFactory_instance = AnimationBehaviorFactory_new();
}

void AnimationBehaviorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationBehaviorFactory", nullptr);
    java_register_method("AnimationBehaviorFactory", "getOrCreateInstance", (void*) AnimationBehaviorFactory_getOrCreateInstance);
}

void AnimationBehaviorFactory_init(AnimationBehaviorFactory* this) {
    AnimationBehaviorFactory_register();
}

AnimationBehaviorFactory* AnimationBehaviorFactory_new(void) {
    AnimationBehaviorFactory* this = java_object_alloc(sizeof(AnimationBehaviorFactory), "AnimationBehaviorFactory");
    AnimationBehaviorFactory_init(this);
    return this;
}


AnimationBehaviorFactory* AnimationBehaviorFactory_getInstance(void) {
        return (AnimationBehaviorFactory_staticInit(), AnimationBehaviorFactory_instance);
}


AnimationBehavior* AnimationBehaviorFactory_getOrCreateInstance(AnimationBehaviorFactory* this) {
        return AnimationBehavior_getInstance();
}

