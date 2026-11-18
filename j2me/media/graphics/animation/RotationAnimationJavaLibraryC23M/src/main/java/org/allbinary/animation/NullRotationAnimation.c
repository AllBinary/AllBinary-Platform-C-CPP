// Generated Code Do Not Modify
#include "org/allbinary/animation/NullRotationAnimation.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleIncrementInfo.h")
#include "org/allbinary/util/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif







void NullRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void NullRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("NullRotationAnimation", "RotationAnimation");
    java_register_method("NullRotationAnimation", "getAnimationSize", (void*) NullRotationAnimation_getAnimationSize);
}


NullRotationAnimation* NullRotationAnimation_createTotalAngle(AngleInfo* angleInfo, int16_t totalAngle, AnimationBehavior* animationBehavior) {
        return NullRotationAnimation_new(angleInfo, CircularIndexUtil_createInstance(totalAngle / AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(angleInfo))), animationBehavior);
}


NullRotationAnimation* NullRotationAnimation_createQuarter(AnimationBehavior* animationBehavior) {
        return NullRotationAnimation_new(AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
}


void NullRotationAnimation_init(NullRotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
    NullRotationAnimation_register();
        RotationAnimation_init(&this->base, angleInfo, circularIndexUtil, animationBehavior);
}

NullRotationAnimation* NullRotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
    NullRotationAnimation* this = java_object_alloc(sizeof(NullRotationAnimation), "NullRotationAnimation");
    NullRotationAnimation_init(this, angleInfo, circularIndexUtil, animationBehavior);
    return this;
}


// throws Exception
int32_t NullRotationAnimation_getAnimationSize(NullRotationAnimation* this) {
        return 0;
}

