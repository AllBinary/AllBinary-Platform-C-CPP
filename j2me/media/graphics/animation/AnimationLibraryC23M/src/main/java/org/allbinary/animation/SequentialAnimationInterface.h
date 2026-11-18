#ifndef ORG_ALLBINARY_ANIMATION_SEQUENTIALANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_SEQUENTIALANIMATIONINTERFACE_H
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
typedef struct AnimationInterface AnimationInterface;
typedef struct SequenceInterface SequenceInterface;
#include "org/allbinary/animation/AnimationInterface.h"
#include "org/allbinary/animation/SequenceInterface.h"

typedef struct SequentialAnimationInterface SequentialAnimationInterface;
struct SequentialAnimationInterface {
    int32_t (*getSize)(void* this);
    void (*previousFrame)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SequentialAnimationInterface_staticInit(void);

static inline int32_t SequentialAnimationInterface_getSize(void* this) {
    return ((__typeof__(((SequentialAnimationInterface*) nullptr)->getSize)) java_method_of(this, "getSize"))(this);
}

static inline void SequentialAnimationInterface_previousFrame(void* this) {
    ((__typeof__(((SequentialAnimationInterface*) nullptr)->previousFrame)) java_method_of(this, "previousFrame"))(this);
}
#define SequentialAnimationInterface_nextFrame AnimationInterface_nextFrame
#define SequentialAnimationInterface_paintThreedXYZ AnimationInterface_paintThreedXYZ
#define SequentialAnimationInterface_setSequence SequenceInterface_setSequence
#define SequentialAnimationInterface_getSequence SequenceInterface_getSequence


#endif // ORG_ALLBINARY_ANIMATION_SEQUENTIALANIMATIONINTERFACE_H
