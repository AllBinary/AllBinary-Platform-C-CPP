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
#include "org/allbinary/animation/compound/CompoundAnimationInterfaceFactory.h"

typedef struct AutoCompoundRotationAnimationInterfaceFactory AutoCompoundRotationAnimationInterfaceFactory;
struct AutoCompoundRotationAnimationInterfaceFactory {
    CompoundAnimationInterfaceFactory base;
};


AutoCompoundRotationAnimationInterfaceFactory* AutoCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void AutoCompoundRotationAnimationInterfaceFactory_init(AutoCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);
Animation** AutoCompoundRotationAnimationInterfaceFactory_createArray(AutoCompoundRotationAnimationInterfaceFactory* this, int32_t size);
Animation* AutoCompoundRotationAnimationInterfaceFactory_createAnimation(AutoCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray);


void AutoCompoundRotationAnimationInterfaceFactory_init(AutoCompoundRotationAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
        CompoundAnimationInterfaceFactory_init(&this->base, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
}

AutoCompoundRotationAnimationInterfaceFactory* AutoCompoundRotationAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    AutoCompoundRotationAnimationInterfaceFactory* this = calloc(1, sizeof(AutoCompoundRotationAnimationInterfaceFactory));
    AutoCompoundRotationAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


Animation** AutoCompoundRotationAnimationInterfaceFactory_createArray(AutoCompoundRotationAnimationInterfaceFactory* this, int32_t size) {
        return ((RotationAnimation**) java_array_new(sizeof(RotationAnimation*), size));
}


Animation* AutoCompoundRotationAnimationInterfaceFactory_createAnimation(AutoCompoundRotationAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return AutoCompoundRotationAnimation_new(((RotationAnimation**) animationInterfaceArray), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}

