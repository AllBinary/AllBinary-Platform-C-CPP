// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"




void VectorAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorAnimationFactory", nullptr);
    java_register_method("VectorAnimationFactory", "getInstance", (void*) VectorAnimationFactory_getInstance);
}

void VectorAnimationFactory_init(VectorAnimationFactory* this) {
    VectorAnimationFactory_register();
}

VectorAnimationFactory* VectorAnimationFactory_new(void) {
    VectorAnimationFactory* this = java_object_alloc(sizeof(VectorAnimationFactory), "VectorAnimationFactory");
    VectorAnimationFactory_init(this);
    return this;
}


VectorAnimation* VectorAnimationFactory_getInstance(VectorAnimationFactory* this, int32_t*** points, BasicColor* basicColor) {
        return VectorAnimation_new(points, basicColor, AnimationBehavior_getInstance());
}

