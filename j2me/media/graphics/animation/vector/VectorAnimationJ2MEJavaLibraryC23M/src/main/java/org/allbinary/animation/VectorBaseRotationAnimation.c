// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorBaseRotationAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/graphics/color/AngleIncrementInfo.h")
#include "org/allbinary/graphics/color/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/logic/AngleIncrementInfo.h")
#include "org/allbinary/logic/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/logic/math/AngleIncrementInfo.h")
#include "org/allbinary/logic/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/util/AngleIncrementInfo.h")
#include "org/allbinary/util/AngleIncrementInfo.h"
#endif

















void VectorBaseRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorBaseRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorBaseRotationAnimation", "RotationAnimation");
    java_register_method("VectorBaseRotationAnimation", "getAnimationSize", (void*) VectorBaseRotationAnimation_getAnimationSize);
    java_register_method("VectorBaseRotationAnimation", "getFrame", (void*) VectorBaseRotationAnimation_getFrame);
    java_register_method("VectorBaseRotationAnimation", "setFrame", (void*) VectorBaseRotationAnimation_setFrame);
    java_register_method("VectorBaseRotationAnimation", "nextFrame", (void*) VectorBaseRotationAnimation_nextFrame);
    java_register_method("VectorBaseRotationAnimation", "previousFrame", (void*) VectorBaseRotationAnimation_previousFrame);
    java_register_method("VectorBaseRotationAnimation", "getSize", (void*) VectorBaseRotationAnimation_getSize);
    java_register_method("VectorBaseRotationAnimation", "setSequence", (void*) VectorBaseRotationAnimation_setSequence);
    java_register_method("VectorBaseRotationAnimation", "getSequence", (void*) VectorBaseRotationAnimation_getSequence);
    java_register_method("VectorBaseRotationAnimation", "paintXY", (void*) VectorBaseRotationAnimation_paintXY);
    java_register_method("VectorBaseRotationAnimation", "getPoints", (void*) VectorBaseRotationAnimation_getPoints);
    java_register_method("VectorBaseRotationAnimation", "setPoints", (void*) VectorBaseRotationAnimation_setPoints);
    java_register_method("VectorBaseRotationAnimation", "getBasicColorP", (void*) VectorBaseRotationAnimation_getBasicColorP);
    java_register_method("VectorBaseRotationAnimation", "setBasicColorP", (void*) VectorBaseRotationAnimation_setBasicColorP);
}

static void VectorBaseRotationAnimation_initFields(VectorBaseRotationAnimation* this) {
    this->currentPoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
}


void VectorBaseRotationAnimation_init(VectorBaseRotationAnimation* this, AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorBaseRotationAnimation_register();
        RotationAnimation_init(&this->base, angleInfo, CircularIndexUtil_createInstance(360 / ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(angleInfo)))), animationBehavior);
        VectorBaseRotationAnimation_initFields(this);
        VectorBaseRotationAnimation_setPoints(this, currentPoints);
        VectorBaseRotationAnimation_setBasicColorP(this, basicColor);
}

VectorBaseRotationAnimation* VectorBaseRotationAnimation_new(AngleInfo* angleInfo, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorBaseRotationAnimation* this = java_object_alloc(sizeof(VectorBaseRotationAnimation), "VectorBaseRotationAnimation");
    VectorBaseRotationAnimation_init(this, angleInfo, currentPoints, basicColor, animationBehavior);
    return this;
}


// throws Exception
int32_t VectorBaseRotationAnimation_getAnimationSize(VectorBaseRotationAnimation* this) {
        return VectorBaseRotationAnimation_getSize(this);
}


int32_t VectorBaseRotationAnimation_getFrame(VectorBaseRotationAnimation* this) {
        return CircularIndexUtil_getIndex(this->base.circularIndexUtil);
}


void VectorBaseRotationAnimation_setFrame(VectorBaseRotationAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->base.circularIndexUtil, index);
}


void VectorBaseRotationAnimation_nextFrame(VectorBaseRotationAnimation* this) {
        CircularIndexUtil_next(this->base.circularIndexUtil);
}


void VectorBaseRotationAnimation_previousFrame(VectorBaseRotationAnimation* this) {
        CircularIndexUtil_previous(this->base.circularIndexUtil);
}


int32_t VectorBaseRotationAnimation_getSize(VectorBaseRotationAnimation* this) {
        return java_array_length(this->currentPoints);
}


void VectorBaseRotationAnimation_setSequence(VectorBaseRotationAnimation* this, int32_t* sequence) {
}


int32_t* VectorBaseRotationAnimation_getSequence(VectorBaseRotationAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void VectorBaseRotationAnimation_paintXY(VectorBaseRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP(this->base.base.base.basicSetColorUtil, graphics, this->base.base.base.basicColor);
        JAVA_TRY {
            int32_t nextPointX = 0;
            int32_t nextPointY = 0;
            int32_t* nextPoint = nullptr;
            int32_t* point = nullptr;
            int32_t** currentPointsFrame = this->currentPoints[CircularIndexUtil_getIndex(this->base.circularIndexUtil)];
            int32_t size = java_array_length(currentPointsFrame);
            int32_t index = size - 2;
            while (--index >= 0) {
                nextPoint = currentPointsFrame[index];
                point = currentPointsFrame[index + 1];
                nextPointX = nextPoint[0];
                nextPointY = nextPoint[1];
                if (nextPointX != 1000) {
                    Graphics_drawLine(graphics, point[0] + x, point[1] + y, nextPointX + x, nextPointY + y);
                } else {
                    index--;
                }
            }
        } JAVA_CATCH(Exception, e) {
            LogUtil_put(this->base.base.logUtil, this->base.base.commonStrings->EXCEPTION, this, "paintVectors", e);
        } JAVA_END_TRY;
}


int32_t** VectorBaseRotationAnimation_getPoints(VectorBaseRotationAnimation* this, int32_t frame) {
        return this->currentPoints[frame];
}


void VectorBaseRotationAnimation_setPoints(VectorBaseRotationAnimation* this, int32_t*** currentPoints) {
        this->currentPoints = currentPoints;
        this->base.circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(this->currentPoints));
}


BasicColor* VectorBaseRotationAnimation_getBasicColorP(VectorBaseRotationAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}


void VectorBaseRotationAnimation_setBasicColorP(VectorBaseRotationAnimation* this, BasicColor* basicColor) {
        Animation_setBasicColorP((&this->base), basicColor);
}

