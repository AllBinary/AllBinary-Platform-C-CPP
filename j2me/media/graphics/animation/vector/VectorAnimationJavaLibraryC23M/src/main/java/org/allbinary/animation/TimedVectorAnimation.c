// Generated Code Do Not Modify
#include "org/allbinary/animation/TimedVectorAnimation.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/time/GameTickTimeDelayHelperFactory.h"
#include "org/allbinary/time/TimeDelayHelper.h"
#include "org/allbinary/animation/VectorAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/animation/GameTickTimeDelayHelper.h")
#include "org/allbinary/animation/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/graphics/color/GameTickTimeDelayHelper.h")
#include "org/allbinary/graphics/color/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif
#if __has_include("org/allbinary/time/GameTickTimeDelayHelper.h")
#include "org/allbinary/time/GameTickTimeDelayHelper.h"
#endif





void TimedVectorAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void TimedVectorAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("TimedVectorAnimation", "VectorAnimation");
    java_register_method("TimedVectorAnimation", "nextFrame", (void*) TimedVectorAnimation_nextFrame);
}

static void TimedVectorAnimation_initFields(TimedVectorAnimation* this) {
    this->timeElapsedHelper = TimeDelayHelper_new(200);
}


void TimedVectorAnimation_init(TimedVectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    TimedVectorAnimation_register();
        VectorAnimation_init(&this->base, currentPoints, basicColor, animationBehavior);
        TimedVectorAnimation_initFields(this);
}

TimedVectorAnimation* TimedVectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    TimedVectorAnimation* this = java_object_alloc(sizeof(TimedVectorAnimation), "TimedVectorAnimation");
    TimedVectorAnimation_init(this, currentPoints, basicColor, animationBehavior);
    return this;
}


void TimedVectorAnimation_nextFrame(TimedVectorAnimation* this) {
        if (TimeDelayHelper_isTime(this->timeElapsedHelper, GameTickTimeDelayHelperFactory_getInstance()->startTime)) {
            VectorAnimation_nextFrame((&this->base));
        }
}

