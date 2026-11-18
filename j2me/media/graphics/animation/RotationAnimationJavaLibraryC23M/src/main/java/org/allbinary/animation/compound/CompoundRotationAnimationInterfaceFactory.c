// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/CompoundRotationAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/compound/CompoundRotationAnimation.h"






void CompoundRotationAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompoundRotationAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompoundRotationAnimationInterfaceFactory", "CompoundAnimationInterfaceFactory");
    java_register_method("CompoundRotationAnimationInterfaceFactory", "createArray", (void*) CompoundRotationAnimationInterfaceFactory_createArray);
    java_register_method("CompoundRotationAnimationInterfaceFactory", "createAnimation", (void*) CompoundRotationAnimationInterfaceFactory_createAnimation);
}


void CompoundRotationAnimationInterfaceFactory_init(CompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundRotationAnimationInterfaceFactory_register();
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
        if (animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
}

CompoundRotationAnimationInterfaceFactory* CompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundRotationAnimationInterfaceFactory* this = java_object_alloc(sizeof(CompoundRotationAnimationInterfaceFactory), "CompoundRotationAnimationInterfaceFactory");
    CompoundRotationAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** CompoundRotationAnimationInterfaceFactory_createArray(CompoundRotationAnimationInterfaceFactory* this, int32_t size) {
        return ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), size));
}


Animation* CompoundRotationAnimationInterfaceFactory_createAnimation(CompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return CompoundRotationAnimation_new(((RotationAnimation**) animationInterfaceArray), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

