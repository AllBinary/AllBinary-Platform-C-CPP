#ifndef ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONINTERFACE_H
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
typedef struct SequentialAnimationInterface SequentialAnimationInterface;
#include "org/allbinary/animation/SequentialAnimationInterface.h"

typedef struct IndexedAnimationInterface IndexedAnimationInterface;
struct IndexedAnimationInterface {
    void (*reset)(void* this);
    void (*setFrame)(void* this, int32_t index);
    int32_t (*getFrame)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void IndexedAnimationInterface_staticInit(void);

static inline void IndexedAnimationInterface_reset(void* this) {
    ((__typeof__(((IndexedAnimationInterface*) nullptr)->reset)) java_method_of(this, "reset"))(this);
}

static inline void IndexedAnimationInterface_setFrame(void* this, int32_t index) {
    ((__typeof__(((IndexedAnimationInterface*) nullptr)->setFrame)) java_method_of(this, "setFrame"))(this, index);
}

static inline int32_t IndexedAnimationInterface_getFrame(void* this) {
    return ((__typeof__(((IndexedAnimationInterface*) nullptr)->getFrame)) java_method_of(this, "getFrame"))(this);
}
#define IndexedAnimationInterface_getSize SequentialAnimationInterface_getSize
#define IndexedAnimationInterface_previousFrame SequentialAnimationInterface_previousFrame


#endif // ORG_ALLBINARY_ANIMATION_INDEXEDANIMATIONINTERFACE_H
