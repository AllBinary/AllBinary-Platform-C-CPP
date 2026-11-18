#ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONINTERFACECOMPOSITEINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONINTERFACECOMPOSITEINTERFACE_H
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
typedef struct IndexedAnimationInterfaceCompositeInterface IndexedAnimationInterfaceCompositeInterface;
typedef struct RotationAnimation RotationAnimation;
#include "org/allbinary/animation/IndexedAnimationInterfaceCompositeInterface.h"

typedef struct RotationAnimationInterfaceCompositeInterface RotationAnimationInterfaceCompositeInterface;
struct RotationAnimationInterfaceCompositeInterface {
    RotationAnimation* (*getRotationAnimationInterface)(void* this);
    void (*setFrame)(void* this, int32_t index);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RotationAnimationInterfaceCompositeInterface_staticInit(void);

static inline RotationAnimation* RotationAnimationInterfaceCompositeInterface_getRotationAnimationInterface(void* this) {
    return ((__typeof__(((RotationAnimationInterfaceCompositeInterface*) nullptr)->getRotationAnimationInterface)) java_method_of(this, "getRotationAnimationInterface"))(this);
}

static inline void RotationAnimationInterfaceCompositeInterface_setFrame(void* this, int32_t index) {
    ((__typeof__(((RotationAnimationInterfaceCompositeInterface*) nullptr)->setFrame)) java_method_of(this, "setFrame"))(this, index);
}


#endif // ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONINTERFACECOMPOSITEINTERFACE_H
