// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorRotationAnimationInterfaceFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/VectorRotationAnimation.h"
#include "org/allbinary/animation/Animation.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColorFactory.h")
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#endif








void VectorRotationAnimationInterfaceFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorRotationAnimationInterfaceFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorRotationAnimationInterfaceFactory", nullptr);
    java_register_method("VectorRotationAnimationInterfaceFactory", "getInstance", (void*) VectorRotationAnimationInterfaceFactory_getInstance);
    java_register_method("VectorRotationAnimationInterfaceFactory", "setBasicColorP", (void*) VectorRotationAnimationInterfaceFactory_setBasicColorP);
    java_register_method("VectorRotationAnimationInterfaceFactory", "getBasicColorP", (void*) VectorRotationAnimationInterfaceFactory_getBasicColorP);
    java_register_method("VectorRotationAnimationInterfaceFactory", "setInitialScale", (void*) VectorRotationAnimationInterfaceFactory_setInitialScale);
}

static void VectorRotationAnimationInterfaceFactory_initFields(VectorRotationAnimationInterfaceFactory* this) {
    this->currentPoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void VectorRotationAnimationInterfaceFactory_init(VectorRotationAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorRotationAnimationInterfaceFactory_register();
    VectorRotationAnimationInterfaceFactory_initFields(this);
        this->currentPoints = currentPoints;
        VectorRotationAnimationInterfaceFactory_setBasicColorP(this, basicColor);
        this->animationBehaviorFactory = animationBehaviorFactory;
}

VectorRotationAnimationInterfaceFactory* VectorRotationAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorRotationAnimationInterfaceFactory* this = java_object_alloc(sizeof(VectorRotationAnimationInterfaceFactory), "VectorRotationAnimationInterfaceFactory");
    VectorRotationAnimationInterfaceFactory_init(this, currentPoints, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* VectorRotationAnimationInterfaceFactory_getInstance(VectorRotationAnimationInterfaceFactory* this, int32_t instanceId) {
        return VectorRotationAnimation_new(this->currentPoints, VectorRotationAnimationInterfaceFactory_getBasicColorP(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void VectorRotationAnimationInterfaceFactory_setBasicColorP(VectorRotationAnimationInterfaceFactory* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* VectorRotationAnimationInterfaceFactory_getBasicColorP(VectorRotationAnimationInterfaceFactory* this) {
        return this->basicColor;
}


void VectorRotationAnimationInterfaceFactory_setInitialScale(VectorRotationAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

