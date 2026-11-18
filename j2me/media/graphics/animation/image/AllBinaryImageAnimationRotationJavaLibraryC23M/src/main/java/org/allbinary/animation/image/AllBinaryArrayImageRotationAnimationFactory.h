#ifndef ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H
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
// package org.allbinary.animation.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct ImageArrayRotationAnimation ImageArrayRotationAnimation;
typedef struct AdjustedImageArrayRotationAnimation AdjustedImageArrayRotationAnimation;
typedef struct Image Image;
typedef struct NullImage NullImage;
typedef struct Animation Animation;
typedef struct AnimationBehaviorFactory AnimationBehaviorFactory;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct PrimitiveIntUtil PrimitiveIntUtil;
typedef struct AngleFactory AngleFactory;
typedef struct AngleInfo AngleInfo;
typedef struct ImageToRotationImageArrayUtil ImageToRotationImageArrayUtil;
#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif
#include "org/allbinary/animation/image/BaseImageAnimationFactory.h"

typedef struct AllBinaryArrayImageRotationAnimationFactory AllBinaryArrayImageRotationAnimationFactory;
struct AllBinaryArrayImageRotationAnimationFactory {
    BaseImageAnimationFactory base;
    Image** imageArray;
    int32_t angleIncrement;
};


AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);

AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactory(Image* image, int32_t dx, int32_t dy);

AllBinaryArrayImageRotationAnimationFactory* AllBinaryArrayImageRotationAnimationFactory_createFactoryA(Image* image, int32_t dx, int32_t dy, int32_t angleIncrement);

void AllBinaryArrayImageRotationAnimationFactory_init(AllBinaryArrayImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int32_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory);



Animation* AllBinaryArrayImageRotationAnimationFactory_getInstance(AllBinaryArrayImageRotationAnimationFactory* this, int32_t instanceId);

void AllBinaryArrayImageRotationAnimationFactory_setImageArray(AllBinaryArrayImageRotationAnimationFactory* this, Image** imageArray);

int32_t AllBinaryArrayImageRotationAnimationFactory_getAngleIncrement(AllBinaryArrayImageRotationAnimationFactory* this);
#define AllBinaryArrayImageRotationAnimationFactory_new5 AllBinaryArrayImageRotationAnimationFactory_new
#define AllBinaryArrayImageRotationAnimationFactory_init5 AllBinaryArrayImageRotationAnimationFactory_init
#ifndef AllBinaryArrayImageRotationAnimationFactory_createFactoryBase
#define AllBinaryArrayImageRotationAnimationFactory_createFactoryBase BaseImageAnimationFactory_createFactoryBase
#endif
#ifndef AllBinaryArrayImageRotationAnimationFactory_getImage
#define AllBinaryArrayImageRotationAnimationFactory_getImage BaseImageAnimationFactory_getImage
#endif
#ifndef AllBinaryArrayImageRotationAnimationFactory_getSequenceArray
#define AllBinaryArrayImageRotationAnimationFactory_getSequenceArray BaseImageAnimationFactory_getSequenceArray
#endif
#ifndef AllBinaryArrayImageRotationAnimationFactory_setInitialScale
#define AllBinaryArrayImageRotationAnimationFactory_setInitialScale BaseImageAnimationFactory_setInitialScale
#endif
#ifndef AllBinaryArrayImageRotationAnimationFactory_getAnimationFactoryInitializationVisitorP
#define AllBinaryArrayImageRotationAnimationFactory_getAnimationFactoryInitializationVisitorP BaseImageAnimationFactory_getAnimationFactoryInitializationVisitorP
#endif
#ifndef AllBinaryArrayImageRotationAnimationFactory_getScalePropertiesP
#define AllBinaryArrayImageRotationAnimationFactory_getScalePropertiesP BaseImageAnimationFactory_getScalePropertiesP
#endif
#ifndef AllBinaryArrayImageRotationAnimationFactory_toString
#define AllBinaryArrayImageRotationAnimationFactory_toString BaseImageAnimationFactory_toString
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AllBinaryArrayImageRotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AllBinaryArrayImageRotationAnimationFactory_register(void);

#if __has_include("org/allbinary/animation/Animation.h")
#include "org/allbinary/animation/Animation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_IMAGE_ALLBINARYARRAYIMAGEROTATIONANIMATIONFACTORY_H
