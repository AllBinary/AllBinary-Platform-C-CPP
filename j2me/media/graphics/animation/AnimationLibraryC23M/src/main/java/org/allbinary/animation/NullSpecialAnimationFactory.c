// Generated Code Do Not Modify
#include "org/allbinary/animation/NullSpecialAnimationFactory.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/Animation.h"


static NullSpecialAnimationFactory* NullSpecialAnimationFactory_NULL_SPECIAL_ANIMATION_FACTORY;






void NullSpecialAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullSpecialAnimationFactory_NULL_SPECIAL_ANIMATION_FACTORY = NullSpecialAnimationFactory_new();
}

void NullSpecialAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullSpecialAnimationFactory", nullptr);
    java_register_method("NullSpecialAnimationFactory", "getInstance", (void*) NullSpecialAnimationFactory_getInstance);
    java_register_method("NullSpecialAnimationFactory", "getInstanceAnimation", (void*) NullSpecialAnimationFactory_getInstanceAnimation);
    java_register_method("NullSpecialAnimationFactory", "setInitialScale", (void*) NullSpecialAnimationFactory_setInitialScale);
}


void NullSpecialAnimationFactory_init(NullSpecialAnimationFactory* this) {
    NullSpecialAnimationFactory_register();
}

NullSpecialAnimationFactory* NullSpecialAnimationFactory_new(void) {
    NullSpecialAnimationFactory* this = java_object_alloc(sizeof(NullSpecialAnimationFactory), "NullSpecialAnimationFactory");
    NullSpecialAnimationFactory_init(this);
    return this;
}


NullSpecialAnimationFactory* NullSpecialAnimationFactory_getFactoryInstance(void) {
        return (NullSpecialAnimationFactory_staticInit(), NullSpecialAnimationFactory_NULL_SPECIAL_ANIMATION_FACTORY);
}


// throws Exception
Animation* NullSpecialAnimationFactory_getInstance(NullSpecialAnimationFactory* this, int32_t instanceId) {
        return SpecialAnimation_getInstance();
}


// throws Exception
Animation* NullSpecialAnimationFactory_getInstanceAnimation(NullSpecialAnimationFactory* this, Animation* animationInterface) {
        return SpecialAnimation_getInstance();
}


void NullSpecialAnimationFactory_setInitialScale(NullSpecialAnimationFactory* this, ScaleProperties* scaleProperties) {
}

