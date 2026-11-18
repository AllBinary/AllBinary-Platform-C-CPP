// Generated Code Do Not Modify
#include "org/allbinary/animation/VectorAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/util/CircularIndexUtil.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/VectorAnimationInterface.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif










static void VectorAnimation_updateModifiers(VectorAnimation* this);














void VectorAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void VectorAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("VectorAnimation", "IndexedAnimation");
    java_register_method("VectorAnimation", "setBasicColorP", (void*) VectorAnimation_setBasicColorP);
    java_register_method("VectorAnimation", "changeBasicColor", (void*) VectorAnimation_changeBasicColor);
    java_register_method("VectorAnimation", "setAlpha", (void*) VectorAnimation_setAlpha);
    java_register_method("VectorAnimation", "setScale", (void*) VectorAnimation_setScale);
    java_register_method("VectorAnimation", "setMaxScale", (void*) VectorAnimation_setMaxScale);
    java_register_method("VectorAnimation", "updateModifiers", (void*) VectorAnimation_updateModifiers);
    java_register_method("VectorAnimation", "getAnimationSize", (void*) VectorAnimation_getAnimationSize);
    java_register_method("VectorAnimation", "getSize", (void*) VectorAnimation_getSize);
    java_register_method("VectorAnimation", "setSequence", (void*) VectorAnimation_setSequence);
    java_register_method("VectorAnimation", "getSequence", (void*) VectorAnimation_getSequence);
    java_register_method("VectorAnimation", "nextFrame", (void*) VectorAnimation_nextFrame);
    java_register_method("VectorAnimation", "previousFrame", (void*) VectorAnimation_previousFrame);
    java_register_method("VectorAnimation", "paintVectors", (void*) VectorAnimation_paintVectors);
    java_register_method("VectorAnimation", "paintXY", (void*) VectorAnimation_paintXY);
    java_register_method("VectorAnimation", "getFrame", (void*) VectorAnimation_getFrame);
    java_register_method("VectorAnimation", "setFrame", (void*) VectorAnimation_setFrame);
    java_register_method("VectorAnimation", "getPoints", (void*) VectorAnimation_getPoints);
    java_register_method("VectorAnimation", "setPoints", (void*) VectorAnimation_setPoints);
    java_register_method("VectorAnimation", "getBasicColorP", (void*) VectorAnimation_getBasicColorP);
}

static void VectorAnimation_initFields(VectorAnimation* this) {
    this->currentPoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    this->circularIndexUtil = CircularIndexUtil_createInstance(0);
}


VectorAnimation* VectorAnimation_createVectorAnimation(int32_t** currentPoints2, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
        int32_t*** currentPoints = ((int32_t***) java_array_new3(sizeof(int32_t), 1, java_array_length(currentPoints2), 2));
        int32_t size = java_array_length(currentPoints2);
        for (int32_t index = 0; index < size; index++) {
            currentPoints[0][index][0] = currentPoints2[index][0];
            currentPoints[0][index][1] = currentPoints2[index][1];
        }
        return VectorAnimation_new(currentPoints, basicColor, animationBehavior);
}


void VectorAnimation_init(VectorAnimation* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorAnimation_register();
        IndexedAnimation_init(&this->base, animationBehavior);
        VectorAnimation_initFields(this);
        VectorAnimation_setPoints(this, currentPoints);
        VectorAnimation_setBasicColorP(this, basicColor);
}

VectorAnimation* VectorAnimation_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehavior* animationBehavior) {
    VectorAnimation* this = java_object_alloc(sizeof(VectorAnimation), "VectorAnimation");
    VectorAnimation_init(this, currentPoints, basicColor, animationBehavior);
    return this;
}


void VectorAnimation_setBasicColorP(VectorAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (VectorAnimation_getBasicColorP(this) == nullptr || BasicColor_intValue(VectorAnimation_getBasicColorP(this)) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        Animation_setBasicColorP((&this->base), basicColor);
        if (changed) {
            VectorAnimation_updateModifiers(this);
        }
}


void VectorAnimation_changeBasicColor(VectorAnimation* this, BasicColor* basicColor) {
        bool changed = false;
        if (Animation_getChangeBasicColor(this) == nullptr || BasicColor_intValue(Animation_getChangeBasicColor(this)) != BasicColor_intValue(basicColor)) {
            changed = true;
        }
        Animation_changeBasicColor((&this->base), basicColor);
        if (changed) {
            VectorAnimation_updateModifiers(this);
        }
}


void VectorAnimation_setAlpha(VectorAnimation* this, int32_t alpha) {
        bool changed = false;
        if (this->base.base.alphaP != alpha) {
            changed = true;
        }
        Animation_setAlpha((&this->base), alpha);
        if (changed) {
            VectorAnimation_updateModifiers(this);
        }
}


void VectorAnimation_setScale(VectorAnimation* this, float scaleX, float scaleY) {
}


void VectorAnimation_setMaxScale(VectorAnimation* this, float maxScaleX, float maxScaleY) {
}


static void VectorAnimation_updateModifiers(VectorAnimation* this) {
}


// throws Exception
int32_t VectorAnimation_getAnimationSize(VectorAnimation* this) {
        return VectorAnimation_getSize(this);
}


int32_t VectorAnimation_getSize(VectorAnimation* this) {
        return java_array_length(this->currentPoints);
}


void VectorAnimation_setSequence(VectorAnimation* this, int32_t* sequence) {
}


int32_t* VectorAnimation_getSequence(VectorAnimation* this) {
        return PrimitiveIntUtil_getArrayInstance();
}


void VectorAnimation_nextFrame(VectorAnimation* this) {
        CircularIndexUtil_next(this->circularIndexUtil);
}


void VectorAnimation_previousFrame(VectorAnimation* this) {
        CircularIndexUtil_previous(this->circularIndexUtil);
}


void VectorAnimation_paintVectors(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        JAVA_TRY {
            int32_t nextPointX = 0;
            int32_t nextPointY = 0;
            int32_t* nextPoint = nullptr;
            int32_t* point = nullptr;
            int32_t** currentPointsFrame = this->currentPoints[CircularIndexUtil_getIndex(this->circularIndexUtil)];
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
            LogUtil_put(this->base.logUtil, this->base.commonStrings->EXCEPTION, this, "paintVectors", e);
        } JAVA_END_TRY;
}


void VectorAnimation_paintXY(VectorAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        BasicColorSetUtil_setBasicColorP(this->base.base.basicSetColorUtil, graphics, this->base.base.basicColor);
        VectorAnimation_paintVectors(this, graphics, x, y);
}


int32_t VectorAnimation_getFrame(VectorAnimation* this) {
        return CircularIndexUtil_getIndex(this->circularIndexUtil);
}


void VectorAnimation_setFrame(VectorAnimation* this, int32_t index) {
        CircularIndexUtil_setIndex(this->circularIndexUtil, index);
}


int32_t** VectorAnimation_getPoints(VectorAnimation* this, int32_t frame) {
        return this->currentPoints[frame];
}


void VectorAnimation_setPoints(VectorAnimation* this, int32_t*** currentPoints) {
        this->currentPoints = currentPoints;
        this->circularIndexUtil = CircularIndexUtil_createInstance(java_array_length(currentPoints));
}


BasicColor* VectorAnimation_getBasicColorP(VectorAnimation* this) {
        return Animation_getBasicColorP((&this->base));
}

