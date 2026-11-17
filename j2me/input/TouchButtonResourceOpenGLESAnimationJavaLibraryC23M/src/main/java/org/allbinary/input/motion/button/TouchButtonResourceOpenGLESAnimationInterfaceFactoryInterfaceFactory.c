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
#include "org/allbinary/game/configuration/feature/Features.h"
#include "org/allbinary/graphics/opengles/OpenGLFeatureFactory.h"
#include "org/allbinary/image/opengles/OpenGLImageCacheFactory.h"
#include "org/allbinary/input/motion/button/TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory.h"

typedef struct TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory;
struct TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory {
    TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory base;
};


TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_new(void);

void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this);
void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this, int32_t level);
bool TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this);


void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this) {
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_init(&this->base, "OpenGL TouchButton Animations");
}

TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_new(void) {
    TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this = calloc(1, sizeof(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory));
    TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(this);
    return this;
}


// throws Exception
void TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_init(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this, int32_t level) {
        TouchButtonResourceAnimationInterfaceFactoryInterfaceFactory_initImageCache((&this->base), OpenGLImageCacheFactory_getInstance(), level);
}


bool TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory_isFeature(TouchButtonResourceOpenGLESAnimationInterfaceFactoryInterfaceFactory* this) {
        if (Features_isDefault(Features_getInstance(), OpenGLFeatureFactory_getInstance()->OPENGL)) {
            return true;
        } else {
            return false;
        }
}

