#ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H
#define ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H
/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2022 AllBinary 
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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;
typedef struct AnimationFactoryInitializationVisitor AnimationFactoryInitializationVisitor;
typedef struct BaseImageAnimationFactory BaseImageAnimationFactory;
typedef struct ScaleProperties ScaleProperties;
typedef struct ImageJ2MEScaleUtil ImageJ2MEScaleUtil;
// #include "org/allbinary/logic/communication/log/LogUtil.h"
// #include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/media/image/ImageJ2MEScaleUtil.h")
#include "org/allbinary/media/image/ImageJ2MEScaleUtil.h"
#endif
// #include "org/allbinary/string/CommonLabels.h"
// #include "org/allbinary/string/CommonStrings.h"

typedef struct AnimationFactoryImageScaleUtil AnimationFactoryImageScaleUtil;
struct AnimationFactoryImageScaleUtil {
    ImageJ2MEScaleUtil* imageScaleUtil;
};


AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_new(void);
void AnimationFactoryImageScaleUtil_init(AnimationFactoryImageScaleUtil* this);

AnimationFactoryImageScaleUtil* AnimationFactoryImageScaleUtil_getInstance(void);

Image* AnimationFactoryImageScaleUtil_createImage(AnimationFactoryImageScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);

void AnimationFactoryImageScaleUtil_processAdjust(AnimationFactoryImageScaleUtil* this, BaseImageAnimationFactory* baseImageAnimationFactory);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationFactoryImageScaleUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationFactoryImageScaleUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_ANIMATIONFACTORYIMAGESCALEUTIL_H
