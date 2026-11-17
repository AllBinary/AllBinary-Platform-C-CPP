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
#include "org/allbinary/logic/util/cache/CacheableInterface.h"
#include "org/allbinary/logic/util/cache/CacheableInterfaceFactoryInterface.h"

typedef struct ImageArrayRotationAnimationCacheableInterfaceFactory ImageArrayRotationAnimationCacheableInterfaceFactory;
struct ImageArrayRotationAnimationCacheableInterfaceFactory {
    CacheableInterfaceFactoryInterface CacheableInterfaceFactoryInterface_interface;
};


ImageArrayRotationAnimationCacheableInterfaceFactory* ImageArrayRotationAnimationCacheableInterfaceFactory_new(void);
CacheableInterface* ImageArrayRotationAnimationCacheableInterfaceFactory_getInstance(ImageArrayRotationAnimationCacheableInterfaceFactory* this, Any* key);

void ImageArrayRotationAnimationCacheableInterfaceFactory_init(ImageArrayRotationAnimationCacheableInterfaceFactory* this) {
}

ImageArrayRotationAnimationCacheableInterfaceFactory* ImageArrayRotationAnimationCacheableInterfaceFactory_new(void) {
    ImageArrayRotationAnimationCacheableInterfaceFactory* this = calloc(1, sizeof(ImageArrayRotationAnimationCacheableInterfaceFactory));
    ImageArrayRotationAnimationCacheableInterfaceFactory_init(this);
    return this;
}


// throws Exception
CacheableInterface* ImageArrayRotationAnimationCacheableInterfaceFactory_getInstance(ImageArrayRotationAnimationCacheableInterfaceFactory* this, Any* key) {
        return ImageArrayRotationAnimationCacheable_new(key, AnimationBehavior_getInstance());
}

