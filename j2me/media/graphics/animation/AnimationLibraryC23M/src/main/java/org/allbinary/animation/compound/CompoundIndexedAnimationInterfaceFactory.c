// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/CompoundIndexedAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/compound/CompoundIndexedAnimation.h"






void CompoundIndexedAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompoundIndexedAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompoundIndexedAnimationInterfaceFactory", "CompoundAnimationInterfaceFactory");
    java_register_method("CompoundIndexedAnimationInterfaceFactory", "createArray", (void*) CompoundIndexedAnimationInterfaceFactory_createArray);
    java_register_method("CompoundIndexedAnimationInterfaceFactory", "createAnimation", (void*) CompoundIndexedAnimationInterfaceFactory_createAnimation);
}


void CompoundIndexedAnimationInterfaceFactory_init(CompoundIndexedAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundIndexedAnimationInterfaceFactory_register();
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
}

CompoundIndexedAnimationInterfaceFactory* CompoundIndexedAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundIndexedAnimationInterfaceFactory* this = java_object_alloc(sizeof(CompoundIndexedAnimationInterfaceFactory), "CompoundIndexedAnimationInterfaceFactory");
    CompoundIndexedAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** CompoundIndexedAnimationInterfaceFactory_createArray(CompoundIndexedAnimationInterfaceFactory* this, int32_t size) {
        return ((Animation**) java_array_new(sizeof(Animation*), size));
}


Animation* CompoundIndexedAnimationInterfaceFactory_createAnimation(CompoundIndexedAnimationInterfaceFactory* this, Animation** animationArray) {
        return CompoundIndexedAnimation_new(animationArray, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

