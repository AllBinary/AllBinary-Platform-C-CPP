// Generated Code Do Not Modify
#include "org/allbinary/animation/NullIndexedAnimation.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"





void NullIndexedAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullIndexedAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullIndexedAnimation", "IndexedAnimation");
    java_register_method("NullIndexedAnimation", "getAnimationSize", (void*) NullIndexedAnimation_getAnimationSize);
}


void NullIndexedAnimation_init(NullIndexedAnimation* this, AnimationBehavior* animationBehavior) {
    NullIndexedAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
}

NullIndexedAnimation* NullIndexedAnimation_new(AnimationBehavior* animationBehavior) {
    NullIndexedAnimation* this = java_object_alloc(sizeof(NullIndexedAnimation), "NullIndexedAnimation");
    NullIndexedAnimation_init(this, animationBehavior);
    return this;
}


// throws Exception
int32_t NullIndexedAnimation_getAnimationSize(NullIndexedAnimation* this) {
        return 0;
}

