/*
 * 
 * AllBinary Open License Version 1 
 * Copyright (c) 2025 AllBinary 
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
// #include "javax/microedition/lcdui/Image.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/image/AllBinaryJ2SEImageRotationAnimationFactory.h"

typedef struct AllBinaryPlatformImageRotationAnimationFactory AllBinaryPlatformImageRotationAnimationFactory;
struct AllBinaryPlatformImageRotationAnimationFactory {
    AllBinaryJ2SEImageRotationAnimationFactory base;
};


AllBinaryPlatformImageRotationAnimationFactory* AllBinaryPlatformImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);

void AllBinaryPlatformImageRotationAnimationFactory_init(AllBinaryPlatformImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation);


void AllBinaryPlatformImageRotationAnimationFactory_init(AllBinaryPlatformImageRotationAnimationFactory* this, Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
        AllBinaryJ2SEImageRotationAnimationFactory_init(&this->base, image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);
}

AllBinaryPlatformImageRotationAnimationFactory* AllBinaryPlatformImageRotationAnimationFactory_new(Image* image, int32_t width, int32_t height, int16_t angleIncrement, AnimationBehaviorFactory* animationBehaviorFactory, bool resizeCanvasForRotation) {
    AllBinaryPlatformImageRotationAnimationFactory* this = calloc(1, sizeof(AllBinaryPlatformImageRotationAnimationFactory));
    AllBinaryPlatformImageRotationAnimationFactory_init(this, image, width, height, angleIncrement, animationBehaviorFactory, resizeCanvasForRotation);
    return this;
}

