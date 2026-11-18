// Generated Code Do Not Modify
#include "org/allbinary/animation/image/LeftToRightImageAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/LeftToRightImageAnimation.h"
#include "org/allbinary/animation/image/AdjustedLeftToRightImageAnimation.h"





void LeftToRightImageAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void LeftToRightImageAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("LeftToRightImageAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("LeftToRightImageAnimationFactory", "getInstance", (void*) LeftToRightImageAnimationFactory_getInstance);
}


void LeftToRightImageAnimationFactory_init(LeftToRightImageAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    LeftToRightImageAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, sequenceArray, Image_getWidth(image), Image_getHeight(image), dx, dy, animationBehaviorFactory);
}

LeftToRightImageAnimationFactory* LeftToRightImageAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    LeftToRightImageAnimationFactory* this = java_object_alloc(sizeof(LeftToRightImageAnimationFactory), "LeftToRightImageAnimationFactory");
    LeftToRightImageAnimationFactory_init(this, image, sequenceArray, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* LeftToRightImageAnimationFactory_getInstance(LeftToRightImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = AnimationFactoryImageScaleUtil_createImage(this->base.animationFactoryImageScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            AnimationFactoryImageScaleUtil_processAdjust(this->base.animationFactoryImageScaleUtil, this);
            return AdjustedLeftToRightImageAnimation_new(scaledImage, BaseImageAnimationFactory_getSequenceArray(this), this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return LeftToRightImageAnimation_new(scaledImage, BaseImageAnimationFactory_getSequenceArray(this), AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}

