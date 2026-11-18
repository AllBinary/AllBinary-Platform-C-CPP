#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_COLORCOMPOSITESPRITEINDEXEDANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_COLORCOMPOSITESPRITEINDEXEDANIMATIONFACTORY_H
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
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct BasicColor BasicColor;
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

typedef struct ColorCompositeSpriteIndexedAnimationFactory ColorCompositeSpriteIndexedAnimationFactory;
struct ColorCompositeSpriteIndexedAnimationFactory {
    BaseImageAnimationFactory base;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
    BasicColor** basicColorArray;
};


ColorCompositeSpriteIndexedAnimationFactory* ColorCompositeSpriteIndexedAnimationFactory_new(Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

void ColorCompositeSpriteIndexedAnimationFactory_init(ColorCompositeSpriteIndexedAnimationFactory* this, Image* image, BasicColor** basicColorArray, int32_t width, int32_t height, AnimationBehaviorFactory* animationBehaviorFactory);

Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstance(ColorCompositeSpriteIndexedAnimationFactory* this, int32_t instanceId);

Animation* ColorCompositeSpriteIndexedAnimationFactory_getInstanceAnimation(ColorCompositeSpriteIndexedAnimationFactory* this, Animation* animationInterface);
#define ColorCompositeSpriteIndexedAnimationFactory_new5 ColorCompositeSpriteIndexedAnimationFactory_new
#define ColorCompositeSpriteIndexedAnimationFactory_init5 ColorCompositeSpriteIndexedAnimationFactory_init
#ifndef ColorCompositeSpriteIndexedAnimationFactory_createFactoryBase
#define ColorCompositeSpriteIndexedAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef ColorCompositeSpriteIndexedAnimationFactory_getImage
#define ColorCompositeSpriteIndexedAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef ColorCompositeSpriteIndexedAnimationFactory_getSequenceArray
#define ColorCompositeSpriteIndexedAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef ColorCompositeSpriteIndexedAnimationFactory_setInitialScale
#define ColorCompositeSpriteIndexedAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef ColorCompositeSpriteIndexedAnimationFactory_getAnimationFactoryInitializationVisitorP
#define ColorCompositeSpriteIndexedAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef ColorCompositeSpriteIndexedAnimationFactory_getScalePropertiesP
#define ColorCompositeSpriteIndexedAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef ColorCompositeSpriteIndexedAnimationFactory_toString
#define ColorCompositeSpriteIndexedAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ColorCompositeSpriteIndexedAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void ColorCompositeSpriteIndexedAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_COLORCOMPOSITESPRITEINDEXEDANIMATIONFACTORY_H
