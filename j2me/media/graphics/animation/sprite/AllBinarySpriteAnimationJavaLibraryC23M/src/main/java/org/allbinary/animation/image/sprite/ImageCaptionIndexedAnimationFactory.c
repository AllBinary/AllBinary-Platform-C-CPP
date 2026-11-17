/*
 *
 * AllBinary Open License Version 1
 * Copyright (c) 2011 AllBinary
 * 
 * By agreeing to this license you and any business entity you represent are
 * legally bound to the AllBinary Open License Version 1 legal agreement.
 * 
 * You may obtain the AllBinary Open License Version 1 legal agreement from
 * AllBinary or the root directory of AllBinary's AllBinary Platform repository.
 * 
 * Created By: Travis Berthelot
 *   
 */
// Generated Code Do Not Modify
// package org.allbinary.animation.image.sprite

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/game/Sprite.h"
// #include "javax/microedition/media/Player.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/animation/caption/CaptionIndexedAnimation.h"
#include "org/allbinary/animation/image/ImageAnimation.h"
#include "org/allbinary/graphics/color/BasicColorUtil.h"
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/media/audio/Sound.h"

typedef struct ImageCaptionIndexedAnimationFactory ImageCaptionIndexedAnimationFactory;
struct ImageCaptionIndexedAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationFactoryImageScaleUtil* animationFactoryImageScaleUtil;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
    Image* captionImage;
    Image* spriteMovieImage;
    int32_t frameWidth;
    int32_t frameHeight;
    int32_t captionDx;
    int32_t captionDy;
    int32_t dx;
    int32_t dy;
    int32_t time;
    Sound* soundInterface;
    ScaleProperties* scaleProperties;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


ImageCaptionIndexedAnimationFactory* ImageCaptionIndexedAnimationFactory_new(Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory);

void ImageCaptionIndexedAnimationFactory_init(ImageCaptionIndexedAnimationFactory* this, Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* ImageCaptionIndexedAnimationFactory_getInstance(ImageCaptionIndexedAnimationFactory* this, int32_t instanceId);
void ImageCaptionIndexedAnimationFactory_setInitialScale(ImageCaptionIndexedAnimationFactory* this, ScaleProperties* scaleProperties);

static void ImageCaptionIndexedAnimationFactory_initFields(ImageCaptionIndexedAnimationFactory* this) {
    this->animationFactoryImageScaleUtil = AnimationFactoryImageScaleUtil_getInstance();
    this->animationFactorySpriteScaleUtil = AnimationFactorySpriteScaleUtil_getInstance();
    
    
    
    
    
    
    
    
    
    
    this->scaleProperties = ScaleProperties_instance;
    
}


void ImageCaptionIndexedAnimationFactory_init(ImageCaptionIndexedAnimationFactory* this, Image* captionImage, Image* spriteMovieImage, Sound* soundInterface, int32_t frameWidth, int32_t frameHeight, int32_t captionDx, int32_t captionDy, int32_t dx, int32_t dy, int32_t time, AnimationBehaviorFactory* animationBehaviorFactory) {
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
    ImageCaptionIndexedAnimationFactory* this = calloc(1, sizeof(ImageCaptionIndexedAnimationFactory));
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

