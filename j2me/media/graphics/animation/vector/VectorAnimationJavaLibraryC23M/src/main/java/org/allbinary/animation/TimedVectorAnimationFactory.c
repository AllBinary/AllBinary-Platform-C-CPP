// Generated Code Do Not Modify
#include "org/allbinary/animation/TimedVectorAnimationFactory.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/animation/VectorAnimationFactoryInterface.h"
#include "org/allbinary/animation/TimedVectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/VectorAnimation.h"




void TimedVectorAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TimedVectorAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimedVectorAnimationFactory", nullptr);
    java_register_method("TimedVectorAnimationFactory", "getInstance", (void*) TimedVectorAnimationFactory_getInstance);
}

void TimedVectorAnimationFactory_init(TimedVectorAnimationFactory* this) {
    TimedVectorAnimationFactory_register();
}

TimedVectorAnimationFactory* TimedVectorAnimationFactory_new(void) {
    TimedVectorAnimationFactory* this = java_object_alloc(sizeof(TimedVectorAnimationFactory), "TimedVectorAnimationFactory");
    TimedVectorAnimationFactory_init(this);
    return this;
}


VectorAnimation* TimedVectorAnimationFactory_getInstance(TimedVectorAnimationFactory* this, int32_t*** points, BasicColor* basicColor) {
        return TimedVectorAnimation_new(points, basicColor, AnimationBehavior_getInstance());
}

