// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#include "org/allbinary/logic/math/PrimitiveIntUtil.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/animation/image/ImageAnimation.h"
#include "org/allbinary/animation/image/AdjustedImageAnimation.h"






void ImageAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageAnimationFactory", "BaseImageAnimationFactory");
    java_register_method("ImageAnimationFactory", "getInstance", (void*) ImageAnimationFactory_getInstance);
}


// throws Exception
ImageAnimationFactory* ImageAnimationFactory_createFactory(Image* image) {
        return ImageAnimationFactory_new(image, Image_getWidth(image), Image_getHeight(image), 0, 0, AnimationBehaviorFactory_getInstance());
}


void ImageAnimationFactory_init(ImageAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageAnimationFactory_register();
        BaseImageAnimationFactory_init(&this->base, image, PrimitiveIntUtil_getArrayInstance(), width, height, dx, dy, animationBehaviorFactory);
}

ImageAnimationFactory* ImageAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageAnimationFactory* this = java_object_alloc(sizeof(ImageAnimationFactory), "ImageAnimationFactory");
    ImageAnimationFactory_init(this, image, width, height, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageAnimationFactory_getInstance(ImageAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = AnimationFactoryImageScaleUtil_createImage(this->base.animationFactoryImageScaleUtil, BaseImageAnimationFactory_getImage(this), this->base.animationFactoryInitializationVisitor->width, this->base.animationFactoryInitializationVisitor->height, this->base.scaleProperties->scaleWidth, this->base.scaleProperties->scaleHeight);
        OpenGLUtil* openGLUtil = OpenGLUtil_getInstance();
        scaledImage = OpenGLUtil_addImage(openGLUtil, scaledImage);
        if (this->base.animationFactoryInitializationVisitor->dx != 0 || this->base.animationFactoryInitializationVisitor->dy != 0) {
            AnimationFactoryImageScaleUtil_processAdjust(this->base.animationFactoryImageScaleUtil, this);
            return AdjustedImageAnimation_new(scaledImage, this->base.animationFactoryInitializationVisitor->dx, this->base.animationFactoryInitializationVisitor->dy, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        } else {
            return ImageAnimation_new(scaledImage, AnimationBehaviorFactory_getOrCreateInstance(this->base.animationBehaviorFactory));
        }
}

