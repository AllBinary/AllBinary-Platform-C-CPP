// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayRotationAnimationCacheable.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"
#include "org/allbinary/animation/image/ImageArrayRotationAnimationInfo.h"
#if __has_include("org/allbinary/logic/NullUtil.h")
#include "org/allbinary/logic/NullUtil.h"
#endif
#if __has_include("org/allbinary/logic/string/StringUtil.h")
#include "org/allbinary/logic/string/StringUtil.h"
#endif






void ImageArrayRotationAnimationCacheable_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayRotationAnimationCacheable_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayRotationAnimationCacheable", "AdjustedImageArrayRotationAnimation");
    java_register_method("ImageArrayRotationAnimationCacheable", "getKey", (void*) ImageArrayRotationAnimationCacheable_getKey);
    java_register_method("ImageArrayRotationAnimationCacheable", "toString", (void*) ImageArrayRotationAnimationCacheable_toString);
}


void ImageArrayRotationAnimationCacheable_init(ImageArrayRotationAnimationCacheable* this, void* anyType, AnimationBehavior* animationBehavior) {
    ImageArrayRotationAnimationCacheable_register();
        AdjustedImageArrayRotationAnimation_init(&this->base, ImageArrayRotationAnimationInfo_getImageArray((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getAngleInfoP((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getTotalAngle((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getDx((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getDy((((ImageArrayRotationAnimationInfo*) anyType))), animationBehavior);
}

ImageArrayRotationAnimationCacheable* ImageArrayRotationAnimationCacheable_new(void* anyType, AnimationBehavior* animationBehavior) {
    ImageArrayRotationAnimationCacheable* this = java_object_alloc(sizeof(ImageArrayRotationAnimationCacheable), "ImageArrayRotationAnimationCacheable");
    ImageArrayRotationAnimationCacheable_init(this, anyType, animationBehavior);
    return this;
}


void* ImageArrayRotationAnimationCacheable_getKey(ImageArrayRotationAnimationCacheable* this) {
        return NullUtil_getInstance()->NULL_OBJECT;
}


const char* ImageArrayRotationAnimationCacheable_toString(ImageArrayRotationAnimationCacheable* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

