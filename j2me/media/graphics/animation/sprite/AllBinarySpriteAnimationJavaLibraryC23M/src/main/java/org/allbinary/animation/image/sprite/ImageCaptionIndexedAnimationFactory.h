#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H
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
typedef struct SpriteIndexedAnimation SpriteIndexedAnimation;
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct Player Player;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct IndexedAnimation IndexedAnimation;
typedef struct CaptionIndexedAnimation CaptionIndexedAnimation;
typedef struct ImageAnimation ImageAnimation;
typedef struct BasicColorUtil BasicColorUtil;
typedef struct AnimationFactoryImageScaleUtil AnimationFactoryImageScaleUtil;
typedef struct AnimationFactorySpriteScaleUtil AnimationFactorySpriteScaleUtil;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct ScaleProperties ScaleProperties;
typedef struct Sound Sound;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#if __has_include("org/allbinary/animation/AnimationBehaviorFactory.h")
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#endif
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/image/AnimationFactoryImageScaleUtil.h")
#include "org/allbinary/image/AnimationFactoryImageScaleUtil.h"
#endif
#if __has_include("org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h")
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#endif
#if __has_include("org/allbinary/media/ScaleProperties.h")
#include "org/allbinary/media/ScaleProperties.h"
#endif
#if __has_include("org/allbinary/media/audio/Sound.h")
#include "org/allbinary/media/audio/Sound.h"
#endif

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
#define ImageCaptionIndexedAnimationFactory_new11 ImageCaptionIndexedAnimationFactory_new
#define ImageCaptionIndexedAnimationFactory_init11 ImageCaptionIndexedAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ImageCaptionIndexedAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ImageCaptionIndexedAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_IMAGECAPTIONINDEXEDANIMATIONFACTORY_H
