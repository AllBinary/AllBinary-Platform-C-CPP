// Generated Code Do Not Modify
#include "org/allbinary/animation/AnimationInterfaceFactoryInterfaceComposite.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/animation/Animation.h"







void AnimationInterfaceFactoryInterfaceComposite_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AnimationInterfaceFactoryInterfaceComposite_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationInterfaceFactoryInterfaceComposite", nullptr);
    java_register_method("AnimationInterfaceFactoryInterfaceComposite", "getInstance", (void*) AnimationInterfaceFactoryInterfaceComposite_getInstance);
    java_register_method("AnimationInterfaceFactoryInterfaceComposite", "getAnimationInterfaceFactoryInterfaceArray", (void*) AnimationInterfaceFactoryInterfaceComposite_getAnimationInterfaceFactoryInterfaceArray);
    java_register_method("AnimationInterfaceFactoryInterfaceComposite", "setInitialScale", (void*) AnimationInterfaceFactoryInterfaceComposite_setInitialScale);
}

static void AnimationInterfaceFactoryInterfaceComposite_initFields(AnimationInterfaceFactoryInterfaceComposite* this) {
    
}


void AnimationInterfaceFactoryInterfaceComposite_init(AnimationInterfaceFactoryInterfaceComposite* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    AnimationInterfaceFactoryInterfaceComposite_register();
    AnimationInterfaceFactoryInterfaceComposite_initFields(this);
        this->animationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
}

AnimationInterfaceFactoryInterfaceComposite* AnimationInterfaceFactoryInterfaceComposite_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    AnimationInterfaceFactoryInterfaceComposite* this = java_object_alloc(sizeof(AnimationInterfaceFactoryInterfaceComposite), "AnimationInterfaceFactoryInterfaceComposite");
    AnimationInterfaceFactoryInterfaceComposite_init(this, basicAnimationInterfaceFactoryInterfaceArray);
    return this;
}


// throws Exception
Animation* AnimationInterfaceFactoryInterfaceComposite_getInstance(AnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId) {
        return NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
}


AnimationInterfaceFactoryInterface** AnimationInterfaceFactoryInterfaceComposite_getAnimationInterfaceFactoryInterfaceArray(AnimationInterfaceFactoryInterfaceComposite* this) {
        return this->animationInterfaceFactoryInterfaceArray;
}


void AnimationInterfaceFactoryInterfaceComposite_setInitialScale(AnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties) {
}

