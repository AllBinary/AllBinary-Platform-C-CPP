// Generated Code Do Not Modify
#include "org/allbinary/animation/compound/SimultaneousCompoundRotationAnimation.h"
#include "javax/microedition/khronos/opengles/GL.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/direction/Direction.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/Angle.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
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
























void SimultaneousCompoundRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void SimultaneousCompoundRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("SimultaneousCompoundRotationAnimation", "RotationAnimation");
    java_register_method("SimultaneousCompoundRotationAnimation", "setFrame", (void*) SimultaneousCompoundRotationAnimation_setFrame);
    java_register_method("SimultaneousCompoundRotationAnimation", "getFrame", (void*) SimultaneousCompoundRotationAnimation_getFrame);
    java_register_method("SimultaneousCompoundRotationAnimation", "getAnimationSize", (void*) SimultaneousCompoundRotationAnimation_getAnimationSize);
    java_register_method("SimultaneousCompoundRotationAnimation", "getSize", (void*) SimultaneousCompoundRotationAnimation_getSize);
    java_register_method("SimultaneousCompoundRotationAnimation", "previousFrame", (void*) SimultaneousCompoundRotationAnimation_previousFrame);
    java_register_method("SimultaneousCompoundRotationAnimation", "nextFrame", (void*) SimultaneousCompoundRotationAnimation_nextFrame);
    java_register_method("SimultaneousCompoundRotationAnimation", "previousRotation", (void*) SimultaneousCompoundRotationAnimation_previousRotation);
    java_register_method("SimultaneousCompoundRotationAnimation", "nextRotation", (void*) SimultaneousCompoundRotationAnimation_nextRotation);
    java_register_method("SimultaneousCompoundRotationAnimation", "setSequence", (void*) SimultaneousCompoundRotationAnimation_setSequence);
    java_register_method("SimultaneousCompoundRotationAnimation", "getSequence", (void*) SimultaneousCompoundRotationAnimation_getSequence);
    java_register_method("SimultaneousCompoundRotationAnimation", "paintXY", (void*) SimultaneousCompoundRotationAnimation_paintXY);
    java_register_method("SimultaneousCompoundRotationAnimation", "paintThreedXYZ", (void*) SimultaneousCompoundRotationAnimation_paintThreedXYZ);
    java_register_method("SimultaneousCompoundRotationAnimation", "setFrameByDirection", (void*) SimultaneousCompoundRotationAnimation_setFrameByDirection);
    java_register_method("SimultaneousCompoundRotationAnimation", "setFrameToAngle", (void*) SimultaneousCompoundRotationAnimation_setFrameToAngle);
    java_register_method("SimultaneousCompoundRotationAnimation", "adjustFrameToAngle", (void*) SimultaneousCompoundRotationAnimation_adjustFrameToAngle);
    java_register_method("SimultaneousCompoundRotationAnimation", "adjustFrame", (void*) SimultaneousCompoundRotationAnimation_adjustFrame);
    java_register_method("SimultaneousCompoundRotationAnimation", "getAngleInfoP", (void*) SimultaneousCompoundRotationAnimation_getAngleInfoP);
    java_register_method("SimultaneousCompoundRotationAnimation", "getAnimationInterfaceArray", (void*) SimultaneousCompoundRotationAnimation_getAnimationInterfaceArray);
    java_register_method("SimultaneousCompoundRotationAnimation", "setAnimationInterfaceArray", (void*) SimultaneousCompoundRotationAnimation_setAnimationInterfaceArray);
    java_register_method("SimultaneousCompoundRotationAnimation", "set", (void*) SimultaneousCompoundRotationAnimation_set);
}

static void SimultaneousCompoundRotationAnimation_initFields(SimultaneousCompoundRotationAnimation* this) {
    
}


void SimultaneousCompoundRotationAnimation_init(SimultaneousCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundRotationAnimation_register();
        RotationAnimation_init(&this->base, AngleInfo_getInstance(AngleFactory_getInstance()->QUARTER_TOTAL_ANGLE), CircularIndexUtil_createInstance(4), animationBehavior);
        SimultaneousCompoundRotationAnimation_initFields(this);
        this->animationInterfaceArray = animationInterfaceArray;
}

