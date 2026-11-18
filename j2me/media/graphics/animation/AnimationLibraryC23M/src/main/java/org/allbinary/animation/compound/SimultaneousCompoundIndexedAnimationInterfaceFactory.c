// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/SimultaneousCompoundIndexedAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/compound/SimultaneousCompoundIndexedAnimation.h"






void SimultaneousCompoundIndexedAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimultaneousCompoundIndexedAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimultaneousCompoundIndexedAnimationInterfaceFactory", "CompoundAnimationInterfaceFactory");
    java_register_method("SimultaneousCompoundIndexedAnimationInterfaceFactory", "createArray", (void*) SimultaneousCompoundIndexedAnimationInterfaceFactory_createArray);
    java_register_method("SimultaneousCompoundIndexedAnimationInterfaceFactory", "createAnimation", (void*) SimultaneousCompoundIndexedAnimationInterfaceFactory_createAnimation);
}


void SimultaneousCompoundIndexedAnimationInterfaceFactory_init(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexedAnimationInterfaceFactory_register();
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
}

SimultaneousCompoundIndexedAnimationInterfaceFactory* SimultaneousCompoundIndexedAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexedAnimationInterfaceFactory* this = java_object_alloc(sizeof(SimultaneousCompoundIndexedAnimationInterfaceFactory), "SimultaneousCompoundIndexedAnimationInterfaceFactory");
    SimultaneousCompoundIndexedAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** SimultaneousCompoundIndexedAnimationInterfaceFactory_createArray(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, int32_t size) {
        return ((Animation**) java_array_new(sizeof(Animation*), size));
}


Animation* SimultaneousCompoundIndexedAnimationInterfaceFactory_createAnimation(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, Animation** animationArray) {
        return SimultaneousCompoundIndexedAnimation_new(animationArray, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

