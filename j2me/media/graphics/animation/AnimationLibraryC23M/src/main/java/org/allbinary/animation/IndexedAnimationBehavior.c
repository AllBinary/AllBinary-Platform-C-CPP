// Generated Code Do Not Modify
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/AnimationBehavior.h"





void IndexedAnimationBehavior_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IndexedAnimationBehavior_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IndexedAnimationBehavior", "AnimationBehavior");
    java_register_method("IndexedAnimationBehavior", "reset", (void*) IndexedAnimationBehavior_reset);
}

static void IndexedAnimationBehavior_initFields(IndexedAnimationBehavior* this) {
    
    
    this->elapsedTime = 0;
    this->loopIndex = 0;
}


void IndexedAnimationBehavior_init(IndexedAnimationBehavior* this, int32_t loopTotal, int64_t frameDelayTime) {
    IndexedAnimationBehavior_register();
    AnimationBehavior_init(&this->base);
    IndexedAnimationBehavior_initFields(this);
        this->loopTotal = loopTotal;
        this->frameDelayTime = frameDelayTime;
}

IndexedAnimationBehavior* IndexedAnimationBehavior_new(int32_t loopTotal, int64_t frameDelayTime) {
    IndexedAnimationBehavior* this = java_object_alloc(sizeof(IndexedAnimationBehavior), "IndexedAnimationBehavior");
    IndexedAnimationBehavior_init(this, loopTotal, frameDelayTime);
    return this;
}


void IndexedAnimationBehavior_reset(IndexedAnimationBehavior* this) {
        this->loopIndex = 0;
}

