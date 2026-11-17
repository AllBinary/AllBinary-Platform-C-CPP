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
#include "org/allbinary/graphics/color/BasicColor.h"
#include "org/allbinary/graphics/color/BasicColorFactory.h"
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"

typedef struct VectorRotationAnimationInterfaceFactory VectorRotationAnimationInterfaceFactory;
struct VectorRotationAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    int32_t*** currentPoints;
    BasicColor* basicColor;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


VectorRotationAnimationInterfaceFactory* VectorRotationAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorRotationAnimationInterfaceFactory_init(VectorRotationAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* VectorRotationAnimationInterfaceFactory_getInstance(VectorRotationAnimationInterfaceFactory* this, int32_t instanceId);
void VectorRotationAnimationInterfaceFactory_setBasicColorP(VectorRotationAnimationInterfaceFactory* this, BasicColor* basicColor);
BasicColor* VectorRotationAnimationInterfaceFactory_getBasicColorP(VectorRotationAnimationInterfaceFactory* this);
void VectorRotationAnimationInterfaceFactory_setInitialScale(VectorRotationAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);

static void VectorRotationAnimationInterfaceFactory_initFields(VectorRotationAnimationInterfaceFactory* this) {
    this->currentPoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void VectorRotationAnimationInterfaceFactory_init(VectorRotationAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorRotationAnimationInterfaceFactory_initFields(this);
        this->currentPoints = currentPoints;
        VectorRotationAnimationInterfaceFactory_setBasicColorP(this, basicColor);
        this->animationBehaviorFactory = animationBehaviorFactory;
}

VectorRotationAnimationInterfaceFactory* VectorRotationAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorRotationAnimationInterfaceFactory* this = calloc(1, sizeof(VectorRotationAnimationInterfaceFactory));
    VectorRotationAnimationInterfaceFactory_init(this, currentPoints, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* VectorRotationAnimationInterfaceFactory_getInstance(VectorRotationAnimationInterfaceFactory* this, int32_t instanceId) {
        return VectorRotationAnimation_new(this->currentPoints, VectorRotationAnimationInterfaceFactory_getBasicColorP(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void VectorRotationAnimationInterfaceFactory_setBasicColorP(VectorRotationAnimationInterfaceFactory* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* VectorRotationAnimationInterfaceFactory_getBasicColorP(VectorRotationAnimationInterfaceFactory* this) {
        return this->basicColor;
}


void VectorRotationAnimationInterfaceFactory_setInitialScale(VectorRotationAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

