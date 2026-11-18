// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimationInterfaceFactory.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/compound/SimultaneousCompoundIndexAnimation.h"
#if __has_include("org/allbinary/animation/AnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#endif








void SimultaneousCompoundIndexAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimultaneousCompoundIndexAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimultaneousCompoundIndexAnimationInterfaceFactory", nullptr);
    java_register_method("SimultaneousCompoundIndexAnimationInterfaceFactory", "getInstance", (void*) SimultaneousCompoundIndexAnimationInterfaceFactory_getInstance);
    java_register_method("SimultaneousCompoundIndexAnimationInterfaceFactory", "getOrCreate", (void*) SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate);
    java_register_method("SimultaneousCompoundIndexAnimationInterfaceFactory", "getBasicAnimationInterfaceFactoryInterfaceArray", (void*) SimultaneousCompoundIndexAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray);
    java_register_method("SimultaneousCompoundIndexAnimationInterfaceFactory", "setInitialScale", (void*) SimultaneousCompoundIndexAnimationInterfaceFactory_setInitialScale);
}

static void SimultaneousCompoundIndexAnimationInterfaceFactory_initFields(SimultaneousCompoundIndexAnimationInterfaceFactory* this) {
    
    
}


void SimultaneousCompoundIndexAnimationInterfaceFactory_init(SimultaneousCompoundIndexAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexAnimationInterfaceFactory_register();
    SimultaneousCompoundIndexAnimationInterfaceFactory_initFields(this);
        this->basicAnimationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
        this->animationBehaviorFactory = animationBehaviorFactory;
}

SimultaneousCompoundIndexAnimationInterfaceFactory* SimultaneousCompoundIndexAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexAnimationInterfaceFactory* this = java_object_alloc(sizeof(SimultaneousCompoundIndexAnimationInterfaceFactory), "SimultaneousCompoundIndexAnimationInterfaceFactory");
    SimultaneousCompoundIndexAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getInstance(SimultaneousCompoundIndexAnimationInterfaceFactory* this, int32_t instanceId) {
        int32_t size = java_array_length(this->basicAnimationInterfaceFactoryInterfaceArray);
        IndexedAnimation** animationInterfaceArray = ((IndexedAnimation**) java_array_new(sizeof(IndexedAnimation*), size));
        for (int32_t index = 0; index < size; index++) {
            animationInterfaceArray[index] = ((IndexedAnimation*) AnimationInterfaceFactoryInterface_getInstance(this->basicAnimationInterfaceFactoryInterfaceArray[index], instanceId));
        }
        return SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate(this, animationInterfaceArray);
}


Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate(SimultaneousCompoundIndexAnimationInterfaceFactory* this, IndexedAnimation** animationInterfaceArray) {
        return SimultaneousCompoundIndexAnimation_new(animationInterfaceArray, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


AnimationInterfaceFactoryInterface** SimultaneousCompoundIndexAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(SimultaneousCompoundIndexAnimationInterfaceFactory* this) {
        return this->basicAnimationInterfaceFactoryInterfaceArray;
}


void SimultaneousCompoundIndexAnimationInterfaceFactory_setInitialScale(SimultaneousCompoundIndexAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

