// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/CompoundRotationAnimation.h"
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




























void CompoundRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void CompoundRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("CompoundRotationAnimation", "RotationAnimation");
    java_register_method("CompoundRotationAnimation", "setFrame", (void*) CompoundRotationAnimation_setFrame);
    java_register_method("CompoundRotationAnimation", "getFrame", (void*) CompoundRotationAnimation_getFrame);
    java_register_method("CompoundRotationAnimation", "getAnimationSize", (void*) CompoundRotationAnimation_getAnimationSize);
    java_register_method("CompoundRotationAnimation", "getSize", (void*) CompoundRotationAnimation_getSize);
    java_register_method("CompoundRotationAnimation", "previousFrame", (void*) CompoundRotationAnimation_previousFrame);
    java_register_method("CompoundRotationAnimation", "nextFrame", (void*) CompoundRotationAnimation_nextFrame);
    java_register_method("CompoundRotationAnimation", "previousRotation", (void*) CompoundRotationAnimation_previousRotation);
    java_register_method("CompoundRotationAnimation", "nextRotation", (void*) CompoundRotationAnimation_nextRotation);
    java_register_method("CompoundRotationAnimation", "setSequence", (void*) CompoundRotationAnimation_setSequence);
    java_register_method("CompoundRotationAnimation", "getSequence", (void*) CompoundRotationAnimation_getSequence);
    java_register_method("CompoundRotationAnimation", "paintXY", (void*) CompoundRotationAnimation_paintXY);
    java_register_method("CompoundRotationAnimation", "paintThreedXYZ", (void*) CompoundRotationAnimation_paintThreedXYZ);
    java_register_method("CompoundRotationAnimation", "getCurrentAnimation", (void*) CompoundRotationAnimation_getCurrentAnimation);
    java_register_method("CompoundRotationAnimation", "nextAnimation", (void*) CompoundRotationAnimation_nextAnimation);
    java_register_method("CompoundRotationAnimation", "previousAnimation", (void*) CompoundRotationAnimation_previousAnimation);
    java_register_method("CompoundRotationAnimation", "setAnimation", (void*) CompoundRotationAnimation_setAnimation);
    java_register_method("CompoundRotationAnimation", "setFrameByDirection", (void*) CompoundRotationAnimation_setFrameByDirection);
    java_register_method("CompoundRotationAnimation", "setFrameToAngle", (void*) CompoundRotationAnimation_setFrameToAngle);
    java_register_method("CompoundRotationAnimation", "adjustFrameToAngle", (void*) CompoundRotationAnimation_adjustFrameToAngle);
    java_register_method("CompoundRotationAnimation", "adjustFrame", (void*) CompoundRotationAnimation_adjustFrame);
    java_register_method("CompoundRotationAnimation", "getAngleInfoP", (void*) CompoundRotationAnimation_getAngleInfoP);
    java_register_method("CompoundRotationAnimation", "getAnimationInterfaceArray", (void*) CompoundRotationAnimation_getAnimationInterfaceArray);
    java_register_method("CompoundRotationAnimation", "setAnimationInterfaceArray", (void*) CompoundRotationAnimation_setAnimationInterfaceArray);
    java_register_method("CompoundRotationAnimation", "set", (void*) CompoundRotationAnimation_set);
}

static void CompoundRotationAnimation_initFields(CompoundRotationAnimation* this) {
    
}


void CompoundRotationAnimation_init(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    CompoundRotationAnimation_register();
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        CompoundRotationAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->animationInterfaceArray));
}

CompoundRotationAnimation* CompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    CompoundRotationAnimation* this = java_object_alloc(sizeof(CompoundRotationAnimation), "CompoundRotationAnimation");
    CompoundRotationAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void CompoundRotationAnimation_setFrame(CompoundRotationAnimation* this, int32_t index) {
        RotationAnimation_setFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], index);
}


int32_t CompoundRotationAnimation_getFrame(CompoundRotationAnimation* this) {
        return RotationAnimation_getFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


// throws Exception
int32_t CompoundRotationAnimation_getAnimationSize(CompoundRotationAnimation* this) {
        return IndexedAnimation_getAnimationSize(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


int32_t CompoundRotationAnimation_getSize(CompoundRotationAnimation* this) {
        return RotationAnimation_getSize(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void CompoundRotationAnimation_previousFrame(CompoundRotationAnimation* this) {
        IndexedAnimation_previousFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


// throws Exception
void CompoundRotationAnimation_nextFrame(CompoundRotationAnimation* this) {
        Animation_nextFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void CompoundRotationAnimation_previousRotation(CompoundRotationAnimation* this) {
        RotationAnimation_previousRotation(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void CompoundRotationAnimation_nextRotation(CompoundRotationAnimation* this) {
        RotationAnimation_nextRotation(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


void CompoundRotationAnimation_setSequence(CompoundRotationAnimation* this, int32_t* sequence) {
}


int32_t* CompoundRotationAnimation_getSequence(CompoundRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void CompoundRotationAnimation_paintXY(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        Animation_paintXY(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], graphics, x, y);
}


void CompoundRotationAnimation_paintThreedXYZ(CompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        Animation_paintThreedXYZ(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], graphics, x, y, z);
}


IndexedAnimation* CompoundRotationAnimation_getCurrentAnimation(CompoundRotationAnimation* this) {
        return this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)];
}


void CompoundRotationAnimation_nextAnimation(CompoundRotationAnimation* this) {
        int32_t frame = CompoundRotationAnimation_getFrame(this);
        CircularIndexUtil_next(this->base.circularIndexUtil);
        CompoundRotationAnimation_setFrame(this, frame);
}


void CompoundRotationAnimation_previousAnimation(CompoundRotationAnimation* this) {
        int32_t frame = CompoundRotationAnimation_getFrame(this);
        CircularIndexUtil_previous(this->base.circularIndexUtil);
        CompoundRotationAnimation_setFrame(this, frame);
}


void CompoundRotationAnimation_setAnimation(CompoundRotationAnimation* this, int32_t index) {
        int32_t frame = CompoundRotationAnimation_getFrame(this);
        CircularIndexUtil_setIndex(this->base.circularIndexUtil, index);
        CompoundRotationAnimation_setFrame(this, frame);
}


void CompoundRotationAnimation_setFrameByDirection(CompoundRotationAnimation* this, Direction* direction) {
        RotationAnimation_setFrameByDirection(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], direction);
}


void CompoundRotationAnimation_setFrameToAngle(CompoundRotationAnimation* this, Angle* angle) {
        RotationAnimation_setFrameToAngle(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], angle);
}


void CompoundRotationAnimation_adjustFrameToAngle(CompoundRotationAnimation* this, Angle* newAngle) {
        CompoundRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}


void CompoundRotationAnimation_adjustFrame(CompoundRotationAnimation* this, int16_t angle) {
        RotationAnimation_adjustFrame(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)], angle);
}


AngleInfo* CompoundRotationAnimation_getAngleInfoP(CompoundRotationAnimation* this) {
        return RotationAnimation_getAngleInfoP(this->animationInterfaceArray[CircularIndexUtil_getIndex(this->base.circularIndexUtil)]);
}


RotationAnimation** CompoundRotationAnimation_getAnimationInterfaceArray(CompoundRotationAnimation* this) {
        return this->animationInterfaceArray;
}


void CompoundRotationAnimation_setAnimationInterfaceArray(CompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void CompoundRotationAnimation_set(CompoundRotationAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_set(this->animationInterfaceArray[index], gl);
        }
}

