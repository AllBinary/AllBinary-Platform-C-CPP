// Generated Code Do Not Modify
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#include "javax/microedition/lcdui/Graphics.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif












void AdjustedImageArrayRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void AdjustedImageArrayRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AdjustedImageArrayRotationAnimation", "ImageArrayRotationAnimation");
    java_register_method("AdjustedImageArrayRotationAnimation", "init", (void*) AdjustedImageArrayRotationAnimation_initMethod);
    java_register_method("AdjustedImageArrayRotationAnimation", "paintXY", (void*) AdjustedImageArrayRotationAnimation_paintXY);
    java_register_method("AdjustedImageArrayRotationAnimation", "setDx", (void*) AdjustedImageArrayRotationAnimation_setDx);
    java_register_method("AdjustedImageArrayRotationAnimation", "getDx", (void*) AdjustedImageArrayRotationAnimation_getDx);
    java_register_method("AdjustedImageArrayRotationAnimation", "setDy", (void*) AdjustedImageArrayRotationAnimation_setDy);
    java_register_method("AdjustedImageArrayRotationAnimation", "getDy", (void*) AdjustedImageArrayRotationAnimation_getDy);
}

static void AdjustedImageArrayRotationAnimation_initFields(AdjustedImageArrayRotationAnimation* this) {
    this->dx = 0;
    this->dy = 0;
}


// throws Exception
AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_createAdjustedImageArrayRotationAnimationInfo(void* anyType, AnimationBehavior* animationBehavior) {
        ImageArrayRotationAnimationInfo* imageRotationAnimationInfo = ((ImageArrayRotationAnimationInfo*) anyType);
        return AdjustedImageArrayRotationAnimation_new(ImageArrayRotationAnimationInfo_getImageArray(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getAngleInfoP(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getTotalAngle(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getDx(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getDy(imageRotationAnimationInfo), animationBehavior);
}


// throws Exception
AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_createAnimation(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) {
        return AdjustedImageArrayRotationAnimation_new(imageArray, angleInfo, totalAngle, -(Image_getWidth(imageArray[0]) >> 2), -(Image_getHeight(imageArray[0]) >> 2), animationBehavior);
}


void AdjustedImageArrayRotationAnimation_init(AdjustedImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageArrayRotationAnimation_register();
        ImageArrayRotationAnimation_init(&this->base, imageArray, angleInfo, totalAngle, animationBehavior);
        AdjustedImageArrayRotationAnimation_initFields(this);
        AdjustedImageArrayRotationAnimation_initMethod(this, dx, dy);
}

AdjustedImageArrayRotationAnimation* AdjustedImageArrayRotationAnimation_new(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, int32_t dx, int32_t dy, AnimationBehavior* animationBehavior) {
    AdjustedImageArrayRotationAnimation* this = java_object_alloc(sizeof(AdjustedImageArrayRotationAnimation), "AdjustedImageArrayRotationAnimation");
    AdjustedImageArrayRotationAnimation_init(this, imageArray, angleInfo, totalAngle, dx, dy, animationBehavior);
    return this;
}


// throws Exception
void AdjustedImageArrayRotationAnimation_initMethod(AdjustedImageArrayRotationAnimation* this, int32_t dx, int32_t dy) {
        AdjustedImageArrayRotationAnimation_setDx(this, dx);
        AdjustedImageArrayRotationAnimation_setDy(this, dy);
}


void AdjustedImageArrayRotationAnimation_paintXY(AdjustedImageArrayRotationAnimation* this, Graphics* graphics, int32_t x, int32_t y) {
        ImageArrayBaseRotationAnimation_paintXY((&this->base), graphics, x + this->dx, y + this->dy);
}


void AdjustedImageArrayRotationAnimation_setDx(AdjustedImageArrayRotationAnimation* this, int32_t dx) {
        this->dx = dx;
}


int32_t AdjustedImageArrayRotationAnimation_getDx(AdjustedImageArrayRotationAnimation* this) {
        return this->dx;
}


void AdjustedImageArrayRotationAnimation_setDy(AdjustedImageArrayRotationAnimation* this, int32_t dy) {
        this->dy = dy;
}


int32_t AdjustedImageArrayRotationAnimation_getDy(AdjustedImageArrayRotationAnimation* this) {
        return this->dy;
}

