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
// package org.allbinary.animation

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/special/SpecialAnimation.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct NullSpecialAnimationFactory NullSpecialAnimationFactory;
struct NullSpecialAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
};

static NullSpecialAnimationFactory* NullSpecialAnimationFactory_NULL_SPECIAL_ANIMATION_FACTORY;

NullSpecialAnimationFactory* NullSpecialAnimationFactory_new(void);

void NullSpecialAnimationFactory_init(NullSpecialAnimationFactory* this);
NullSpecialAnimationFactory* NullSpecialAnimationFactory_getFactoryInstance(void);
Animation* NullSpecialAnimationFactory_getInstance(NullSpecialAnimationFactory* this, int32_t instanceId);
Animation* NullSpecialAnimationFactory_getInstanceAnimation(NullSpecialAnimationFactory* this, Animation* animationInterface);
void NullSpecialAnimationFactory_setInitialScale(NullSpecialAnimationFactory* this, ScaleProperties* scaleProperties);

// Static fields with runtime initializers: call this once at startup
void NullSpecialAnimationFactory_staticInit(void) {
    NullSpecialAnimationFactory_NULL_SPECIAL_ANIMATION_FACTORY = NullSpecialAnimationFactory_new();
}


void NullSpecialAnimationFactory_init(NullSpecialAnimationFactory* this) {
}

NullSpecialAnimationFactory* NullSpecialAnimationFactory_new(void) {
    NullSpecialAnimationFactory* this = calloc(1, sizeof(NullSpecialAnimationFactory));
    NullSpecialAnimationFactory_init(this);
    return this;
}


NullSpecialAnimationFactory* NullSpecialAnimationFactory_getFactoryInstance(void) {
        return NullSpecialAnimationFactory_NULL_SPECIAL_ANIMATION_FACTORY;
}


// throws Exception
Animation* NullSpecialAnimationFactory_getInstance(NullSpecialAnimationFactory* this, int32_t instanceId) {
        return SpecialAnimation_getInstance();
}


// throws Exception
Animation* NullSpecialAnimationFactory_getInstanceAnimation(NullSpecialAnimationFactory* this, Animation* animationInterface) {
        return SpecialAnimation_getInstance();
}


void NullSpecialAnimationFactory_setInitialScale(NullSpecialAnimationFactory* this, ScaleProperties* scaleProperties) {
}

