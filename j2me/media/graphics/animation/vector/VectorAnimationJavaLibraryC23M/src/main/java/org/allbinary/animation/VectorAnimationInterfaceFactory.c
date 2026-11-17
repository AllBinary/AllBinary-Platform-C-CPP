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
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"

typedef struct VectorAnimationInterfaceFactory VectorAnimationInterfaceFactory;
struct VectorAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    int32_t*** currentPoints;
    BasicColor* basicColor;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


VectorAnimationInterfaceFactory* VectorAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorAnimationInterfaceFactory_init(VectorAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* VectorAnimationInterfaceFactory_getInstance(VectorAnimationInterfaceFactory* this, int32_t instanceId);
void VectorAnimationInterfaceFactory_setBasicColorP(VectorAnimationInterfaceFactory* this, BasicColor* basicColor);
BasicColor* VectorAnimationInterfaceFactory_getBasicColorP(VectorAnimationInterfaceFactory* this);
void VectorAnimationInterfaceFactory_setInitialScale(VectorAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);

static void VectorAnimationInterfaceFactory_initFields(VectorAnimationInterfaceFactory* this) {
    
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void VectorAnimationInterfaceFactory_init(VectorAnimationInterfaceFactory* this, int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorAnimationInterfaceFactory_initFields(this);
        this->currentPoints = currentPoints;
        VectorAnimationInterfaceFactory_setBasicColorP(this, basicColor);
        this->animationBehaviorFactory = animationBehaviorFactory;
}

VectorAnimationInterfaceFactory* VectorAnimationInterfaceFactory_new(int32_t*** currentPoints, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorAnimationInterfaceFactory* this = calloc(1, sizeof(VectorAnimationInterfaceFactory));
    VectorAnimationInterfaceFactory_init(this, currentPoints, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* VectorAnimationInterfaceFactory_getInstance(VectorAnimationInterfaceFactory* this, int32_t instanceId) {
        return VectorAnimation_new(this->currentPoints, VectorAnimationInterfaceFactory_getBasicColorP(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


void VectorAnimationInterfaceFactory_setBasicColorP(VectorAnimationInterfaceFactory* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


BasicColor* VectorAnimationInterfaceFactory_getBasicColorP(VectorAnimationInterfaceFactory* this) {
        return this->basicColor;
}


void VectorAnimationInterfaceFactory_setInitialScale(VectorAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

