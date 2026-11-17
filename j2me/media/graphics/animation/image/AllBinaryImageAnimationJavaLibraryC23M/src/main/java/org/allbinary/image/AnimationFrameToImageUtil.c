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
// #include "javax/microedition/lcdui/Graphics.h"
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/Animation.h"

typedef struct AnimationFrameToImageUtil AnimationFrameToImageUtil;
struct AnimationFrameToImageUtil {
    char unused;
};

static AnimationFrameToImageUtil* AnimationFrameToImageUtil_instance;

AnimationFrameToImageUtil* AnimationFrameToImageUtil_new(void);
AnimationFrameToImageUtil* AnimationFrameToImageUtil_getInstance(void);
Image* AnimationFrameToImageUtil_getInstanceTranslate(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface);
Image* AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface);

// Static fields with runtime initializers: call this once at startup
void AnimationFrameToImageUtil_staticInit(void) {
    AnimationFrameToImageUtil_instance = AnimationFrameToImageUtil_new();
}

void AnimationFrameToImageUtil_init(AnimationFrameToImageUtil* this) {
}

AnimationFrameToImageUtil* AnimationFrameToImageUtil_new(void) {
    AnimationFrameToImageUtil* this = calloc(1, sizeof(AnimationFrameToImageUtil));
    AnimationFrameToImageUtil_init(this);
    return this;
}


AnimationFrameToImageUtil* AnimationFrameToImageUtil_getInstance(void) {
        return AnimationFrameToImageUtil_instance;
}


// throws Exception
Image* AnimationFrameToImageUtil_getInstanceTranslate(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface) {
        Image* image = GameFeatureImageCacheFactory_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(AnimationFrameToImageUtil_instance), ((width * 3) >> 1), ((height * 3) >> 1));
        Graphics* graphics = Image_getGraphics(image);
        int32_t tranlateX = (width >> 2);
        int32_t tranlateY = (height >> 2);
        Graphics_translate(graphics, tranlateX, tranlateY);
        Animation_paintXY(animationInterface, graphics, 0, 0);
        Graphics_translate(graphics, -tranlateX, -tranlateY);
        return image;
}


// throws Exception
Image* AnimationFrameToImageUtil_getInstanceWH(AnimationFrameToImageUtil* this, int32_t width, int32_t height, Animation* animationInterface) {
        Image* image = GameFeatureImageCacheFactory_get(GameFeatureImageCacheFactory_getInstance(), java_class_of(AnimationFrameToImageUtil_instance), width, height);
        Graphics* graphics = Image_getGraphics(image);
        Animation_paintXY(animationInterface, graphics, 0, 0);
        return image;
}

