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
#include "org/allbinary/logic/NullUtil.h"
#include "org/allbinary/vector/VectorInfo.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct IndependentVectorExplosionRotationAnimationFactory IndependentVectorExplosionRotationAnimationFactory;
struct IndependentVectorExplosionRotationAnimationFactory {
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    int32_t*** framePoints;
    VectorInfo* vectorInfo;
    BasicColor* basicColor;
    VectorAnimationFactoryInterface* vectorAnimationFactoryInterface;
    VectorExplosionGenerator* vectorExplosionGenerator;
};


IndependentVectorExplosionRotationAnimationFactory* IndependentVectorExplosionRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface);

void IndependentVectorExplosionRotationAnimationFactory_init(IndependentVectorExplosionRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface);
void IndependentVectorExplosionRotationAnimationFactory_init(IndependentVectorExplosionRotationAnimationFactory* this);
Animation* IndependentVectorExplosionRotationAnimationFactory_getInstanceAnimation(IndependentVectorExplosionRotationAnimationFactory* this, Animation* animationInterface);

static void IndependentVectorExplosionRotationAnimationFactory_initFields(IndependentVectorExplosionRotationAnimationFactory* this) {
    this->framePoints = NullUtil_getInstance()->NULL_INT_ARRAY_ARRAY_ARRAY;
    
    
    
    this->vectorExplosionGenerator = VectorExplosionGenerator_getInstance();
}


void IndependentVectorExplosionRotationAnimationFactory_init(IndependentVectorExplosionRotationAnimationFactory* this, VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface) {
    IndependentVectorExplosionRotationAnimationFactory_initFields(this);
        this->vectorInfo = vectorInfo;
        this->basicColor = basicColor;
        this->vectorAnimationFactoryInterface = vectorAnimationFactoryInterface;
        IndependentVectorExplosionRotationAnimationFactory_init(this);
}

IndependentVectorExplosionRotationAnimationFactory* IndependentVectorExplosionRotationAnimationFactory_new(VectorInfo* vectorInfo, BasicColor* basicColor, VectorAnimationFactoryInterface* vectorAnimationFactoryInterface) {
    IndependentVectorExplosionRotationAnimationFactory* this = calloc(1, sizeof(IndependentVectorExplosionRotationAnimationFactory));
    IndependentVectorExplosionRotationAnimationFactory_init(this, vectorInfo, basicColor, vectorAnimationFactoryInterface);
    return this;
}


// throws Exception
void IndependentVectorExplosionRotationAnimationFactory_init(IndependentVectorExplosionRotationAnimationFactory* this) {
        this->framePoints = VectorRotationGenerator_getInstance(VectorRotationGenerator_getInstance(), this->vectorInfo);
}


// throws Exception
Animation* IndependentVectorExplosionRotationAnimationFactory_getInstanceAnimation(IndependentVectorExplosionRotationAnimationFactory* this, Animation* animationInterface) {
        int32_t frame = 0;
        if (animationInterface != nullptr) {
            IndexedAnimation* rotationAnimationInterface = ((IndexedAnimation*) animationInterface);
            frame = IndexedAnimation_getFrame(rotationAnimationInterface);
        }
        int32_t*** points = VectorExplosionGenerator_getInstance(this->vectorExplosionGenerator, this->framePoints[frame], 6, this->vectorExplosionGenerator->ROTATION);
        return VectorAnimationFactoryInterface_getInstance(this->vectorAnimationFactoryInterface, points, this->basicColor);
}

