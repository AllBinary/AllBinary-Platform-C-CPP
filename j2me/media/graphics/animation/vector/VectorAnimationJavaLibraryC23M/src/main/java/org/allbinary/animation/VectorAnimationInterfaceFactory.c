// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorAnimationInterfaceFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/Animation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif








void VectorAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorAnimationInterfaceFactory", nullptr);
    java_register_method("VectorAnimationInterfaceFactory", "getInstance", (void*) VectorAnimationInterfaceFactory_getInstance);
    java_register_method("VectorAnimationInterfaceFactory", "setBasicColorP", (void*) VectorAnimationInterfaceFactory_setBasicColorP);
    java_register_method("VectorAnimationInterfaceFactory", "getBasicColorP", (void*) VectorAnimationInterfaceFactory_getBasicColorP);
    java_register_method("VectorAnimationInterfaceFactory", "setInitialScale", (void*) VectorAnimationInterfaceFactory_setInitialScale);
}

static void VectorAnimationInterfaceFactory_initFields(VectorAnimationInterfaceFactory* this) {
    
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void VectorAnimationInterfaceFactory_init(VectorAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorAnimationInterfaceFactory_register();
    VectorAnimationInterfaceFactory_initFields(this);
        this->currentPoints = currentPoints;
        VectorAnimationInterfaceFactory_setBasicColorP(this, basicColor);
        this->animationBehaviorFactory = animationBehaviorFactory;
}

VectorAnimationInterfaceFactory* VectorAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorAnimationInterfaceFactory* this = java_object_alloc(sizeof(VectorAnimationInterfaceFactory), "VectorAnimationInterfaceFactory");
    VectorAnimationInterfaceFactory_init(this, currentPoints, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* VectorAnimationInterfaceFactory_getInstance(VectorAnimationInterfaceFactory* this, int32_t instanceId) {
        return VectorAnimation_new(this->currentPoints, VectorAnimationInterfaceFactory_getBasicColorP(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void VectorAnimationInterfaceFactory_setBasicColorP(VectorAnimationInterfaceFactory* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* VectorAnimationInterfaceFactory_getBasicColorP(VectorAnimationInterfaceFactory* this) {
        return this->basicColor;
}


void VectorAnimationInterfaceFactory_setInitialScale(VectorAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

