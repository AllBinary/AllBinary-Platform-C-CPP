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
#include "org/allbinary/media/ScaleProperties.h"
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#include "org/allbinary/animation/ProceduralAnimationInterfaceFactoryInterface.h"

typedef struct SingletonAnimationInterfaceFactory SingletonAnimationInterfaceFactory;
struct SingletonAnimationInterfaceFactory {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface_interface;
    Animation* animationInterface;
};


SingletonAnimationInterfaceFactory* SingletonAnimationInterfaceFactory_new(Animation* animationInterface);

void SingletonAnimationInterfaceFactory_init(SingletonAnimationInterfaceFactory* this, Animation* animationInterface);
Animation* SingletonAnimationInterfaceFactory_getInstance(SingletonAnimationInterfaceFactory* this, int32_t instanceId);
Animation* SingletonAnimationInterfaceFactory_getInstanceAnimation(SingletonAnimationInterfaceFactory* this, Animation* animationInterface);
void SingletonAnimationInterfaceFactory_setInitialScale(SingletonAnimationInterfaceFactory* this, ScaleProperties* scaleProperties);

static void SingletonAnimationInterfaceFactory_initFields(SingletonAnimationInterfaceFactory* this) {
    
}


void SingletonAnimationInterfaceFactory_init(SingletonAnimationInterfaceFactory* this, Animation* animationInterface) {
    SingletonAnimationInterfaceFactory_initFields(this);
        this->animationInterface = animationInterface;
}

SingletonAnimationInterfaceFactory* SingletonAnimationInterfaceFactory_new(Animation* animationInterface) {
    SingletonAnimationInterfaceFactory* this = calloc(1, sizeof(SingletonAnimationInterfaceFactory));
    SingletonAnimationInterfaceFactory_init(this, animationInterface);
    return this;
}


// throws Exception
Animation* SingletonAnimationInterfaceFactory_getInstance(SingletonAnimationInterfaceFactory* this, int32_t instanceId) {
        return this->animationInterface;
}


// throws Exception
Animation* SingletonAnimationInterfaceFactory_getInstanceAnimation(SingletonAnimationInterfaceFactory* this, Animation* animationInterface) {
        return this->animationInterface;
}


void SingletonAnimationInterfaceFactory_setInitialScale(SingletonAnimationInterfaceFactory* this, ScaleProperties* scaleProperties) {
}

