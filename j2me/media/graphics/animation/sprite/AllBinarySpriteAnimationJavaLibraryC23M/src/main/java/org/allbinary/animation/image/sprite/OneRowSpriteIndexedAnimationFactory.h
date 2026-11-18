#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_H
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
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct BasicColorUtil BasicColorUtil;
typedef struct AnimationFactorySpriteScaleUtil AnimationFactorySpriteScaleUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#if __has_include("org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h")
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#endif

typedef struct OneRowSpriteIndexedAnimationFactory OneRowSpriteIndexedAnimationFactory;
struct OneRowSpriteIndexedAnimationFactory {
    BaseImageAnimationFactory base;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
};


OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryDX(Image* image, int32_t dx, AnimationBehaviorFactory* animationBehaviorFactory);

OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactoryWH(Image* image, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

OneRowSpriteIndexedAnimationFactory* OneRowSpriteIndexedAnimationFactory_createFactory(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void OneRowSpriteIndexedAnimationFactory_init(OneRowSpriteIndexedAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void OneRowSpriteIndexedAnimationFactory_initMethod(OneRowSpriteIndexedAnimationFactory* this, int32_t dx, int32_t dy);

void OneRowSpriteIndexedAnimationFactory_initW(OneRowSpriteIndexedAnimationFactory* this, int32_t dx);

Animation* OneRowSpriteIndexedAnimationFactory_getInstance(OneRowSpriteIndexedAnimationFactory* this, int32_t instanceId);
#define OneRowSpriteIndexedAnimationFactory_new7 OneRowSpriteIndexedAnimationFactory_new
#define OneRowSpriteIndexedAnimationFactory_init7 OneRowSpriteIndexedAnimationFactory_init
#ifndef OneRowSpriteIndexedAnimationFactory_createFactoryBase
#define OneRowSpriteIndexedAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef OneRowSpriteIndexedAnimationFactory_getImage
#define OneRowSpriteIndexedAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef OneRowSpriteIndexedAnimationFactory_getSequenceArray
#define OneRowSpriteIndexedAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef OneRowSpriteIndexedAnimationFactory_setInitialScale
#define OneRowSpriteIndexedAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef OneRowSpriteIndexedAnimationFactory_getAnimationFactoryInitializationVisitorP
#define OneRowSpriteIndexedAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef OneRowSpriteIndexedAnimationFactory_getScalePropertiesP
#define OneRowSpriteIndexedAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef OneRowSpriteIndexedAnimationFactory_toString
#define OneRowSpriteIndexedAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void OneRowSpriteIndexedAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void OneRowSpriteIndexedAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ONEROWSPRITEINDEXEDANIMATIONFACTORY_H
