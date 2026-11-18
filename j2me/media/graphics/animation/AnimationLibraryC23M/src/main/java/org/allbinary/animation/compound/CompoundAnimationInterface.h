#ifndef ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACE_H
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
// package org.allbinary.animation.compound

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct AnimationInterface AnimationInterface;
typedef struct IndexedAnimation IndexedAnimation;
#include "org/allbinary/animation/AnimationInterface.h"

typedef struct CompoundAnimationInterface CompoundAnimationInterface;
struct CompoundAnimationInterface {
    void (*nextAnimation)(void* this);
    void (*previousAnimation)(void* this);
    void (*setAnimation)(void* this, int32_t index);
    IndexedAnimation* (*getCurrentAnimation)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void CompoundAnimationInterface_staticInit(void);

static inline void CompoundAnimationInterface_nextAnimation(void* this) {
    ((__typeof__(((CompoundAnimationInterface*) nullptr)->nextAnimation)) java_method_of(this, "nextAnimation"))(this);
}

static inline void CompoundAnimationInterface_previousAnimation(void* this) {
    ((__typeof__(((CompoundAnimationInterface*) nullptr)->previousAnimation)) java_method_of(this, "previousAnimation"))(this);
}

static inline void CompoundAnimationInterface_setAnimation(void* this, int32_t index) {
    ((__typeof__(((CompoundAnimationInterface*) nullptr)->setAnimation)) java_method_of(this, "setAnimation"))(this, index);
}

static inline IndexedAnimation* CompoundAnimationInterface_getCurrentAnimation(void* this) {
    return ((__typeof__(((CompoundAnimationInterface*) nullptr)->getCurrentAnimation)) java_method_of(this, "getCurrentAnimation"))(this);
}
#define CompoundAnimationInterface_nextFrame AnimationInterface_nextFrame
#define CompoundAnimationInterface_paintThreedXYZ AnimationInterface_paintThreedXYZ

#if __has_include("org/allbinary/animation/IndexedAnimation.h")
#include "org/allbinary/animation/IndexedAnimation.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_COMPOUND_COMPOUNDANIMATIONINTERFACE_H
