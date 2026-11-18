// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/SimultaneousCompoundRotationAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/compound/SimultaneousCompoundRotationAnimation.h"






void SimultaneousCompoundRotationAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimultaneousCompoundRotationAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimultaneousCompoundRotationAnimationInterfaceFactory", "CompoundAnimationInterfaceFactory");
    java_register_method("SimultaneousCompoundRotationAnimationInterfaceFactory", "createArray", (void*) SimultaneousCompoundRotationAnimationInterfaceFactory_createArray);
    java_register_method("SimultaneousCompoundRotationAnimationInterfaceFactory", "createAnimation", (void*) SimultaneousCompoundRotationAnimationInterfaceFactory_createAnimation);
}


void SimultaneousCompoundRotationAnimationInterfaceFactory_init(SimultaneousCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundRotationAnimationInterfaceFactory_register();
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
        if (animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
}

SimultaneousCompoundRotationAnimationInterfaceFactory* SimultaneousCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundRotationAnimationInterfaceFactory* this = java_object_alloc(sizeof(SimultaneousCompoundRotationAnimationInterfaceFactory), "SimultaneousCompoundRotationAnimationInterfaceFactory");
    SimultaneousCompoundRotationAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** SimultaneousCompoundRotationAnimationInterfaceFactory_createArray(SimultaneousCompoundRotationAnimationInterfaceFactory* this, int32_t size) {
        return ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), size));
}


Animation* SimultaneousCompoundRotationAnimationInterfaceFactory_createAnimation(SimultaneousCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return SimultaneousCompoundRotationAnimation_new(((RotationAnimation**) animationInterfaceArray), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