SimultaneousCompoundRotationAnimation* SimultaneousCompoundRotationAnimation_new(RotationAnimation** animationInterfaceArray, AnimationBehavior* animationBehavior) {
    SimultaneousCompoundRotationAnimation* this = java_object_alloc(sizeof(SimultaneousCompoundRotationAnimation), "SimultaneousCompoundRotationAnimation");
    SimultaneousCompoundRotationAnimation_init(this, animationInterfaceArray, animationBehavior);
    return this;
}


void SimultaneousCompoundRotationAnimation_setFrame(SimultaneousCompoundRotationAnimation* this, int32_t frameIndex) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            RotationAnimation_setFrame(this->animationInterfaceArray[index], frameIndex);
        }
}


int32_t SimultaneousCompoundRotationAnimation_getFrame(SimultaneousCompoundRotationAnimation* this) {
        return RotationAnimation_getFrame(this->animationInterfaceArray[0]);
}


// throws Exception
int32_t SimultaneousCompoundRotationAnimation_getAnimationSize(SimultaneousCompoundRotationAnimation* this) {
        return IndexedAnimation_getAnimationSize(this->animationInterfaceArray[0]);
}


int32_t SimultaneousCompoundRotationAnimation_getSize(SimultaneousCompoundRotationAnimation* this) {
        return RotationAnimation_getSize(this->animationInterfaceArray[0]);
}


void SimultaneousCompoundRotationAnimation_previousFrame(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            IndexedAnimation_previousFrame(this->animationInterfaceArray[index]);
        }
}


// throws Exception
void SimultaneousCompoundRotationAnimation_nextFrame(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_nextFrame(this->animationInterfaceArray[index]);
        }
}


void SimultaneousCompoundRotationAnimation_previousRotation(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            RotationAnimation_previousRotation(this->animationInterfaceArray[index]);
        }
}


void SimultaneousCompoundRotationAnimation_nextRotation(SimultaneousCompoundRotationAnimation* this) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            RotationAnimation_nextRotation(this->animationInterfaceArray[index]);
        }
}


void SimultaneousCompoundRotationAnimation_setSequence(SimultaneousCompoundRotationAnimation* this, int32_t* sequence) {
}


int32_t* SimultaneousCompoundRotationAnimation_getSequence(SimultaneousCompoundRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void SimultaneousCompoundRotationAnimation_paintXY(SimultaneousCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_paintXY(this->animationInterfaceArray[index], graphics, x, y);
        }
}


void SimultaneousCompoundRotationAnimation_paintThreedXYZ(SimultaneousCompoundRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y, int32_t z) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_paintThreedXYZ(this->animationInterfaceArray[index], graphics, x, y, z);
        }
}


void SimultaneousCompoundRotationAnimation_setFrameByDirection(SimultaneousCompoundRotationAnimation* this, Direction* direction) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            RotationAnimation_setFrameByDirection(this->animationInterfaceArray[index], direction);
        }
}


void SimultaneousCompoundRotationAnimation_setFrameToAngle(SimultaneousCompoundRotationAnimation* this, Angle* angle) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            RotationAnimation_setFrameToAngle(this->animationInterfaceArray[index], angle);
        }
}


void SimultaneousCompoundRotationAnimation_adjustFrameToAngle(SimultaneousCompoundRotationAnimation* this, Angle* newAngle) {
        SimultaneousCompoundRotationAnimation_adjustFrame(this, Angle_getValue(newAngle));
}


void SimultaneousCompoundRotationAnimation_adjustFrame(SimultaneousCompoundRotationAnimation* this, int16_t angle) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            RotationAnimation_adjustFrame(this->animationInterfaceArray[index], angle);
        }
}


AngleInfo* SimultaneousCompoundRotationAnimation_getAngleInfoP(SimultaneousCompoundRotationAnimation* this) {
        return RotationAnimation_getAngleInfoP(this->animationInterfaceArray[0]);
}


RotationAnimation** SimultaneousCompoundRotationAnimation_getAnimationInterfaceArray(SimultaneousCompoundRotationAnimation* this) {
        return this->animationInterfaceArray;
}


void SimultaneousCompoundRotationAnimation_setAnimationInterfaceArray(SimultaneousCompoundRotationAnimation* this, RotationAnimation** animationInterfaceArray) {
        this->animationInterfaceArray = animationInterfaceArray;
}


// throws Exception
void SimultaneousCompoundRotationAnimation_set(SimultaneousCompoundRotationAnimation* this, GL* gl) {
        for (int32_t index = java_array_length(this->animationInterfaceArray); --index >= 0; ) {
            Animation_set(this->animationInterfaceArray[index], gl);
        }
}

