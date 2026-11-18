// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/AutoCompoundRotationAnimation.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterface.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif
#if __has_include("org/allbinary/animation/RotationAnimation.h")
#include "org/allbinary/animation/RotationAnimation.h"
#endif




























void AutoCompoundRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AutoCompoundRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AutoCompoundRotationAnimation", "RotationAnimation");
    java_register_method("AutoCompoundRotationAnimation", "setFrame", (void*) AutoCompoundRotationAnimation_setFrame);
    java_register_method("AutoCompoundRotationAnimation", "getFrame", (void*) AutoCompoundRotationAnimation_getFrame);
    java_register_method("AutoCompoundRotationAnimation", "getAnimationSize", (void*) AutoCompoundRotationAnimation_getAnimationSize);
    java_register_method("AutoCompoundRotationAnimation", "getSize", (void*) AutoCompoundRotationAnimation_getSize);
    java_register_method("AutoCompoundRotationAnimation", "previousFrame", (void*) AutoCompoundRotationAnimation_previousFrame);
    java_register_method("AutoCompoundRotationAnimation", "nextFrame", (void*) AutoCompoundRotationAnimation_nextFrame);
    java_register_method("AutoCompoundRotationAnimation", "previousRotation", (void*) AutoCompoundRotationAnimation_previousRotation);
    java_register_method("AutoCompoundRotationAnimation", "nextRotation", (void*) AutoCompoundRotationAnimation_nextRotation);
    java_register_method("AutoCompoundRotationAnimation", "setSequence", (void*) AutoCompoundRotationAnimation_setSequence);
    java_register_method("AutoCompoundRotationAnimation", "getSequence", (void*) AutoCompoundRotationAnimation_getSequence);
    java_register_method("AutoCompoundRotationAnimation", "paintXY", (void*) AutoCompoundRotationAnimation_paintXY);
    java_register_method("AutoCompoundRotationAnimation", "paintThreedXYZ", (void*) AutoCompoundRotationAnimation_paintThreedXYZ);
    java_register_method("AutoCompoundRotationAnimation", "getCurrentAnimation", (void*) AutoCompoundRotationAnimation_getCurrentAnimation);
    java_register_method("AutoCompoundRotationAnimation", "nextAnimation", (void*) AutoCompoundRotationAnimation_nextAnimation);
    java_register_method("AutoCompoundRotationAnimation", "previousAnimation", (void*) AutoCompoundRotationAnimation_previousAnimation);
    java_register_method("AutoCompoundRotationAnimation", "setAnimation", (void*) AutoCompoundRotationAnimation_setAnimation);
    java_register_method("AutoCompoundRotationAnimation", "setFrameByDirection", (void*) AutoCompoundRotationAnimation_setFrameByDirection);
    java_register_method("AutoCompoundRotationAnimation", "setFrameToAngle", (void*) AutoCompoundRotationAnimation_setFrameToAngle);
    java_register_method("AutoCompoundRotationAnimation", "adjustFrameToAngle", (void*) AutoCompoundRotationAnimation_adjustFrameToAngle);
    java_register_method("AutoCompoundRotationAnimation", "adjustFrame", (void*) AutoCompoundRotationAnimation_adjustFrame);
    java_register_method("AutoCompoundRotationAnimation", "getAngleInfoP", (void*) AutoCompoundRotationAnimation_getAngleInfoP);
    java_register_method("AutoCompoundRotationAnimation", "getAnimationInterfaceArray", (void*) AutoCompoundRotationAnimation_getAnimationInterfaceArray);
    java_register_method("AutoCompoundRotationAnimation", "setAnimationInterfaceArray", (void*) AutoCompoundRotationAnimation_setAnimationInterfaceArray);
    java_register_method("AutoCompoundRotationAnimation", "set", (void*) AutoCompoundRotationAnimation_set);
}

static void AutoCompoundRotationAnimation_initFields(AutoCompoundRotationAnimation* this) {
    
}


void AutoCompoundRotationAnimation_init(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    AutoCompoundRotationAnimation_register();
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        AutoCompoundRotationAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
}

AutoCompoundRotationAnimation* AutoCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    AutoCompoundRotationAnimation* this = java_object_alloc(sizeof(AutoCompoundRotationAnimation), "AutoCompoundRotationAnimation");
    AutoCompoundRotationAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void AutoCompoundRotationAnimation_setFrame(AutoCompoundRotationAnimation* this, int32_t index) {
        RotationAnimation_setFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], index);
}


