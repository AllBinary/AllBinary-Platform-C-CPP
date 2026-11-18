#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H
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
typedef struct AdjustedSpriteIndexedAnimation AdjustedSpriteIndexedAnimation;
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct AndroidUtil AndroidUtil;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct BasicColor BasicColor;
typedef struct BasicColorUtil BasicColorUtil;
typedef struct AnimationFactorySpriteScaleUtil AnimationFactorySpriteScaleUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#if __has_include("org/allbinary/graphics/color/BasicColor.h")
#include "org/allbinary/graphics/color/BasicColor.h"
#endif
#if __has_include("org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h")
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#endif

typedef struct SpriteIndexedAnimationFactory SpriteIndexedAnimationFactory;
struct SpriteIndexedAnimationFactory {
    BaseImageAnimationFactory base;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
    BasicColor** basicColorArray;
};


SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createCWHDXY(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createCWH(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

SpriteIndexedAnimationFactory* SpriteIndexedAnimationFactory_createWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

void SpriteIndexedAnimationFactory_init(SpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);


Animation* SpriteIndexedAnimationFactory_getInstance(SpriteIndexedAnimationFactory* this, int32_t instanceId);

Animation* SpriteIndexedAnimationFactory_getInstanceAnimation(SpriteIndexedAnimationFactory* this, Animation* animationInterface);
#define SpriteIndexedAnimationFactory_new8 SpriteIndexedAnimationFactory_new
#define SpriteIndexedAnimationFactory_init8 SpriteIndexedAnimationFactory_init
#ifndef SpriteIndexedAnimationFactory_createFactoryBase
#define SpriteIndexedAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef SpriteIndexedAnimationFactory_getImage
#define SpriteIndexedAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef SpriteIndexedAnimationFactory_getSequenceArray
#define SpriteIndexedAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef SpriteIndexedAnimationFactory_setInitialScale
#define SpriteIndexedAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef SpriteIndexedAnimationFactory_getAnimationFactoryInitializationVisitorP
#define SpriteIndexedAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef SpriteIndexedAnimationFactory_getScalePropertiesP
#define SpriteIndexedAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef SpriteIndexedAnimationFactory_toString
#define SpriteIndexedAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpriteIndexedAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void SpriteIndexedAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_SPRITEINDEXEDANIMATIONFACTORY_H
