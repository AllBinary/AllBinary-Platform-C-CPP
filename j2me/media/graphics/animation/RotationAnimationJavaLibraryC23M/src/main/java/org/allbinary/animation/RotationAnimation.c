// Generated Code Do Not Modify
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/direction/DirectionUtil.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/math/FrameUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/RotationAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/direction/AngleIncrementInfo.h")
#include "org/allbinary/direction/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/direction/AngleIncrementInfo.h")
#include "org/allbinary/direction/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/AngleIncrementInfo.h")
#include "org/allbinary/logic/string/AngleIncrementInfo.h"
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
#if __has_include("org/allbinary/util/AngleIncrementInfo.h")
#include "org/allbinary/util/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif
#if __has_include("org/allbinary/logic/string/StringMaker.h")
#include "org/allbinary/logic/string/StringMaker.h"
#endif



















void RotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RotationAnimation", "IndexedAnimation");
    java_register_method("RotationAnimation", "nextRotationX", (void*) RotationAnimation_nextRotationX);
    java_register_method("RotationAnimation", "previousRotationX", (void*) RotationAnimation_previousRotationX);
    java_register_method("RotationAnimation", "nextRotation", (void*) RotationAnimation_nextRotation);
    java_register_method("RotationAnimation", "previousRotation", (void*) RotationAnimation_previousRotation);
    java_register_method("RotationAnimation", "nextRotationZ", (void*) RotationAnimation_nextRotationZ);
    java_register_method("RotationAnimation", "previousRotationZ", (void*) RotationAnimation_previousRotationZ);
    java_register_method("RotationAnimation", "setFrame", (void*) RotationAnimation_setFrame);
    java_register_method("RotationAnimation", "setFrameByDirection", (void*) RotationAnimation_setFrameByDirection);
    java_register_method("RotationAnimation", "setFrameToAngle", (void*) RotationAnimation_setFrameToAngle);
    java_register_method("RotationAnimation", "adjustFrameToAngle", (void*) RotationAnimation_adjustFrameToAngle);
    java_register_method("RotationAnimation", "adjustFrame", (void*) RotationAnimation_adjustFrame);
    java_register_method("RotationAnimation", "getFrame", (void*) RotationAnimation_getFrame);
    java_register_method("RotationAnimation", "getSize", (void*) RotationAnimation_getSize);
    java_register_method("RotationAnimation", "getAngleInfoP", (void*) RotationAnimation_getAngleInfoP);
    java_register_method("RotationAnimation", "toString", (void*) RotationAnimation_toString);
}

static void RotationAnimation_initFields(RotationAnimation* this) {
    this->frameUtil = FrameUtil_getInstance();
    this->directionUtil = DirectionUtil_getInstance();
    
    
}


void RotationAnimation_init(RotationAnimation* this, AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
    RotationAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        RotationAnimation_initFields(this);
        this->angleInfo = angleInfo;
        this->circularIndexUtil = circularIndexUtil;
}

RotationAnimation* RotationAnimation_new(AngleInfo* angleInfo, CircularIndexUtil* circularIndexUtil, AnimationBehavior* animationBehavior) {
    RotationAnimation* this = java_object_alloc(sizeof(RotationAnimation), "RotationAnimation");
    RotationAnimation_init(this, angleInfo, circularIndexUtil, animationBehavior);
    return this;
}


void RotationAnimation_nextRotationX(RotationAnimation* this) {
}


void RotationAnimation_previousRotationX(RotationAnimation* this) {
}


void RotationAnimation_nextRotation(RotationAnimation* this) {
        AngleInfo_adjustAngle(this->angleInfo, CircularIndexUtil_next(this->circularIndexUtil));
}


void RotationAnimation_previousRotation(RotationAnimation* this) {
        AngleInfo_adjustAngle(this->angleInfo, CircularIndexUtil_previous(this->circularIndexUtil));
}


void RotationAnimation_nextRotationZ(RotationAnimation* this) {
}


void RotationAnimation_previousRotationZ(RotationAnimation* this) {
}


void RotationAnimation_setFrame(RotationAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
        int32_t newFrame = CircularIndexUtil_getIndex(this->circularIndexUtil);
        AngleInfo_adjustAngle(this->angleInfo, newFrame);
}


void RotationAnimation_setFrameByDirection(RotationAnimation* this, Direction* direction) {
        Angle* angle = DirectionUtil_getFrameAngle(this->directionUtil, direction);
        RotationAnimation_adjustFrameToAngle(this, angle);
}


void RotationAnimation_setFrameToAngle(RotationAnimation* this, Angle* angle) {
        RotationAnimation_adjustFrameToAngle(this, angle);
}


void RotationAnimation_adjustFrameToAngle(RotationAnimation* this, Angle* angle) {
        RotationAnimation_adjustFrame(this, Angle_getValue(angle));
}


void RotationAnimation_adjustFrame(RotationAnimation* this, int16_t angle) {
        RotationAnimation_setFrame(this, FrameUtil_getFrameForAngle(this->frameUtil, angle, ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(this->angleInfo)))));
}


int32_t RotationAnimation_getFrame(RotationAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


int32_t RotationAnimation_getSize(RotationAnimation* this) {
        return CircularIndexUtil_getSize(this->circularIndexUtil);
}


AngleInfo* RotationAnimation_getAngleInfoP(RotationAnimation* this) {
        return this->angleInfo;
}


const char* RotationAnimation_toString(RotationAnimation* this) {
        return java_string_of(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_append(StringMaker_new(), java_object_toString((&this->base))), "circularIndexUtil: "), java_string_of(this->circularIndexUtil)), "angleInfo: "), java_string_of(this->angleInfo)));
}

