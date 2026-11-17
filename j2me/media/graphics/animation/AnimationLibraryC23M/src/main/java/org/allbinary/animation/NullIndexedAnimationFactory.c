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

typedef struct NullIndexedAnimationFactory NullIndexedAnimationFactory;
struct NullIndexedAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    Animation* NULL_ANIMATION;
};

IndexedAnimation** NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_ARRAY;
static NullIndexedAnimationFactory* NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_FACTORY;

NullIndexedAnimationFactory* NullIndexedAnimationFactory_new(void);

void NullIndexedAnimationFactory_init(NullIndexedAnimationFactory* this);
NullIndexedAnimationFactory* NullIndexedAnimationFactory_getFactoryInstance(void);
Animation* NullIndexedAnimationFactory_getInstance(NullIndexedAnimationFactory* this, int32_t instanceId);
Animation* NullIndexedAnimationFactory_getInstanceAnimation(NullIndexedAnimationFactory* this, Animation* animationInterface);
void NullIndexedAnimationFactory_setInitialScale(NullIndexedAnimationFactory* this, ScaleProperties* scaleProperties);

// Static fields with runtime initializers: call this once at startup
void NullIndexedAnimationFactory_staticInit(void) {
    NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_ARRAY = ((IndexedAnimation**) java_array_new(sizeof(IndexedAnimation*), 0));
    NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_FACTORY = NullIndexedAnimationFactory_new();
}

static void NullIndexedAnimationFactory_initFields(NullIndexedAnimationFactory* this) {
    this->NULL_ANIMATION = NullIndexedAnimationInner_new();
}


void NullIndexedAnimationFactory_init(NullIndexedAnimationFactory* this) {
    NullIndexedAnimationFactory_initFields(this);
}

NullIndexedAnimationFactory* NullIndexedAnimationFactory_new(void) {
    NullIndexedAnimationFactory* this = calloc(1, sizeof(NullIndexedAnimationFactory));
    NullIndexedAnimationFactory_init(this);
    return this;
}


NullIndexedAnimationFactory* NullIndexedAnimationFactory_getFactoryInstance(void) {
        return NullIndexedAnimationFactory_NULL_INDEXED_ANIMATION_FACTORY;
}


// throws Exception
Animation* NullIndexedAnimationFactory_getInstance(NullIndexedAnimationFactory* this, int32_t instanceId) {
        return this->NULL_ANIMATION;
}


// throws Exception
Animation* NullIndexedAnimationFactory_getInstanceAnimation(NullIndexedAnimationFactory* this, Animation* animationInterface) {
        return this->NULL_ANIMATION;
}


void NullIndexedAnimationFactory_setInitialScale(NullIndexedAnimationFactory* this, ScaleProperties* scaleProperties) {
}

