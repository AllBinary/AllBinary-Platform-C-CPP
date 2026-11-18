// Generated Code Do Not Modify
#include "org/allbinary/animation/image/RightToLeftImageAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/RightToLeftImageAnimation.h"
#include "org/allbinary/animation/image/AdjustedRightToLeftImageAnimation.h"





void RightToLeftImageAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void RightToLeftImageAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("RightToLeftImageAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("RightToLeftImageAnimationFactory", "getInstance", (void*) RightToLeftImageAnimationFactory_getInstance);
}


void RightToLeftImageAnimationFactory_init(RightToLeftImageAnimationFactory* this, Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    RightToLeftImageAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), Image_getWidth(image), Image_getHeight(image), dx, dy, animationBehaviorFactory);
}

RightToLeftImageAnimationFactory* RightToLeftImageAnimationFactory_new(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    RightToLeftImageAnimationFactory* this = java_object_alloc(sizeof(RightToLeftImageAnimationFactory), "RightToLeftImageAnimationFactory");
    RightToLeftImageAnimationFactory_init(this, image, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* RightToLeftImageAnimationFactory_getInstance(RightToLeftImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = AnimationFactoryImageScaleUtil_createImage(this->base.animationFactoryImageScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            AnimationFactoryImageScaleUtil_processAdjust(this->base.animationFactoryImageScaleUtil, this);
            return AdjustedRightToLeftImageAnimation_new(scaledImage, this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return RightToLeftImageAnimation_new(scaledImage, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}

