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
// package org.allbinary.game.health

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
#include "org/allbinary/animation/Animation.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"
#include "org/allbinary/layer/AllBinaryLayer.h"
#include "org/allbinary/media/ScaleProperties.h"

typedef struct HealthBarAnimationInterfaceFactory HealthBarAnimationInterfaceFactory;
struct HealthBarAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
};


HealthBarAnimationInterfaceFactory* HealthBarAnimationInterfaceFactory_new(void);

void HealthBarAnimationInterfaceFactory_init(HealthBarAnimationInterfaceFactory* this);
HealthBarAnimation* HealthBarAnimationInterfaceFactory_getInstanceByLocation(HealthBarAnimationInterfaceFactory* this, AllBinaryLayer* layerInterface, int32_t location);
Animation* HealthBarAnimationInterfaceFactory_getInstance(HealthBarAnimationInterfaceFactory* this, int32_t instanceId);
Animation* HealthBarAnimationInterfaceFactory_getInstanceAnimation(HealthBarAnimationInterfaceFactory* this, Animation* animationInterface);
void HealthBarAnimationInterfaceFactory_setInitialScale(HealthBarAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);


void HealthBarAnimationInterfaceFactory_init(HealthBarAnimationInterfaceFactory* this) {
}

HealthBarAnimationInterfaceFactory* HealthBarAnimationInterfaceFactory_new(void) {
    HealthBarAnimationInterfaceFactory* this = calloc(1, sizeof(HealthBarAnimationInterfaceFactory));
    HealthBarAnimationInterfaceFactory_init(this);
    return this;
}


// throws Exception
HealthBarAnimation* HealthBarAnimationInterfaceFactory_getInstanceByLocation(HealthBarAnimationInterfaceFactory* this, AllBinaryLayer* layerInterface, int32_t location) {
        return HealthBarThreedAnimation_new(layerInterface, location);
}


// throws Exception
Animation* HealthBarAnimationInterfaceFactory_getInstance(HealthBarAnimationInterfaceFactory* this, int32_t instanceId) {
        return nullptr;
}


// throws Exception
Animation* HealthBarAnimationInterfaceFactory_getInstanceAnimation(HealthBarAnimationInterfaceFactory* this, Animation* animationInterface) {
        return nullptr;
}


void HealthBarAnimationInterfaceFactory_setInitialScale(HealthBarAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

