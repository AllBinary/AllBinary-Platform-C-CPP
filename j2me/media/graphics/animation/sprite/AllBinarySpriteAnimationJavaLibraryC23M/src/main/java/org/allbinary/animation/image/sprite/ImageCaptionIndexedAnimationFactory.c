// Generated Code Do Not Modify
#include "org/allbinary/animation/image/sprite/ImageCaptionIndexedAnimationFactory.h"
#include "javax/microedition/lcdui/Image.h"
#include "javax/microedition/lcdui/game/Sprite.h"
#include "javax/microedition/media/Player.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/caption/CaptionIndexedAnimation.h"
#include "org/allbinary/animation/image/ImageAnimation.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/audio/Sound.h"
#include "org/allbinary/animation/image/sprite/SpriteIndexedAnimation.h"
#if __has_include("org/allbinary/graphics/color/BasicColorUtil.h")
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#endif






void ImageCaptionIndexedAnimationFactory_staticInit(void) {
    static bool initialized = false;
    if (initialized) {
        return;
    }
    initialized = true;
}

void ImageCaptionIndexedAnimationFactory_register(void) {
    static bool registered = false;
    if (registered) {
        return;
    }
    registered = true;
    java_register_class("ImageCaptionIndexedAnimationFactory", nullptr);
    java_register_method("ImageCaptionIndexedAnimationFactory", "getInstance", (void*) ImageCaptionIndexedAnimationFactory_getInstance);
    java_register_method("ImageCaptionIndexedAnimationFactory", "setInitialScale", (void*) ImageCaptionIndexedAnimationFactory_setInitialScale);
}

static void ImageCaptionIndexedAnimationFactory_initFields(ImageCaptionIndexedAnimationFactory* this) {
    this->animationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil_getInstance();
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
    
    
    
    
    
    
    
    
    
    
    this->scaleProperties = (ScaleProperties_staticInit(), ScaleProperties_instance);
    
}


void ImageCaptionIndexedAnimationFactory_init(ImageCaptionIndexedAnimationFactory* this, Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageCaptionIndexedAnimationFactory_register();
    ImageCaptionIndexedAnimationFactory_initFields(this);
        if (animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
        this->captionImage = captionImage;
        this->spriteMovieImage = spriteMovieImage;
        this->frameWidth = frameWidth;
        this->frameHeight = frameHeight;
        this->captionDx = captionDx;
        this->captionDy = captionDy;
        this->dx = dx;
        this->dy = dy;
        this->time = time;
        this->soundInterface = soundInterface;
        this->animationBehaviorFactory = animationBehaviorFactory;
}

ImageCaptionIndexedAnimationFactory* ImageCaptionIndexedAnimationFactory_new(Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory) {
    ImageCaptionIndexedAnimationFactory* this = java_object_alloc(sizeof(ImageCaptionIndexedAnimationFactory), "ImageCaptionIndexedAnimationFactory");
    ImageCaptionIndexedAnimationFactory_init(this, captionImage, spriteMovieImage, soundInterface, frameWidth, frameHeight, captionDx, captionDy, dx, dy, time, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* ImageCaptionIndexedAnimationFactory_getInstance(ImageCaptionIndexedAnimationFactory* this, int32_t instanceId) {
        Image* scaledImage = AnimationFactoryImageScaleUtil_createImage(this->animationFactoryImageScaleUtil, this->captionImage, Image_getWidth(this->captionImage), Image_getHeight(this->captionImage), this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        Animation* animationInterface = ImageAnimation_new(scaledImage, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        Sprite* sprite = AnimationFactorySpriteScaleUtil_createImage(this->animationFactorySpriteScaleUtil, this->spriteMovieImage, this->frameWidth, this->frameHeight, this->scaleProperties->scaleWidth, this->scaleProperties->scaleHeight);
        IndexedAnimation* movieIndexedAnimationInterface = SpriteIndexedAnimation_new(sprite, this->spriteMovieImage, BasicColorUtil_getInstance()->ZERO_ARRAY, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
        Player* player = Sound_getPlayerP(this->soundInterface);
        if (player == nullptr) {
            java_throw(java_exception_new("Exception", "Sound Was not Initialized"));
        }
        return CaptionIndexedAnimation_new(animationInterface, movieIndexedAnimationInterface, player, this->captionDx, this->captionDy, this->dx, this->dy, this->time, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void ImageCaptionIndexedAnimationFactory_setInitialScale(ImageCaptionIndexedAnimationFactory* this, ScaleProperties* scaleProperties) {
        this->scaleProperties = scaleProperties;
}

