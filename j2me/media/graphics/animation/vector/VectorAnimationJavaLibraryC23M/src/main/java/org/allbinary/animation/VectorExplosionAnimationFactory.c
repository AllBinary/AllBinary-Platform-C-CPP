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
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct VectorExplosionAnimationFactory VectorExplosionAnimationFactory;
struct VectorExplosionAnimationFactory {
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    VectorExplosionGenerator* vectorExplosionGenerator;
    BasicColor* basicColor;
    AnimationBehaviorFactory* animationBehaviorFactory;
};


VectorExplosionAnimationFactory* VectorExplosionAnimationFactory_new(BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);

void VectorExplosionAnimationFactory_init(VectorExplosionAnimationFactory* this, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory);
Animation* VectorExplosionAnimationFactory_getInstanceAnimation(VectorExplosionAnimationFactory* this, Animation* animationInterface);
static void VectorExplosionAnimationFactory_setBasicColorP(VectorExplosionAnimationFactory* this, BasicColor* basicColor);
static BasicColor* VectorExplosionAnimationFactory_getBasicColorP(VectorExplosionAnimationFactory* this);

static void VectorExplosionAnimationFactory_initFields(VectorExplosionAnimationFactory* this) {
    this->vectorExplosionGenerator = VectorExplosionGenerator_getInstance();
    this->basicColor = BasicColorFactory_getInstance()->WHITE;
    
}


void VectorExplosionAnimationFactory_init(VectorExplosionAnimationFactory* this, BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorExplosionAnimationFactory_initFields(this);
        this->animationBehaviorFactory = animationBehaviorFactory;
        VectorExplosionAnimationFactory_setBasicColorP(this, basicColor);
}

VectorExplosionAnimationFactory* VectorExplosionAnimationFactory_new(BasicColor* basicColor, AnimationBehaviorFactory* animationBehaviorFactory) {
    VectorExplosionAnimationFactory* this = calloc(1, sizeof(VectorExplosionAnimationFactory));
    VectorExplosionAnimationFactory_init(this, basicColor, animationBehaviorFactory);
    return this;
}


// throws Exception
Animation* VectorExplosionAnimationFactory_getInstanceAnimation(VectorExplosionAnimationFactory* this, Animation* animationInterface) {
        VectorAnimationInterface* vectorRotationAnimationInterface = ((VectorAnimationInterface*) animationInterface);
        int32_t frame = VectorAnimationInterface_getFrame(vectorRotationAnimationInterface);
        int32_t** framePoints = VectorAnimationInterface_getPoints(vectorRotationAnimationInterface, frame);
        int32_t*** points = VectorExplosionGenerator_getInstance(this->vectorExplosionGenerator, framePoints, 6, this->vectorExplosionGenerator->ROTATION);
        return VectorRotationAnimation_new(points, VectorExplosionAnimationFactory_getBasicColorP(this), AnimationBehaviorFactory_getOrCreateInstance(this->animationBehaviorFactory));
}


static void VectorExplosionAnimationFactory_setBasicColorP(VectorExplosionAnimationFactory* this, BasicColor* basicColor) {
        this->basicColor = basicColor;
}


static BasicColor* VectorExplosionAnimationFactory_getBasicColorP(VectorExplosionAnimationFactory* this) {
        return this->basicColor;
}