int32_t AutoCompoundRotationAnimation_getFrame(AutoCompoundRotationAnimation* this) {
        return RotationAnimation_getFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


// throws Exception
int32_t AutoCompoundRotationAnimation_getAnimationSize(AutoCompoundRotationAnimation* this) {
        return IndexedAnimation_getAnimationSize(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


int32_t AutoCompoundRotationAnimation_getSize(AutoCompoundRotationAnimation* this) {
        return RotationAnimation_getSize(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void AutoCompoundRotationAnimation_previousFrame(AutoCompoundRotationAnimation* this) {
        CircularIndexUtil_previous(this->base.circularIndexUtil);
        IndexedAnimation_previousFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


// throws Exception
void AutoCompoundRotationAnimation_nextFrame(AutoCompoundRotationAnimation* this) {
        CircularIndexUtil_next(this->base.circularIndexUtil);
        Animation_nextFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void AutoCompoundRotationAnimation_previousRotation(AutoCompoundRotationAnimation* this) {
        RotationAnimation_previousRotation(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void AutoCompoundRotationAnimation_nextRotation(AutoCompoundRotationAnimation* this) {
        RotationAnimation_nextRotation(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void AutoCompoundRotationAnimation_setSequence(AutoCompoundRotationAnimation* this, int32_t* sequence) {
}


int32_t* AutoCompoundRotationAnimation_getSequence(AutoCompoundRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void AutoCompoundRotationAnimation_paintXY(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], graphics, x, y);
}


void AutoCompoundRotationAnimation_paintThreedXYZ(AutoCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], graphics, x, y, z);
}


IndexedAnimation* AutoCompoundRotationAnimation_getCurrentAnimation(AutoCompoundRotationAnimation* this) {
        return this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)];
}


void AutoCompoundRotationAnimation_nextAnimation(AutoCompoundRotationAnimation* this) {
        int32_t frame = AutoCompoundRotationAnimation_getFrame(this);
        CircularIndexUtil_next(this->base.circularIndexUtil);
        AutoCompoundRotationAnimation_setFrame(this, frame);
}


void AutoCompoundRotationAnimation_previousAnimation(AutoCompoundRotationAnimation* this) {
        int32_t frame = AutoCompoundRotationAnimation_getFrame(this);
        CircularIndexUtil_previous(this->base.circularIndexUtil);
        AutoCompoundRotationAnimation_setFrame(this, frame);
}


void AutoCompoundRotationAnimation_setAnimation(AutoCompoundRotationAnimation* this, int32_t index) {
        int32_t frame = AutoCompoundRotationAnimation_getFrame(this);
        CircularIndexUtil_setIndex(this->base.circularIndexUtil, index);
        AutoCompoundRotationAnimation_setFrame(this, frame);
}


void AutoCompoundRotationAnimation_setFrameByDirection(AutoCompoundRotationAnimation* this, Direction* direction) {
        RotationAnimation_setFrameByDirection(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], direction);
}


void AutoCompoundRotationAnimation_setFrameToAngle(AutoCompoundRotationAnimation* this, Angle* angle) {
        RotationAnimation_setFrameToAngle(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], angle);
}


void AutoCompoundRotationAnimation_adjustFrameToAngle(AutoCompoundRotationAnimation* this, Angle* newAngle) {
        AutoCompoundRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}


void AutoCompoundRotationAnimation_adjustFrame(AutoCompoundRotationAnimation* this, int16_t angle) {
        RotationAnimation_adjustFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], angle);
}


AngleInfo* AutoCompoundRotationAnimation_getAngleInfoP(AutoCompoundRotationAnimation* this) {
        return RotationAnimation_getAngleInfoP(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


RotationAnimation** AutoCompoundRotationAnimation_getAnimationInterfaceArray(AutoCompoundRotationAnimation* this) {
        return this->animationInterfaceArray;
}


void AutoCompoundRotationAnimation_setAnimationInterfaceArray(AutoCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void AutoCompoundRotationAnimation_set(AutoCompoundRotationAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_set(this->animationInterfaceArray[index], gl);
        }
}

