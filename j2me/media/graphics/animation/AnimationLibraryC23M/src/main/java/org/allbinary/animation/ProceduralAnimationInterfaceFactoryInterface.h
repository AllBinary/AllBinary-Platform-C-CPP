#ifndef ORG_ALLBINARY_ANIMATION_PROCEDURALANIMATIONINTERFACEFACTORYINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_PROCEDURALANIMATIONINTERFACEFACTORYINTERFACE_H
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
#include "org/allbinary/animation/BasicAnimationInterfaceFactoryInterface.h"

typedef struct ProceduralAnimationInterfaceFactoryInterface ProceduralAnimationInterfaceFactoryInterface;
struct ProceduralAnimationInterfaceFactoryInterface {
    Animation* (*getInstanceAnimation)(void* this, Animation* animationInterface);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void ProceduralAnimationInterfaceFactoryInterface_staticInit(void);

static inline Animation* ProceduralAnimationInterfaceFactoryInterface_getInstanceAnimation(void* this, Animation* animationInterface) {
    return ((__typeof__(((ProceduralAnimationInterfaceFactoryInterface*) nullptr)->getInstanceAnimation)) java_method_of(this, "getInstanceAnimation"))(this, animationInterface);
}


#endif // ORG_ALLBINARY_ANIMATION_PROCEDURALANIMATIONINTERFACEFACTORYINTERFACE_H
