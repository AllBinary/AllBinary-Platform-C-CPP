// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayRotationAnimation.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/ImageArrayBaseRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#if __has_include("org/allbinary/animation/image/AngleIncrementInfo.h")
#include "org/allbinary/animation/image/AngleIncrementInfo.h"
#endif
#if __has_include("javax/microedition/lcdui/AngleIncrementInfo.h")
#include "javax/microedition/lcdui/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/animation/AngleIncrementInfo.h")
#include "org/allbinary/animation/AngleIncrementInfo.h"
#endif
#if __has_include("org/allbinary/math/AngleIncrementInfo.h")
#include "org/allbinary/math/AngleIncrementInfo.h"
#endif





static void ImageArrayRotationAnimation_initImageArray(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle);


void ImageArrayRotationAnimation_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayRotationAnimation_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayRotationAnimation", "ImageArrayBaseRotationAnimation");
    java_register_method("ImageArrayRotationAnimation", "initImageArray", (void*) ImageArrayRotationAnimation_initImageArray);
    java_register_method("ImageArrayRotationAnimation", "setImageArray", (void*) ImageArrayRotationAnimation_setImageArray);
}

static void ImageArrayRotationAnimation_initFields(ImageArrayRotationAnimation* this) {
    this->expectedTotalFrames = 0;
}


// throws Exception
ImageArrayRotationAnimation* ImageArrayRotationAnimation_createAnimation(void* anyType, AnimationBehavior* animationBehavior) {
        ImageArrayRotationAnimationInfo* imageRotationAnimationInfo = ((ImageArrayRotationAnimationInfo*) anyType);
        return ImageArrayRotationAnimation_new(ImageArrayRotationAnimationInfo_getImageArray(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getAngleInfoP(imageRotationAnimationInfo), ImageArrayRotationAnimationInfo_getTotalAngle(imageRotationAnimationInfo), animationBehavior);
}


void ImageArrayRotationAnimation_init(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) {
    ImageArrayRotationAnimation_register();
        ImageArrayBaseRotationAnimation_init(&this->base, imageArray, angleInfo, animationBehavior);
        ImageArrayRotationAnimation_initFields(this);
        ImageArrayRotationAnimation_initImageArray(this, imageArray, angleInfo, totalAngle);
}

ImageArrayRotationAnimation* ImageArrayRotationAnimation_new(Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle, AnimationBehavior* animationBehavior) {
    ImageArrayRotationAnimation* this = java_object_alloc(sizeof(ImageArrayRotationAnimation), "ImageArrayRotationAnimation");
    ImageArrayRotationAnimation_init(this, imageArray, angleInfo, totalAngle, animationBehavior);
    return this;
}


// throws Exception
static void ImageArrayRotationAnimation_initImageArray(ImageArrayRotationAnimation* this, Image** imageArray, AngleInfo* angleInfo, int32_t totalAngle) {
        this->expectedTotalFrames = totalAngle / ((int32_t) AngleIncrementInfo_getAngleIncrement(AngleInfo_getAngleIncrementInfo(this->base.base.angleInfo)));
        AngleInfo_adjustAngle(this->base.base.angleInfo, 0);
        if (this->expectedTotalFrames != RotationAnimation_getSize(this)) {
            java_throw(java_exception_new("Exception", "Wrong Number of Frames"));
        }
}


void ImageArrayRotationAnimation_setImageArray(ImageArrayRotationAnimation* this, Image** imageArray) {
        ImageArrayBaseRotationAnimation_setImageArray((&this->base), imageArray);
        AngleInfo_adjustAngle(this->base.base.angleInfo, 0);
}

