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
// package org.allbinary.animation.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationBehaviorFactory.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct SimultaneousCompoundIndexedAnimationInterfaceFactory SimultaneousCompoundIndexedAnimationInterfaceFactory;
struct SimultaneousCompoundIndexedAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


SimultaneousCompoundIndexedAnimationInterfaceFactory* SimultaneousCompoundIndexedAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void SimultaneousCompoundIndexedAnimationInterfaceFactory_init(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);
Animation** SimultaneousCompoundIndexedAnimationInterfaceFactory_createArray(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, int32_t size);
Animation* SimultaneousCompoundIndexedAnimationInterfaceFactory_createAnimation(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, Animation** animationArray);


void SimultaneousCompoundIndexedAnimationInterfaceFactory_init(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
}

SimultaneousCompoundIndexedAnimationInterfaceFactory* SimultaneousCompoundIndexedAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexedAnimationInterfaceFactory* this = calloc(1, sizeof(SimultaneousCompoundIndexedAnimationInterfaceFactory));
    SimultaneousCompoundIndexedAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** SimultaneousCompoundIndexedAnimationInterfaceFactory_createArray(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, int32_t size) {
        return ((Animation**) java_array_new(sizeof(Animation*), size));
}


Animation* SimultaneousCompoundIndexedAnimationInterfaceFactory_createAnimation(SimultaneousCompoundIndexedAnimationInterfaceFactory* this, Animation** animationArray) {
        return SimultaneousCompoundIndexedAnimation_new(animationArray, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}

