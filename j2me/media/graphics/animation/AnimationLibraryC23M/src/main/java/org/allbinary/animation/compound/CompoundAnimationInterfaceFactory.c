// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/NullAnimationFactory.h")
#include "org/allbinary/animation/NullAnimationFactory.h"
#endif
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif









void CompoundAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompoundAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompoundAnimationInterfaceFactory", nullptr);
    java_register_method("CompoundAnimationInterfaceFactory", "getInstance", (void*) CompoundAnimationInterfaceFactory_getInstance);
    java_register_method("CompoundAnimationInterfaceFactory", "createArray", (void*) CompoundAnimationInterfaceFactory_createArray);
    java_register_method("CompoundAnimationInterfaceFactory", "createAnimation", (void*) CompoundAnimationInterfaceFactory_createAnimation);
    java_register_method("CompoundAnimationInterfaceFactory", "getBasicAnimationInterfaceFactoryInterfaceArray", (void*) CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray);
    java_register_method("CompoundAnimationInterfaceFactory", "setInitialScale", (void*) CompoundAnimationInterfaceFactory_setInitialScale);
}

static void CompoundAnimationInterfaceFactory_initFields(CompoundAnimationInterfaceFactory* this) {
    
    
}


void CompoundAnimationInterfaceFactory_init(CompoundAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundAnimationInterfaceFactory_register();
    CompoundAnimationInterfaceFactory_initFields(this);
        this->basicAnimationInterfaceFactoryInterfaceArrayP = basicAnimationInterfaceFactoryInterfaceArray;
        this->animationBehaviorFactory = animationBehaviorFactory;
}

CompoundAnimationInterfaceFactory* CompoundAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundAnimationInterfaceFactory* this = java_object_alloc(sizeof(CompoundAnimationInterfaceFactory), "CompoundAnimationInterfaceFactory");
    CompoundAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* CompoundAnimationInterfaceFactory_getInstance(CompoundAnimationInterfaceFactory* this, int32_t instanceId) {
        int32_t size = java_array_length(this->basicAnimationInterfaceFactoryInterfaceArrayP);
        Animation** animationInterfaceArray = CompoundAnimationInterfaceFactory_createArray(this, size);
        for (int32_t index = 0; index < size; index++) {
            animationInterfaceArray[index] = AnimationInterfaceFactoryInterface_getInstance(this->basicAnimationInterfaceFactoryInterfaceArrayP[index], instanceId);
        }
        return CompoundAnimationInterfaceFactory_createAnimation(this, animationInterfaceArray);
}


Animation** CompoundAnimationInterfaceFactory_createArray(CompoundAnimationInterfaceFactory* this, int32_t size) {
        return NullAnimationFactory_getFactoryInstance()->EMPTY_ARRAY;
}


Animation* CompoundAnimationInterfaceFactory_createAnimation(CompoundAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return NullAnimationFactory_getInstance(NullAnimationFactory_getFactoryInstance(), 0);
}


AnimationInterfaceFactoryInterface** CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(CompoundAnimationInterfaceFactory* this) {
        return this->basicAnimationInterfaceFactoryInterfaceArrayP;
}


void CompoundAnimationInterfaceFactory_setInitialScale(CompoundAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
        int32_t size = java_array_length(this->basicAnimationInterfaceFactoryInterfaceArrayP);
        for (int32_t index = 0; index < size; index++) {
            AnimationInterfaceFactoryInterface_setInitialScale(this->basicAnimationInterfaceFactoryInterfaceArrayP[index], scaleProperties);
        }
}

