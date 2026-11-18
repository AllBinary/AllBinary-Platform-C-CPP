#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATIONFACTORY_H
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
typedef struct AllBinarySpriteRotationAnimation AllBinarySpriteRotationAnimation;
typedef struct AllBinaryAdjustedSpriteRotationAnimation AllBinaryAdjustedSpriteRotationAnimation;
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct AnimationFactorySpriteScaleUtil AnimationFactorySpriteScaleUtil;
typedef struct ForcedLogUtil ForcedLogUtil;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"
#if __has_include("org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h")
#include "org/allbinary/image/sprite/AnimationFactorySpriteScaleUtil.h"
#endif

typedef struct AllBinarySpriteRotationAnimationFactory AllBinarySpriteRotationAnimationFactory;
struct AllBinarySpriteRotationAnimationFactory {
    BaseImageAnimationFactory base;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    AnimationFactorySpriteScaleUtil* animationFactorySpriteScaleUtil;
};


AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_new(Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWHDY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWH(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXY(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createDXYQ(Image* image, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createQ(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinarySpriteRotationAnimationFactory* AllBinarySpriteRotationAnimationFactory_createWHF(Image* image, AnimationBehaviorFactory* animationBehaviorFactory);

void AllBinarySpriteRotationAnimationFactory_init(AllBinarySpriteRotationAnimationFactory* this, Image* image, int32_t* sequenceArray, int32_t width, int32_t height, int32_t dx, int32_t dy, AnimationBehaviorFactory* animationBehaviorFactory);

void AllBinarySpriteRotationAnimationFactory_initMethod(AllBinarySpriteRotationAnimationFactory* this, int32_t dx, int32_t dy);


Animation* AllBinarySpriteRotationAnimationFactory_getInstance(AllBinarySpriteRotationAnimationFactory* this, int32_t instanceId);

Animation* AllBinarySpriteRotationAnimationFactory_getInstanceAnimation(AllBinarySpriteRotationAnimationFactory* this, Animation* animationInterface);
#define AllBinarySpriteRotationAnimationFactory_new7 AllBinarySpriteRotationAnimationFactory_new
#define AllBinarySpriteRotationAnimationFactory_init7 AllBinarySpriteRotationAnimationFactory_init
#ifndef AllBinarySpriteRotationAnimationFactory_createFactoryBase
#define AllBinarySpriteRotationAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef AllBinarySpriteRotationAnimationFactory_getImage
#define AllBinarySpriteRotationAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef AllBinarySpriteRotationAnimationFactory_getSequenceArray
#define AllBinarySpriteRotationAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef AllBinarySpriteRotationAnimationFactory_setInitialScale
#define AllBinarySpriteRotationAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef AllBinarySpriteRotationAnimationFactory_getAnimationFactoryInitializationVisitorP
#define AllBinarySpriteRotationAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef AllBinarySpriteRotationAnimationFactory_getScalePropertiesP
#define AllBinarySpriteRotationAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef AllBinarySpriteRotationAnimationFactory_toString
#define AllBinarySpriteRotationAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinarySpriteRotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinarySpriteRotationAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_SPRITE_ALLBINARYSPRITEROTATIONANIMATIONFACTORY_H
