#ifndef ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H
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
typedef struct IndexedAnimationInterface IndexedAnimationInterface;
typedef struct ColorCompositeInterface ColorCompositeInterface;
#include "org/allbinary/graphics/color/ColorCompositeInterface.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"

typedef struct VectorAnimationInterface VectorAnimationInterface;
struct VectorAnimationInterface {
    int32_t** (*getPoints)(void* this, int32_t frame);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VectorAnimationInterface_staticInit(void);

static inline int32_t** VectorAnimationInterface_getPoints(void* this, int32_t frame) {
    return ((__typeof__(((VectorAnimationInterface*) nullptr)->getPoints)) java_method_of(this, "getPoints"))(this, frame);
}
#define VectorAnimationInterface_reset IndexedAnimationInterface_reset
#define VectorAnimationInterface_setFrame IndexedAnimationInterface_setFrame
#define VectorAnimationInterface_getFrame IndexedAnimationInterface_getFrame
#define VectorAnimationInterface_getBasicColorP ColorCompositeInterface_getBasicColorP


#endif // ORG_ALLBINARY_ANIMATION_VECTORANIMATIONINTERFACE_H
