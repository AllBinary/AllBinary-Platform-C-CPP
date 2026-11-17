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
// #include "javax/microedition/lcdui/Image.h"
// #include "javax/microedition/lcdui/game/Sprite.h"
#include "org/allbinary/game/layer/SpriteFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLUtil.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/image/opengles/OpenGLESImageExclusionUtil.h"
#include "org/allbinary/logic/communication/log/LogUtil.h"
#include "org/allbinary/logic/math/J2SEMath.h"
#include "org/allbinary/logic/string/StringMaker.h"
#include "org/allbinary/media/image/ImageScaleUtil.h"
#include "org/allbinary/string/CommonLabels.h"
#include "org/allbinary/string/CommonStrings.h"

typedef struct AnimationFactorySpriteScaleUtil AnimationFactorySpriteScaleUtil;
struct AnimationFactorySpriteScaleUtil {
    ImageCache* imageCache;
    ImageScaleUtil* imageScaleUtil;
    OpenGLUtil* openGLUtil;
    J2SEMath* j2seMath;
    OpenGLESImageExclusionUtil* openGLESImageExclusionUtil;
};

static AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_instance;

AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_new(void);
AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_getInstance(void);
Sprite* AnimationFactorySpriteScaleUtil_createImage(AnimationFactorySpriteScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight);

// Static fields with runtime initializers: call this once at startup
void AnimationFactorySpriteScaleUtil_staticInit(void) {
    AnimationFactorySpriteScaleUtil_instance = AnimationFactorySpriteScaleUtil_new();
}

static void AnimationFactorySpriteScaleUtil_initFields(AnimationFactorySpriteScaleUtil* this) {
    this->imageCache = ImageCacheFactory_getInstance();
    this->imageScaleUtil = ImageScaleUtil_getInstance();
    this->openGLUtil = OpenGLUtil_getInstance();
    this->j2seMath = J2SEMath_getInstance();
    this->openGLESImageExclusionUtil = OpenGLESImageExclusionUtil_getInstance();
}

void AnimationFactorySpriteScaleUtil_init(AnimationFactorySpriteScaleUtil* this) {
    AnimationFactorySpriteScaleUtil_initFields(this);
}

AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_new(void) {
    AnimationFactorySpriteScaleUtil* this = calloc(1, sizeof(AnimationFactorySpriteScaleUtil));
    AnimationFactorySpriteScaleUtil_init(this);
    return this;
}


AnimationFactorySpriteScaleUtil* AnimationFactorySpriteScaleUtil_getInstance(void) {
        return AnimationFactorySpriteScaleUtil_instance;
}


// throws Exception
Sprite* AnimationFactorySpriteScaleUtil_createImage(AnimationFactorySpriteScaleUtil* this, Image* image, int32_t width, int32_t height, int32_t scaleWidth, int32_t scaleHeight) {
        SpriteFactory* spriteFactory = SpriteFactory_getInstance();
        Sprite* sprite = nullptr;
        Image* scaledImage = nullptr;
        if (scaleWidth != 0 && scaleHeight != 0) {
            float scaleX = (((float) scaleWidth)) / (((float) width));
            float scaleY = (((float) scaleHeight)) / (((float) height));
            if ((scaleX == 1.0f && scaleY == 1.0f) || (scaleX == 0.0f || scaleY == 0.0f)) {
                scaledImage = OpenGLUtil_addImage(this->openGLUtil, image);
                sprite = SpriteFactory_createSprite(spriteFactory, scaledImage, width, height);
            } else {
                if (OpenGLESImageExclusionUtil_isCustomScaling(this->openGLESImageExclusionUtil, image)) {
                    int32_t width2 = J2SEMath_round(this->j2seMath, ((float) (scaleWidth)) - 0.5f);
                    int32_t height2 = J2SEMath_round(this->j2seMath, ((float) (scaleHeight)) - 0.5f);
                    int32_t multiplesOf16Width = width2 / 16;
                    int32_t by16Width = multiplesOf16Width * 16;
                    scaleX = (((float) by16Width)) / ((float) width);
                    int32_t multiplesOf16Height = height2 / 16;
                    int32_t by16Height = multiplesOf16Height * 16;
                    scaleY = (((float) by16Height)) / ((float) height);
                    if (scaleWidth < width) {
                        scaleX = scaleX * 2.35f;
                    }
                    if (scaleHeight < height) {
                        scaleY = scaleY * 2.35f;
                    }
                }
                scaledImage = ImageScaleUtil_createImage2(this->imageScaleUtil, this->imageCache, image, scaleX, 1.0f, scaleY, 1.0f, true);
                sprite = SpriteFactory_createSprite(spriteFactory, scaledImage, ((int32_t) (((float) width) * scaleX)), ((int32_t) (((float) height) * scaleY)));
            }
        } else {
            scaledImage = OpenGLUtil_addImage(this->openGLUtil, image);
            sprite = SpriteFactory_createSprite(spriteFactory, scaledImage, width, height);
        }
        return sprite;
}

