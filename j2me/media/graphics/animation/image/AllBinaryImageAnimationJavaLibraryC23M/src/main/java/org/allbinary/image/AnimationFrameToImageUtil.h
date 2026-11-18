#ifndef ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H
#define ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H
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
// package org.allbinary.image

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct GameFeatureImageCacheFactory GameFeatureImageCacheFactory;
typedef struct Graphics Graphics;
typedef struct Image Image;
typedef struct Animation Animation;

typedef struct AnimationFrameToImageUtil AnimationFrameToImageUtil;
struct AnimationFrameToImageUtil {
    char unused;
};


AnimationFrameToImageUtil* AnimationFrameToImageUtil_new(void);
void AnimationFrameToImageUtil_init(AnimationFrameToImageUtil* this);

AnimationFrameToImageUtil* AnimationFrameToImageUtil_getInstance(void);

Image* AnimationFrameToImageUtil_getInstanceTranslate(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface);

Image* AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationFrameToImageUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationFrameToImageUtil_register(void);

#if __has_include("javax/microedition/lcdui/Image.h")
#include "javax/microedition/lcdui/Image.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_ANIMATIONFRAMETOIMAGEUTIL_H
