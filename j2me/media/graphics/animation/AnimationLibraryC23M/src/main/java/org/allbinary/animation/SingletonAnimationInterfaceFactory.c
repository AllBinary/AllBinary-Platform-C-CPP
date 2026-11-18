// Generated Code Do Not Modify
#include "org/allbinary/animation/SingletonAnimationInterfaceFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"







void SingletonAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SingletonAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SingletonAnimationInterfaceFactory", nullptr);
    java_register_method("SingletonAnimationInterfaceFactory", "getInstance", (void*) SingletonAnimationInterfaceFactory_getInstance);
    java_register_method("SingletonAnimationInterfaceFactory", "getInstanceAnimation", (void*) SingletonAnimationInterfaceFactory_getInstanceAnimation);
    java_register_method("SingletonAnimationInterfaceFactory", "setInitialScale", (void*) SingletonAnimationInterfaceFactory_setInitialScale);
}

static void SingletonAnimationInterfaceFactory_initFields(SingletonAnimationInterfaceFactory* this) {
    
}


void SingletonAnimationInterfaceFactory_init(SingletonAnimationInterfaceFactory* this, Animation* animationInterface) {
    SingletonAnimationInterfaceFactory_register();
    SingletonAnimationInterfaceFactory_initFields(this);
        this->animationInterface = animationInterface;
}

SingletonAnimationInterfaceFactory* SingletonAnimationInterfaceFactory_new(Animation* animationInterface) {
    SingletonAnimationInterfaceFactory* this = java_object_alloc(sizeof(SingletonAnimationInterfaceFactory), "SingletonAnimationInterfaceFactory");
    SingletonAnimationInterfaceFactory_init(this, animationInterface);
    return this;
}


// throws Exception
Animation* SingletonAnimationInterfaceFactory_getInstance(SingletonAnimationInterfaceFactory* this, int32_t instanceId) {
        return this->animationInterface;
}


// throws Exception
Animation* SingletonAnimationInterfaceFactory_getInstanceAnimation(SingletonAnimationInterfaceFactory* this, Animation* animationInterface) {
        return this->animationInterface;
}


void SingletonAnimationInterfaceFactory_setInitialScale(SingletonAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

