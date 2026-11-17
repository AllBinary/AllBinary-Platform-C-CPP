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
// package org.allbinary.input.motion.button

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/resource/BaseResourceAnimationInterfaceFactoryInterfaceFactory.h"
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/game/resource/ResourceLoadingLevelFactory.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/ImageCache.h"
#include "org/allbinary/image/ImageCacheFactory.h"
#include "org/allbinary/logic/StdUtil.h"

typedef struct TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory;
struct TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory {
    BaseResourceAnimationInterfaceFactoryInterfaceFactory base;
};


TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name);
TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_createFactory(void);

void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name);
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level);
bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);
bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this);


TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_createFactory(void) {
        return TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new("TouchButton Animations");
}


void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, const char* name) {
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_init(&this->base, name, StdUtil_createHashtable(StdUtil_getInstance()), StdUtil_createHashtable(StdUtil_getInstance()), StdUtil_createHashtable(StdUtil_getInstance()));
}

TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_new(const char* name) {
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this = calloc(1, sizeof(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory));
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(this, name);
    return this;
}


// throws Exception
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(this, ImageCacheFactory_getInstance(), level);
}


// throws Exception
void TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, ImageCache* imageCache, int32_t level) {
        if (TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isInitialized(this)) {
            return;
        }
        BaseResourceAnimationInterfaceFactoryInterfaceFactory_init((&this->base), level);
}


bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        ResourceLoadingLevelFactory* resourceLoadingLevelFactory = ResourceLoadingLevelFactory_getInstance();
        if (level == JAVA_CALL(resourceLoadingLevelFactory->LOAD_TOUCH, getLevel)) {
            return true;
        } else {
            return BaseResourceAnimationInterfaceFactoryInterfaceFactory_isLoadingLevel((&this->base), level);
        }
}


bool TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory* this) {
        if (!Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return true;
        } else {
            return false;
        }
}

