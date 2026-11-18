#ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_H
#define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_H
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
typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
typedef struct NullRotationAnimation NullRotationAnimation;
typedef struct AnimationBehavior AnimationBehavior;
typedef struct Animation Animation;
typedef struct GameConfigurationCentral GameConfigurationCentral;
typedef struct AngleFactory AngleFactory;
typedef struct AngleInfo AngleInfo;
typedef struct ScaleProperties ScaleProperties;
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
#define RotationAnimationFactory_new2 RotationAnimationFactory_new
#define RotationAnimationFactory_init2 RotationAnimationFactory_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RotationAnimationFactory_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void RotationAnimationFactory_register(void);


#endif // ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONFACTORY_H
