#ifndef ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
#define ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
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
typedef struct BasicAnimationInterfaceFactoryInterface BasicAnimationInterfaceFactoryInterface;
typedef struct NullAnimationFactory NullAnimationFactory;
typedef struct Animation Animation;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/AnimationInterfaceFactoryInterface.h"
#if __has_include("org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h")
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"
#endif

typedef struct BaseAnimationInterfaceFactoryInterfaceComposite BaseAnimationInterfaceFactoryInterfaceComposite;
struct BaseAnimationInterfaceFactoryInterfaceComposite {
    AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface_interface;
    BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray;
};


BaseAnimationInterfaceFactoryInterfaceComposite* BaseAnimationInterfaceFactoryInterfaceComposite_new(BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

void BaseAnimationInterfaceFactoryInterfaceComposite_init(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

Animation* BaseAnimationInterfaceFactoryInterfaceComposite_getInstance(BaseAnimationInterfaceFactoryInterfaceComposite* this, int32_t instanceId);

BasicAnimationInterfaceFactoryInterface** BaseAnimationInterfaceFactoryInterfaceComposite_getBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this);

void BaseAnimationInterfaceFactoryInterfaceComposite_setBasicAnimationInterfaceFactoryInterfaceArray(BaseAnimationInterfaceFactoryInterfaceComposite* this, BasicAnimationInterfaceFactoryInterface** basicAnimationInterfaceFactoryInterfaceArray);

void BaseAnimationInterfaceFactoryInterfaceComposite_setInitialScale(BaseAnimationInterfaceFactoryInterfaceComposite* this, ScaleProperties* scaleProperties);
#define BaseAnimationInterfaceFactoryInterfaceComposite_new1 BaseAnimationInterfaceFactoryInterfaceComposite_new
#define BaseAnimationInterfaceFactoryInterfaceComposite_init1 BaseAnimationInterfaceFactoryInterfaceComposite_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BaseAnimationInterfaceFactoryInterfaceComposite_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BaseAnimationInterfaceFactoryInterfaceComposite_register(void);


#endif // ORG_ALLBINARY_ANIMATION_BASEANIMATIONINTERFACEFACTORYINTERFACECOMPOSITE_H
