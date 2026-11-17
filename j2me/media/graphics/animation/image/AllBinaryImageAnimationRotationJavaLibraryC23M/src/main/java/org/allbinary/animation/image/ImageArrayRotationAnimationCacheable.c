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
#include "org/allbinary/animation/AnimationBehavior.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/logic/string/StringUtil.h"
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/animation/image/AdjustedImageArrayRotationAnimation.h"

typedef struct ImageArrayRotationAnimationCacheable ImageArrayRotationAnimationCacheable;
struct ImageArrayRotationAnimationCacheable {
    AdjustedImageArrayRotationAnimation base;
    CacheableInterface CacheableInterface_interface;
};


ImageArrayRotationAnimationCacheable* ImageArrayRotationAnimationCacheable_new(Any* anyType, AnimationBehavior* animationBehavior);

void ImageArrayRotationAnimationCacheable_init(ImageArrayRotationAnimationCacheable* this, Any* anyType, AnimationBehavior* animationBehavior);
Any* ImageArrayRotationAnimationCacheable_getKey(ImageArrayRotationAnimationCacheable* this);
const char* ImageArrayRotationAnimationCacheable_toString(ImageArrayRotationAnimationCacheable* this);


void ImageArrayRotationAnimationCacheable_init(ImageArrayRotationAnimationCacheable* this, Any* anyType, AnimationBehavior* animationBehavior) {
        AdjustedImageArrayRotationAnimation_init(&this->base, ImageArrayRotationAnimationInfo_getImageArray((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getAngleInfoP((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getTotalAngle((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getDx((((ImageArrayRotationAnimationInfo*) anyType))), ImageArrayRotationAnimationInfo_getDy((((ImageArrayRotationAnimationInfo*) anyType))), animationBehavior);
}

ImageArrayRotationAnimationCacheable* ImageArrayRotationAnimationCacheable_new(Any* anyType, AnimationBehavior* animationBehavior) {
    ImageArrayRotationAnimationCacheable* this = calloc(1, sizeof(ImageArrayRotationAnimationCacheable));
    ImageArrayRotationAnimationCacheable_init(this, anyType, animationBehavior);
    return this;
}


Any* ImageArrayRotationAnimationCacheable_getKey(ImageArrayRotationAnimationCacheable* this) {
        return NullUtil_getInstance()->NULL_OBJECT;
}


const char* ImageArrayRotationAnimationCacheable_toString(ImageArrayRotationAnimationCacheable* this) {
        return StringUtil_getInstance()->EMPTY_STRING;
}

