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
#include "org/allbinary/animation/IndexedAnimation.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct SimultaneousCompoundIndexAnimationInterfaceFactory SimultaneousCompoundIndexAnimationInterfaceFactory;
struct SimultaneousCompoundIndexAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


SimultaneousCompoundIndexAnimationInterfaceFactory* SimultaneousCompoundIndexAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void SimultaneousCompoundIndexAnimationInterfaceFactory_init(SimultaneousCompoundIndexAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getInstance(SimultaneousCompoundIndexAnimationInterfaceFactory* this, int32_t instanceId);
Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate(SimultaneousCompoundIndexAnimationInterfaceFactory* this, IndexedAnimation** animationInterfaceArray);
AnimationInterfaceFactoryInterface** SimultaneousCompoundIndexAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(SimultaneousCompoundIndexAnimationInterfaceFactory* this);
void SimultaneousCompoundIndexAnimationInterfaceFactory_setInitialScale(SimultaneousCompoundIndexAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);

static void SimultaneousCompoundIndexAnimationInterfaceFactory_initFields(SimultaneousCompoundIndexAnimationInterfaceFactory* this) {
    
    
}


void SimultaneousCompoundIndexAnimationInterfaceFactory_init(SimultaneousCompoundIndexAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexAnimationInterfaceFactory_initFields(this);
        this->basicAnimationInterfaceFactoryInterfaceArray = basicAnimationInterfaceFactoryInterfaceArray;
        this->animationBehaviorFactory = animationBehaviorFactory;
}

SimultaneousCompoundIndexAnimationInterfaceFactory* SimultaneousCompoundIndexAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    SimultaneousCompoundIndexAnimationInterfaceFactory* this = calloc(1, sizeof(SimultaneousCompoundIndexAnimationInterfaceFactory));
    SimultaneousCompoundIndexAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getInstance(SimultaneousCompoundIndexAnimationInterfaceFactory* this, int32_t instanceId) {
        int32_t size = java_array_length(this->basicAnimationInterfaceFactoryInterfaceArray);
        IndexedAnimation** animationInterfaceArray = ((IndexedAnimation**) java_array_new(sizeof(IndexedAnimation*), size));
        for (int32_t index = 0; index < size; index++) {
            animationInterfaceArray[index] = ((IndexedAnimation*) JAVA_CALL(this->basicAnimationInterfaceFactoryInterfaceArray[index], getInstance, instanceId));
        }
        return SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate(this, animationInterfaceArray);
}


Animation* SimultaneousCompoundIndexAnimationInterfaceFactory_getOrCreate(SimultaneousCompoundIndexAnimationInterfaceFactory* this, IndexedAnimation** animationInterfaceArray) {
        return SimultaneousCompoundIndexAnimation_new(animationInterfaceArray, AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


AnimationInterfaceFactoryInterface** SimultaneousCompoundIndexAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(SimultaneousCompoundIndexAnimationInterfaceFactory* this) {
        return this->basicAnimationInterfaceFactoryInterfaceArray;
}


void SimultaneousCompoundIndexAnimationInterfaceFactory_setInitialScale(SimultaneousCompoundIndexAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

