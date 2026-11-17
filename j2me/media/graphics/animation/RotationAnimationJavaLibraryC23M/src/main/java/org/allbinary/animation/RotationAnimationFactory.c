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
#include "org/allbinary/game/configuration/GameConfigurationCentral.h"
#include "org/allbinary/math/AngleFactory.h"
#include "org/allbinary/math/AngleInfo.h"
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct RotationAnimationFactory RotationAnimationFactory;
struct RotationAnimationFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    int16_t totalAngle;
    int16_t angleIncrement;
};


RotationAnimationFactory* RotationAnimationFactory_new(int16_t totalAngle, int16_t angleIncrement);
RotationAnimationFactory* RotationAnimationFactory_createFactory(void);

void RotationAnimationFactory_init(RotationAnimationFactory* this, int16_t totalAngle, int16_t angleIncrement);
Animation* RotationAnimationFactory_getInstance(RotationAnimationFactory* this, int32_t instanceId);
Animation* RotationAnimationFactory_getInstanceAnimation(RotationAnimationFactory* this, Animation* animationInterface);
void RotationAnimationFactory_setInitialScale(RotationAnimationFactory* this, ScaleProperties* scaleProperties);

static void RotationAnimationFactory_initFields(RotationAnimationFactory* this) {
    
    
}


RotationAnimationFactory* RotationAnimationFactory_createFactory(void) {
        int16_t totalAngle = AngleFactory_getInstance()->TOTAL_ANGLE;
        return RotationAnimationFactory_new(totalAngle, ((int16_t) (totalAngle / GameConfigurationCentral_getGameControlFidelity(GameConfigurationCentral_getInstance()))));
}


void RotationAnimationFactory_init(RotationAnimationFactory* this, int16_t totalAngle, int16_t angleIncrement) {
    RotationAnimationFactory_initFields(this);
        this->totalAngle = totalAngle;
        this->angleIncrement = angleIncrement;
}

RotationAnimationFactory* RotationAnimationFactory_new(int16_t totalAngle, int16_t angleIncrement) {
    RotationAnimationFactory* this = calloc(1, sizeof(RotationAnimationFactory));
    RotationAnimationFactory_init(this, totalAngle, angleIncrement);
    return this;
}


// throws Exception
Animation* RotationAnimationFactory_getInstance(RotationAnimationFactory* this, int32_t instanceId) {
        return NullRotationAnimation_createTotalAngle(AngleInfo_getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior_getInstance());
}


// throws Exception
Animation* RotationAnimationFactory_getInstanceAnimation(RotationAnimationFactory* this, Animation* animationInterface) {
        return NullRotationAnimation_createTotalAngle(AngleInfo_getInstance(this->angleIncrement), this->totalAngle, AnimationBehavior_getInstance());
}


void RotationAnimationFactory_setInitialScale(RotationAnimationFactory* this, ScaleProperties* scaleProperties) {
}

