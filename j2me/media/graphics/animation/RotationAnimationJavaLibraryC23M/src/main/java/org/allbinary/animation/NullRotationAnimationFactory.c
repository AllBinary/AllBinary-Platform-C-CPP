// Generated Code Do Not Modify
#include "org/allbinary/animation/NullRotationAnimationFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/NullRotationAnimation2.h"
#include "org/allbinary/animation/Animation.h"


static NullRotationAnimationFactory* NullRotationAnimationFactory_NULL_ROTATION_ANIMATION_FACTORY;






void NullRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullRotationAnimationFactory_NULL_ROTATION_ANIMATION_FACTORY = NullRotationAnimationFactory_new();
}

void NullRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRotationAnimationFactory", nullptr);
    java_register_method("NullRotationAnimationFactory", "getInstance", (void*) NullRotationAnimationFactory_getInstance);
    java_register_method("NullRotationAnimationFactory", "getInstanceAnimation", (void*) NullRotationAnimationFactory_getInstanceAnimation);
    java_register_method("NullRotationAnimationFactory", "setInitialScale", (void*) NullRotationAnimationFactory_setInitialScale);
}

static void NullRotationAnimationFactory_initFields(NullRotationAnimationFactory* this) {
    this->NULL_ROTATION_ANIMATION_ARRAY = ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), 0));
    this->NULL_ANIMATION = NullRotationAnimation2_new();
}


void NullRotationAnimationFactory_init(NullRotationAnimationFactory* this) {
    NullRotationAnimationFactory_register();
    NullRotationAnimationFactory_initFields(this);
}

NullRotationAnimationFactory* NullRotationAnimationFactory_new(void) {
    NullRotationAnimationFactory* this = java_object_alloc(sizeof(NullRotationAnimationFactory), "NullRotationAnimationFactory");
    NullRotationAnimationFactory_init(this);
    return this;
}


NullRotationAnimationFactory* NullRotationAnimationFactory_getFactoryInstance(void) {
        return (NullRotationAnimationFactory_staticInit(), NullRotationAnimationFactory_NULL_ROTATION_ANIMATION_FACTORY);
}


Animation* NullRotationAnimationFactory_getInstance(NullRotationAnimationFactory* this, int32_t instanceId) {
        return this->NULL_ANIMATION;
}


// throws Exception
Animation* NullRotationAnimationFactory_getInstanceAnimation(NullRotationAnimationFactory* this, Animation* animationInterface) {
        return this->NULL_ANIMATION;
}


void NullRotationAnimationFactory_setInitialScale(NullRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

