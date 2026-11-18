// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/AutoCompoundRotationAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/compound/AutoCompoundRotationAnimation.h"






void AutoCompoundRotationAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AutoCompoundRotationAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AutoCompoundRotationAnimationInterfaceFactory", "CompoundAnimationInterfaceFactory");
    java_register_method("AutoCompoundRotationAnimationInterfaceFactory", "createArray", (void*) AutoCompoundRotationAnimationInterfaceFactory_createArray);
    java_register_method("AutoCompoundRotationAnimationInterfaceFactory", "createAnimation", (void*) AutoCompoundRotationAnimationInterfaceFactory_createAnimation);
}


void AutoCompoundRotationAnimationInterfaceFactory_init(AutoCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    AutoCompoundRotationAnimationInterfaceFactory_register();
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
}

AutoCompoundRotationAnimationInterfaceFactory* AutoCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    AutoCompoundRotationAnimationInterfaceFactory* this = java_object_alloc(sizeof(AutoCompoundRotationAnimationInterfaceFactory), "AutoCompoundRotationAnimationInterfaceFactory");
    AutoCompoundRotationAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** AutoCompoundRotationAnimationInterfaceFactory_createArray(AutoCompoundRotationAnimationInterfaceFactory* this, int32_t size) {
        return ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), size));
}


Animation* AutoCompoundRotationAnimationInterfaceFactory_createAnimation(AutoCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return AutoCompoundRotationAnimation_new(((RotationAnimation**) animationInterfaceArray), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
}

