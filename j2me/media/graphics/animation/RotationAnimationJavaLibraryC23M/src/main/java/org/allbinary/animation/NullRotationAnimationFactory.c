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
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct NullRotationAnimationFactory NullRotationAnimationFactory;
struct NullRotationAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    RotationAnimation** NULL_ROTATION_ANIMATION_ARRAY;
    Animation* NULL_ANIMATION;
};

static NullRotationAnimationFactory* NullRotationAnimationFactory_NULL_ROTATION_ANIMATION_FACTORY;

NullRotationAnimationFactory* NullRotationAnimationFactory_new(void);

void NullRotationAnimationFactory_init(NullRotationAnimationFactory* this);
NullRotationAnimationFactory* NullRotationAnimationFactory_getFactoryInstance(void);
Animation* NullRotationAnimationFactory_getInstance(NullRotationAnimationFactory* this, int32_t instanceId);
Animation* NullRotationAnimationFactory_getInstanceAnimation(NullRotationAnimationFactory* this, Animation* animationInterface);
void NullRotationAnimationFactory_setInitialScale(NullRotationAnimationFactory* this, ScaleProperties* scaleProperties);

// Static fields with runtime initializers: call this once at startup
void NullRotationAnimationFactory_staticInit(void) {
    NullRotationAnimationFactory_NULL_ROTATION_ANIMATION_FACTORY = NullRotationAnimationFactory_new();
}

static void NullRotationAnimationFactory_initFields(NullRotationAnimationFactory* this) {
    this->NULL_ROTATION_ANIMATION_ARRAY = ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), 0));
    this->NULL_ANIMATION = NullRotationAnimation2_new();
}


void NullRotationAnimationFactory_init(NullRotationAnimationFactory* this) {
    NullRotationAnimationFactory_initFields(this);
}

NullRotationAnimationFactory* NullRotationAnimationFactory_new(void) {
    NullRotationAnimationFactory* this = calloc(1, sizeof(NullRotationAnimationFactory));
    NullRotationAnimationFactory_init(this);
    return this;
}


NullRotationAnimationFactory* NullRotationAnimationFactory_getFactoryInstance(void) {
        return NullRotationAnimationFactory_NULL_ROTATION_ANIMATION_FACTORY;
}


Animation* NullRotationAnimationFactory_getInstance(NullRotationAnimationFactory* this, int32_t instanceId) {
        return this->NULL_ANIMATION;
}


// throws Exception
Animation* NullRotationAnimationFactory_getInstanceAnimation(NullRotationAnimationFactory* this, Animation* animationInterface) {
        return this->NULL_ANIMATION;
}


void NullRotationAnimationFactory_setInitialScale(NullRotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

