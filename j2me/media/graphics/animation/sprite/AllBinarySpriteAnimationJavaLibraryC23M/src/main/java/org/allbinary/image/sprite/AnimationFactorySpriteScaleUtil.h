#ifndef ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H
#define ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H
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
// package org.allbinary.image.sprite

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Image Image;
typedef struct Sprite Sprite;
typedef struct SpriteFactory SpriteFactory;
typedef struct OpenGLUtil OpenGLUtil;
typedef struct ImageCache ImageCache;
typedef struct ImageCacheFactory ImageCacheFactory;
typedef struct OpenGLESImageExclusionUtil OpenGLESImageExclusionUtil;
typedef struct J2SEMath J2SEMath;
typedef struct ImageScaleUtil ImageScaleUtil;
#if __has_include("org/allbinary/graphics/opengles/OpenGLUtil.h")
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#endif
#if __has_include("org/allbinary/image/ImageCache.h")
#include "org/allbinary/image/ImageCache.h"
#endif
#if __has_include("org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h")
#include "org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h"
#endif
// #include "org/allbinary/logic/communication/log/LogUtil.h"
#if __has_include("org/allbinary/logic/math/J2SEMath.h")
#include "org/allbinary/logic/math/J2SEMath.h"
#endif
// #include "org/allbinary/logic/string/StringMaker.h"
#if __has_include("org/allbinary/media/image/ImageScaleUtil.h")
#include "org/allbinary/media/image/ImageScaleUtil.h"
#endif
// #include "org/allbinary/string/CommonLabels.h"
// #include "org/allbinary/string/CommonStrings.h"

typedef struct AnimationFactorySpriteScaleUtil AnimationFactorySpriteScaleUtil;
struct AnimationFactorySpriteScaleUtil {
    ImageCache* imageCache;
    ImageScaleUtil* imageScaleUtil;
    OpenGLUtil* openGLUtil;
    J2SEMath* j2seMath;
    OpenGLESImageExclusionUtil* openGLESImageExclusionUtil;
};


AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_new(void);
void AnimationFactorySpriteScaleUtil_init(AnimationFactorySpriteScaleUtil* this);

AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_getInstance(void);

Sprite* AnimationFactorySpriteScaleUtil_createImage(AnimationFactorySpriteScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationFactorySpriteScaleUtil_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationFactorySpriteScaleUtil_register(void);

#if __has_include("javax/microedition/lcdui/game/Sprite.h")
#include "javax/microedition/lcdui/game/Sprite.h"
#endif

#endif // ORG_ALLBINARY_IMAGE_SPRITE_ANIMATIONFACTORYSPRITESCALEUTIL_H
