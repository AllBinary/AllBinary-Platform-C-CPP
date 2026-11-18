// Generated Code Do Not Modify
#include "org/allbinary/animation/special/SpecialAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/special/SpecialAnimationInterface.h"


static SpecialAnimation* SpecialAnimation_NULL_SPECIAL_ANIMATION;









void SpecialAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    SpecialAnimation_NULL_SPECIAL_ANIMATION = SpecialAnimation_new(IndexedAnimationBehavior_new(1, 250));
}

void SpecialAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SpecialAnimation", "IndexedAnimation");
    java_register_method("SpecialAnimation", "nextFrame", (void*) SpecialAnimation_nextFrame);
    java_register_method("SpecialAnimation", "setLastFrame", (void*) SpecialAnimation_setLastFrame);
    java_register_method("SpecialAnimation", "isComplete", (void*) SpecialAnimation_isComplete);
    java_register_method("SpecialAnimation", "open", (void*) SpecialAnimation_open);
    java_register_method("SpecialAnimation", "close", (void*) SpecialAnimation_close);
    java_register_method("SpecialAnimation", "process", (void*) SpecialAnimation_process);
}


SpecialAnimation* SpecialAnimation_getInstance(void) {
        return (SpecialAnimation_staticInit(), SpecialAnimation_NULL_SPECIAL_ANIMATION);
}


void SpecialAnimation_init(SpecialAnimation* this, AnimationBehavior* animationBehavior) {
    SpecialAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
}

SpecialAnimation* SpecialAnimation_new(AnimationBehavior* animationBehavior) {
    SpecialAnimation* this = java_object_alloc(sizeof(SpecialAnimation), "SpecialAnimation");
    SpecialAnimation_init(this, animationBehavior);
    return this;
}


void SpecialAnimation_nextFrame(SpecialAnimation* this) {
        IndexedAnimationBehavior* indexedAnimationBehavior = (((IndexedAnimationBehavior*) this->base.animationBehaviorP));
        indexedAnimationBehavior->loopIndex++;
}


void SpecialAnimation_setLastFrame(SpecialAnimation* this) {
}


bool SpecialAnimation_isComplete(SpecialAnimation* this) {
        return false;
}


void SpecialAnimation_open(SpecialAnimation* this) {
}


void SpecialAnimation_close(SpecialAnimation* this) {
}


void SpecialAnimation_process(SpecialAnimation* this) {
}

