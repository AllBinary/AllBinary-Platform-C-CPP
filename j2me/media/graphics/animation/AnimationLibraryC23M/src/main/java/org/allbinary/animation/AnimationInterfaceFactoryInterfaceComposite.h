#ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
#define ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
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
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct Animation Animation;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"

typedef struct AnimationInterfaceFactoryInterfaceComposite AnimationInterfaceFactoryInterfaceComposite;
struct AnimationInterfaceFactoryInterfaceComposite {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    AnimationInterfaceFactoryInterface** animationInterfaceFactoryInterfaceArray;
};


AnimationInterfaceFactoryInterfaceComposite* AnimationInterfaceFactoryInterfaceComposite_new(AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

void AnimationInterfaceFactoryInterfaceComposite_init(AnimationInterfaceFactoryInterfaceComposite* this, AnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

Animation* AnimationInterfaceFactoryInterfaceComposite_getInstance(AnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId);

AnimationInterfaceFactoryInterface** AnimationInterfaceFactoryInterfaceComposite_getAnimationInterfaceFactoryInterfaceArray(AnimationInterfaceFactoryInterfaceComposite* this);

void AnimationInterfaceFactoryInterfaceComposite_setInitialScale(AnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties);
#define AnimationInterfaceFactoryInterfaceComposite_new1 AnimationInterfaceFactoryInterfaceComposite_new
#define AnimationInterfaceFactoryInterfaceComposite_init1 AnimationInterfaceFactoryInterfaceComposite_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationInterfaceFactoryInterfaceComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void AnimationInterfaceFactoryInterfaceComposite_register(void);


#endif // ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
