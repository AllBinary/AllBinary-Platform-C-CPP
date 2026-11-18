#ifndef ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H
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
// package org.allbinary.animation.special

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct IndexedAnimationInterface IndexedAnimationInterface;
#include "org/allbinary/animation/IndexedAnimationInterface.h"

typedef struct SpecialAnimationInterface SpecialAnimationInterface;
struct SpecialAnimationInterface {
    void (*setLastFrame)(void* this);
    bool (*isComplete)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void SpecialAnimationInterface_staticInit(void);

static inline void SpecialAnimationInterface_setLastFrame(void* this) {
    ((__typeof__(((SpecialAnimationInterface*) nullptr)->setLastFrame)) java_method_of(this, "setLastFrame"))(this);
}

static inline bool SpecialAnimationInterface_isComplete(void* this) {
    return ((__typeof__(((SpecialAnimationInterface*) nullptr)->isComplete)) java_method_of(this, "isComplete"))(this);
}
#define SpecialAnimationInterface_reset IndexedAnimationInterface_reset
#define SpecialAnimationInterface_setFrame IndexedAnimationInterface_setFrame
#define SpecialAnimationInterface_getFrame IndexedAnimationInterface_getFrame


#endif // ORG_ALLBINARY_ANIMATION_SPECIAL_SPECIALANIMATIONINTERFACE_H
