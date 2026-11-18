// Generated Code Do Not Modify
#include "org/allbinary/animation/NullIndexedAnimationFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/NullIndexedAnimationInner.h"
#include "org/allbinary/animation/Animation.h"


IndexedAnimation** NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_ARRAY;
static NullIndexedAnimationFactory* NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_FACTORY;






void NullIndexedAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_ARRAY = ((IndexedAnimation**) java_array_new(sizeof(IndexedAnimation*), 0));
    NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_FACTORY = NullIndexedAnimationFactory_new();
}

void NullIndexedAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullIndexedAnimationFactory", nullptr);
    java_register_method("NullIndexedAnimationFactory", "getInstance", (void*) NullIndexedAnimationFactory_getInstance);
    java_register_method("NullIndexedAnimationFactory", "getInstanceAnimation", (void*) NullIndexedAnimationFactory_getInstanceAnimation);
    java_register_method("NullIndexedAnimationFactory", "setInitialScale", (void*) NullIndexedAnimationFactory_setInitialScale);
}

static void NullIndexedAnimationFactory_initFields(NullIndexedAnimationFactory* this) {
    this->NULL_ANIMATION = NullIndexedAnimationInner_new();
}


void NullIndexedAnimationFactory_init(NullIndexedAnimationFactory* this) {
    NullIndexedAnimationFactory_register();
    NullIndexedAnimationFactory_initFields(this);
}

NullIndexedAnimationFactory* NullIndexedAnimationFactory_new(void) {
    NullIndexedAnimationFactory* this = java_object_alloc(sizeof(NullIndexedAnimationFactory), "NullIndexedAnimationFactory");
    NullIndexedAnimationFactory_init(this);
    return this;
}


NullIndexedAnimationFactory* NullIndexedAnimationFactory_getFactoryInstance(void) {
        return (NullIndexedAnimationFactory_staticInit(), NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_FACTORY);
}


// throws Exception
Animation* NullIndexedAnimationFactory_getInstance(NullIndexedAnimationFactory* this, int32_t instanceId) {
        return this->NULL_ANIMATION;
}


// throws Exception
Animation* NullIndexedAnimationFactory_getInstanceAnimation(NullIndexedAnimationFactory* this, Animation* animationInterface) {
        return this->NULL_ANIMATION;
}


void NullIndexedAnimationFactory_setInitialScale(NullIndexedAnimationFactory* this, ScaleProperties* scaleProperties) {
}

