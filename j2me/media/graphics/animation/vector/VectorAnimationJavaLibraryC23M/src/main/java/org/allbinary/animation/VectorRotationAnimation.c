// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorRotationAnimation.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/VectorBaseRotationAnimation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/direction/AngleIncrementInfo.h")
#include "org/allbinary/direction/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/graphics/color/AngleIncrementInfo.h")
#include "org/allbinary/graphics/color/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif









void VectorRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorRotationAnimation", "VectorBaseRotationAnimation");
    java_register_method("VectorRotationAnimation", "setFrameByDirection", (void*) VectorRotationAnimation_setFrameByDirection);
    java_register_method("VectorRotationAnimation", "setFrameToAngle", (void*) VectorRotationAnimation_setFrameToAngle);
    java_register_method("VectorRotationAnimation", "setFrame", (void*) VectorRotationAnimation_setFrame);
    java_register_method("VectorRotationAnimation", "adjustFrame", (void*) VectorRotationAnimation_adjustFrame);
    java_register_method("VectorRotationAnimation", "adjustFrameToAngle", (void*) VectorRotationAnimation_adjustFrameToAngle);
}


void VectorRotationAnimation_init(VectorRotationAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorRotationAnimation_register();
        VectorBaseRotationAnimation_init(&this->base, AngleInfo_getInstance(((int16_t) (((int32_t) AngleFactory_getInstance()->TOTAL_ANGLE) / java_array_length(currentPoints)))), currentPoints, basicColor, animationBehavior);
        AngleInfo_adjustAngle(this->base.base.angleInfo, VectorBaseRotationAnimation_getFrame(this));
}

VectorRotationAnimation* VectorRotationAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorRotationAnimation* this = java_object_alloc(sizeof(VectorRotationAnimation), "VectorRotationAnimation");
    VectorRotationAnimation_init(this, currentPoints, basicColor, animationBehavior);
    return this;
}


void VectorRotationAnimation_setFrameByDirection(VectorRotationAnimation* this, Direction* direction) {
        Angle* angle = DirectionUtil_getFrameAngle(this->base.base.directionUtil, direction);
        VectorRotationAnimation_adjustFrameToAngle(this, angle);
}


void VectorRotationAnimation_setFrameToAngle(VectorRotationAnimation* this, Angle* angle) {
        VectorRotationAnimation_adjustFrameToAngle(this, angle);
}


void VectorRotationAnimation_setFrame(VectorRotationAnimation* this, int32_t index) {
        VectorBaseRotationAnimation_setFrame((&this->base), index);
        AngleInfo_adjustAngle(this->base.base.angleInfo, VectorBaseRotationAnimation_getFrame(this));
}


void VectorRotationAnimation_adjustFrame(VectorRotationAnimation* this, int16_t newAngle) {
        VectorRotationAnimation_setFrame(this, FrameUtil_getFrameForAngle(this->base.base.frameUtil, newAngle, ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(this->base.base.angleInfo)))));
}


void VectorRotationAnimation_adjustFrameToAngle(VectorRotationAnimation* this, Angle* newAngle) {
        VectorRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}

