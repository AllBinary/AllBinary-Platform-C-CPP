// Generated Code Do Not Modify
#include "org/allbinary/animation/image/ImageArrayAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/image/ImageArrayAnimation.h"
#include "org/allbinary/animation/image/AdjustedImageArrayAnimation.h"






void ImageArrayAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageArrayAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageArrayAnimationFactory", nullptr);
    java_register_method("ImageArrayAnimationFactory", "getInstance", (void*) ImageArrayAnimationFactory_getInstance);
    java_register_method("ImageArrayAnimationFactory", "setInitialScale", (void*) ImageArrayAnimationFactory_setInitialScale);
}

static void ImageArrayAnimationFactory_initFields(ImageArrayAnimationFactory* this) {
    this->dx = 0;
    this->dy = 0;
    
    
}


void ImageArrayAnimationFactory_init(ImageArrayAnimationFactory* this, Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageArrayAnimationFactory_register();
    ImageArrayAnimationFactory_initFields(this);
        this->imageArray = imageArray;
        this->animationBehaviorFactory = animationBehaviorFactory;
        this->dx = dx;
        this->dy = dy;
}

ImageArrayAnimationFactory* ImageArrayAnimationFactory_new(Image** imageArray, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageArrayAnimationFactory* this = java_object_alloc(sizeof(ImageArrayAnimationFactory), "ImageArrayAnimationFactory");
    ImageArrayAnimationFactory_init(this, imageArray, dx, dy, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageArrayAnimationFactory_getInstance(ImageArrayAnimationFactory* this, int32_t instanceId) {
        if (this->dx != 0 || this->dy != 0) {
            return AdjustedImageArrayAnimation_new(this->imageArray, this->dx, this->dy, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        } else {
            return ImageArrayAnimation_new(this->imageArray, AnimationBehavior_getInstance());
        }
}


void ImageArrayAnimationFactory_setInitialScale(ImageArrayAnimationFactory* this, ScaleProperties* scaleProperties) {
}

