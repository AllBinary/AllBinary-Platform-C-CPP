// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageRotationAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/ImageBaseRotationAnimation.h"
#include "org/allbinary/animation/image/AdjustedImageBaseRotationAnimation.h"
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif
#if __has_include("org/allbinary/math/AngleFactory.h")
#include "org/allbinary/math/AngleFactory.h"
#endif






void ImageRotationAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageRotationAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageRotationAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("ImageRotationAnimationFactory", "getInstance", (void*) ImageRotationAnimationFactory_getInstance);
    java_register_method("ImageRotationAnimationFactory", "getAngleIncrementP", (void*) ImageRotationAnimationFactory_getAngleIncrementP);
}

static void ImageRotationAnimationFactory_initFields(ImageRotationAnimationFactory* this) {
    
}


void ImageRotationAnimationFactory_init(ImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageRotationAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, 0, 0, animationBehaviorFactory);
        ImageRotationAnimationFactory_initFields(this);
        this->angleIncrement = angleIncrement;
        this->base.animationFactoryInitializationVisitor->dx = dx;
        this->base.animationFactoryInitializationVisitor->dy = dy;
}

ImageRotationAnimationFactory* ImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageRotationAnimationFactory* this = java_object_alloc(sizeof(ImageRotationAnimationFactory), "ImageRotationAnimationFactory");
    ImageRotationAnimationFactory_init(this, image, width, height, dx, dy, angleIncrement, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageRotationAnimationFactory_getInstance(ImageRotationAnimationFactory* this, int32_t instanceId) {
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            AnimationFactoryImageScaleUtil_processAdjust(this->base.animationFactoryImageScaleUtil, this);
            return AdjustedImageBaseRotationAnimation_new(BaseImageAnimationFactory_getImage(this), AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return ImageBaseRotationAnimation_new(BaseImageAnimationFactory_getImage(this), AngleInfo_getInstance(this->angleIncrement), AngleFactory_getInstance()->TOTAL_ANGLE, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}


int16_t ImageRotationAnimationFactory_getAngleIncrementP(ImageRotationAnimationFactory* this) {
        return this->angleIncrement;
}

