// Generated Code Do Not Modify
#include "org/allbinary/animation/IndexedAnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/IndexedAnimationBehavior.h"
#include "org/allbinary/animation/AnimationBehavior.h"





void IndexedAnimationBehaviorFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void IndexedAnimationBehaviorFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("IndexedAnimationBehaviorFactory", "AnimationBehaviorFactory");
    java_register_method("IndexedAnimationBehaviorFactory", "getOrCreateInstance", (void*) IndexedAnimationBehaviorFactory_getOrCreateInstance);
}

static void IndexedAnimationBehaviorFactory_initFields(IndexedAnimationBehaviorFactory* this) {
    
    
}


void IndexedAnimationBehaviorFactory_init(IndexedAnimationBehaviorFactory* this, int32_t loopTotal, int64_t frameDelayTime) {
    IndexedAnimationBehaviorFactory_register();
    AnimationBehaviorFactory_init(&this->base);
    IndexedAnimationBehaviorFactory_initFields(this);
        this->loopTotal = loopTotal;
        this->frameDelayTime = frameDelayTime;
}

IndexedAnimationBehaviorFactory* IndexedAnimationBehaviorFactory_new(int32_t loopTotal, int64_t frameDelayTime) {
    IndexedAnimationBehaviorFactory* this = java_object_alloc(sizeof(IndexedAnimationBehaviorFactory), "IndexedAnimationBehaviorFactory");
    IndexedAnimationBehaviorFactory_init(this, loopTotal, frameDelayTime);
    return this;
}


AnimationBehavior* IndexedAnimationBehaviorFactory_getOrCreateInstance(IndexedAnimationBehaviorFactory* this) {
        return IndexedAnimationBehavior_new(this->loopTotal, this->frameDelayTime);
}

