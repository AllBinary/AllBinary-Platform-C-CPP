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
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"

typedef struct AnimationInterfaceFactoryInterfaceComposite AnimationInterfaceFactoryInterfaceComposite;
struct AnimationInterfaceFactoryInterfaceComposite {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationInterfaceFactoryInterface** animationInterfaceFactoryInterfaceArray;
};


AnimationInterfaceFactoryInterfaceComposite* AnimationInterfaceFactoryInterfaceComposite_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

void AnimationInterfaceFactoryInterfaceComposite_init(AnimationInterfaceFactoryInterfaceComposite* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);
Animation* AnimationInterfaceFactoryInterfaceComposite_getInstance(AnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId);
AnimationInterfaceFactoryInterface** AnimationInterfaceFactoryInterfaceComposite_getAnimationInterfaceFactoryInterfaceArray(AnimationInterfaceFactoryInterfaceComposite* this);
void AnimationInterfaceFactoryInterfaceComposite_setInitialScale(AnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties);

static void AnimationInterfaceFactoryInterfaceComposite_initFields(AnimationInterfaceFactoryInterfaceComposite* this) {
    
}


void AnimationInterfaceFactoryInterfaceComposite_init(AnimationInterfaceFactoryInterfaceComposite* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    AnimationInterfaceFactoryInterfaceComposite_initFields(this);
        this->animationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
}

AnimationInterfaceFactoryInterfaceComposite* AnimationInterfaceFactoryInterfaceComposite_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray) {
    AnimationInterfaceFactoryInterfaceComposite* this = calloc(1, sizeof(AnimationInterfaceFactoryInterfaceComposite));
    AnimationInterfaceFactoryInterfaceComposite_init(this, basicAnimationInterfaceFactoryInterfaceArray);
    return this;
}


// throws Exception
Animation* AnimationInterfaceFactoryInterfaceComposite_getInstance(AnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId) {
        return JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
}


AnimationInterfaceFactoryInterface** AnimationInterfaceFactoryInterfaceComposite_getAnimationInterfaceFactoryInterfaceArray(AnimationInterfaceFactoryInterfaceComposite* this) {
        return this->animationInterfaceFactoryInterfaceArray;
}


void AnimationInterfaceFactoryInterfaceComposite_setInitialScale(AnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties) {
}

