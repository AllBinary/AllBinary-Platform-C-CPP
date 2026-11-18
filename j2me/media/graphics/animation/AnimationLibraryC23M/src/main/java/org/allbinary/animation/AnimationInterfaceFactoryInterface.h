#ifndef ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACE_H
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
typedef struct BasicAnimationInterfaceFactoryInterface BasicAnimationInterfaceFactoryInterface;
typedef struct Animation Animation;
typedef struct ScaleProperties ScaleProperties;
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"

typedef struct AnimationInterfaceFactoryInterface AnimationInterfaceFactoryInterface;
struct AnimationInterfaceFactoryInterface {
    Animation* (*getInstance)(void* this, int32_t instanceId);
    void (*setInitialScale)(void* this, ScaleProperties* scaleProperties);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void AnimationInterfaceFactoryInterface_staticInit(void);

static inline Animation* AnimationInterfaceFactoryInterface_getInstance(void* this, int32_t instanceId) {
    return ((__typeof__(((AnimationInterfaceFactoryInterface*) nullptr)->getInstance)) java_method_of(this, "getInstance"))(this, instanceId);
}

static inline void AnimationInterfaceFactoryInterface_setInitialScale(void* this, ScaleProperties* scaleProperties) {
    ((__typeof__(((AnimationInterfaceFactoryInterface*) nullptr)->setInitialScale)) java_method_of(this, "setInitialScale"))(this, scaleProperties);
}


#endif // ORG_ALLBINARY_ANIMATION_ANIMATIONINTERFACEFACTORYINTERFACE_H
