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
#include "org/allbinary/animation/RotationAnimation.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct SimultaneousCompoundRotationAnimationInterfaceFactory SimultaneousCompoundRotationAnimationInterfaceFactory;
struct SimultaneousCompoundRotationAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


SimultaneousCompoundRotationAnimationInterfaceFactory* SimultaneousCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void SimultaneousCompoundRotationAnimationInterfaceFactory_init(SimultaneousCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);
Animation** SimultaneousCompoundRotationAnimationInterfaceFactory_createArray(SimultaneousCompoundRotationAnimationInterfaceFactory* this, int32_t size);
Animation* SimultaneousCompoundRotationAnimationInterfaceFactory_createAnimation(SimultaneousCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray);


void SimultaneousCompoundRotationAnimationInterfaceFactory_init(SimultaneousCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
        if (animationBehaviorFactory == AnimationBehaviorFactory_getInstance()) {
            ForcedLogUtil_log("Using default AnimationBehaviorFactory with IndexedAnimationFactory", this);
        }
}

SimultaneousCompoundRotationAnimationInterfaceFactory* SimultaneousCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundRotationAnimationInterfaceFactory* this = calloc(1, sizeof(SimultaneousCompoundRotationAnimationInterfaceFactory));
    SimultaneousCompoundRotationAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** SimultaneousCompoundRotationAnimationInterfaceFactory_createArray(SimultaneousCompoundRotationAnimationInterfaceFactory* this, int32_t size) {
        return ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), size));
}


Animation* SimultaneousCompoundRotationAnimationInterfaceFactory_createAnimation(SimultaneousCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return SimultaneousCompoundRotationAnimation_new(((RotationAnimation**) animationInterfaceArray), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}

