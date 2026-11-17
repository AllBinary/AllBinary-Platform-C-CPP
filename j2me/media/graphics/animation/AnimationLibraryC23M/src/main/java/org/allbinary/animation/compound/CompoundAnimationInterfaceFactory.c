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
#include "org/allbinary/animation/NullAnimationFactory.h"
#include "org/allbinary/logic/communication/log/ForcedLogUtil.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct CompoundAnimationInterfaceFactory CompoundAnimationInterfaceFactory;
struct CompoundAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArrayP;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


CompoundAnimationInterfaceFactory* CompoundAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);

void CompoundAnimationInterfaceFactory_init(CompoundAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* CompoundAnimationInterfaceFactory_getInstance(CompoundAnimationInterfaceFactory* this, int32_t instanceId);
Animation** CompoundAnimationInterfaceFactory_createArray(CompoundAnimationInterfaceFactory* this, int32_t size);
Animation* CompoundAnimationInterfaceFactory_createAnimation(CompoundAnimationInterfaceFactory* this, Animation** animationInterfaceArray);
AnimationInterfaceFactoryInterface** CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(CompoundAnimationInterfaceFactory* this);
void CompoundAnimationInterfaceFactory_setInitialScale(CompoundAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);

static void CompoundAnimationInterfaceFactory_initFields(CompoundAnimationInterfaceFactory* this) {
    
    
}


void CompoundAnimationInterfaceFactory_init(CompoundAnimationInterfaceFactory* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundAnimationInterfaceFactory_initFields(this);
        this->basicAnimationInterfaceFactoryInterfaceArrayP = basicAnimationInterfaceFactoryInterfaceArray;
        this->animationBehaviorFactory = animationBehaviorFactory;
}

CompoundAnimationInterfaceFactory* CompoundAnimationInterfaceFactory_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray, AnimationBehaviorFactory* animationBehaviorFactory) {
    CompoundAnimationInterfaceFactory* this = calloc(1, sizeof(CompoundAnimationInterfaceFactory));
    CompoundAnimationInterfaceFactory_init(this, basicAnimationInterfaceFactoryInterfaceArray, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* CompoundAnimationInterfaceFactory_getInstance(CompoundAnimationInterfaceFactory* this, int32_t instanceId) {
        int32_t size = java_array_length(this->basicAnimationInterfaceFactoryInterfaceArrayP);
        Animation** animationInterfaceArray = CompoundAnimationInterfaceFactory_createArray(this, size);
        for (int32_t index = 0; index < size; index++) {
            animationInterfaceArray[index] = JAVA_CALL(this->basicAnimationInterfaceFactoryInterfaceArrayP[index], getInstance, instanceId);
        }
        return CompoundAnimationInterfaceFactory_createAnimation(this, animationInterfaceArray);
}


Animation** CompoundAnimationInterfaceFactory_createArray(CompoundAnimationInterfaceFactory* this, int32_t size) {
        return NullAnimationFactory_getFactoryInstance()->EMPTY_ARRAY;
}


Animation* CompoundAnimationInterfaceFactory_createAnimation(CompoundAnimationInterfaceFactory* this, Animation** animationInterfaceArray) {
        return JAVA_CALL(NullAnimationFactory_getFactoryInstance(), getInstance, 0);
}


AnimationInterfaceFactoryInterface** CompoundAnimationInterfaceFactory_getBasicAnimationInterfaceFactoryInterfaceArray(CompoundAnimationInterfaceFactory* this) {
        return this->basicAnimationInterfaceFactoryInterfaceArrayP;
}


void CompoundAnimationInterfaceFactory_setInitialScale(CompoundAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
        int32_t size = java_array_length(this->basicAnimationInterfaceFactoryInterfaceArrayP);
        for (int32_t index = 0; index < size; index++) {
            JAVA_CALL(this->basicAnimationInterfaceFactoryInterfaceArrayP[index], setInitialScale, scaleProperties);
        }
}

