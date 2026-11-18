// Generated Code Do Not Modify
#include "org/allbinary/animation/AnimationBehavior.h"


static AnimationBehavior* AnimationBehavior_instance;



void AnimationBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnimationBehavior_instance = AnimationBehavior_new();
}

void AnimationBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationBehavior", nullptr);
    java_register_method("AnimationBehavior", "reset", (void*) AnimationBehavior_reset);
}

void AnimationBehavior_init(AnimationBehavior* this) {
    AnimationBehavior_register();
}

AnimationBehavior* AnimationBehavior_new(void) {
    AnimationBehavior* this = java_object_alloc(sizeof(AnimationBehavior), "AnimationBehavior");
    AnimationBehavior_init(this);
    return this;
}


AnimationBehavior* AnimationBehavior_getInstance(void) {
        return (AnimationBehavior_staticInit(), AnimationBehavior_instance);
}


void AnimationBehavior_reset(AnimationBehavior* this) {
}

