// Generated Code Do Not Modify
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/image/AnimationFactoryInitializationVisitor.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/image/ImageJ2MEScaleUtil.h"


static AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_instance;




void AnimationFactoryImageScaleUtil_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
    AnimationFactoryImageScaleUtil_instance = AnimationFactoryImageScaleUtil_new();
}

void AnimationFactoryImageScaleUtil_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("AnimationFactoryImageScaleUtil", nullptr);
    java_register_method("AnimationFactoryImageScaleUtil", "createImage", (void*) AnimationFactoryImageScaleUtil_createImage);
    java_register_method("AnimationFactoryImageScaleUtil", "processAdjust", (void*) AnimationFactoryImageScaleUtil_processAdjust);
}

static void AnimationFactoryImageScaleUtil_initFields(AnimationFactoryImageScaleUtil* this) {
    this->imageScaleUtil = ImageJ2MEScaleUtil_getInstance();
}

void AnimationFactoryImageScaleUtil_init(AnimationFactoryImageScaleUtil* this) {
    AnimationFactoryImageScaleUtil_register();
    AnimationFactoryImageScaleUtil_initFields(this);
}

AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_new(void) {
    AnimationFactoryImageScaleUtil* this = java_object_alloc(sizeof(AnimationFactoryImageScaleUtil), "AnimationFactoryImageScaleUtil");
    AnimationFactoryImageScaleUtil_init(this);
    return this;
}


AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_getInstance(void) {
        return (AnimationFactoryImageScaleUtil_staticInit(), AnimationFactoryImageScaleUtil_instance);
}


// throws Exception
Image* AnimationFactoryImageScaleUtil_createImage(AnimationFactoryImageScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight) {
        Image* scaledImage = nullptr;
        if (scaleWidth != 0 && scaleHeight != 0) {
            float scaleX = (((float) scaleWidth)) / (((float) width));
            float scaleY = (((float) scaleHeight)) / (((float) height));
            if ((scaleX == 1.0f && scaleY == 1.0f) || (scaleX == 0.0f || scaleY == 0.0f)) {
                scaledImage = image;
            } else {
                int32_t scaledWidth = ((int32_t) (scaleX * ((float) width)));
                int32_t scaledHeight = ((int32_t) (scaleY * ((float) height)));
                scaledImage = ImageJ2MEScaleUtil_scale(this->imageScaleUtil, image, scaledWidth, scaledHeight);
            }
        } else {
            scaledImage = image;
        }
        return scaledImage;
}


// throws Exception
void AnimationFactoryImageScaleUtil_processAdjust(AnimationFactoryImageScaleUtil* this, BaseImageAnimationFactory* baseImageAnimationFactory) {
        ScaleProperties* scaleProperties = BaseImageAnimationFactory_getScalePropertiesP(baseImageAnimationFactory);
        if (scaleProperties->scaleWidth != 0 && scaleProperties->scaleHeight != 0) {
            AnimationFactoryInitializationVisitor* animationFactoryInitializationVisitor = BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP(baseImageAnimationFactory);
            float scaleX = (((float) scaleProperties->scaleWidth)) / (((float) animationFactoryInitializationVisitor->width));
            float scaleY = (((float) scaleProperties->scaleHeight)) / (((float) animationFactoryInitializationVisitor->height));
            if ((scaleX == 1.0f && scaleY == 1.0f) || (scaleX == 0.0f || scaleY == 0.0f)) {
            } else {
                animationFactoryInitializationVisitor->dx = ((int32_t) (((float) animationFactoryInitializationVisitor->originalDx) * scaleX));
                animationFactoryInitializationVisitor->dy = ((int32_t) (((float) animationFactoryInitializationVisitor->originalDy) * scaleY));
            }
        } else {
        }
}

