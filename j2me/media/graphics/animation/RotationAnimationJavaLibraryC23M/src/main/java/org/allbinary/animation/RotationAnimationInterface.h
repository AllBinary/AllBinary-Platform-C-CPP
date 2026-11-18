#ifndef ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONINTERFACE_H
#define ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONINTERFACE_H
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
typedef struct DirectionalInterface DirectionalInterface;
typedef struct AngleInfo AngleInfo;
#include "org/allbinary/direction/DirectionalInterface.h"
#include "org/allbinary/animation/IndexedAnimationInterface.h"

typedef struct RotationAnimationInterface RotationAnimationInterface;
struct RotationAnimationInterface {
    AngleInfo* (*getAngleInfoP)(void* this);
    void (*nextRotation)(void* this);
    void (*previousRotation)(void* this);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void RotationAnimationInterface_staticInit(void);

static inline AngleInfo* RotationAnimationInterface_getAngleInfoP(void* this) {
    return ((__typeof__(((RotationAnimationInterface*) nullptr)->getAngleInfoP)) java_method_of(this, "getAngleInfoP"))(this);
}

static inline void RotationAnimationInterface_nextRotation(void* this) {
    ((__typeof__(((RotationAnimationInterface*) nullptr)->nextRotation)) java_method_of(this, "nextRotation"))(this);
}

static inline void RotationAnimationInterface_previousRotation(void* this) {
    ((__typeof__(((RotationAnimationInterface*) nullptr)->previousRotation)) java_method_of(this, "previousRotation"))(this);
}
#define RotationAnimationInterface_reset IndexedAnimationInterface_reset
#define RotationAnimationInterface_setFrame IndexedAnimationInterface_setFrame
#define RotationAnimationInterface_getFrame IndexedAnimationInterface_getFrame
#define RotationAnimationInterface_setFrameByDirection DirectionalInterface_setFrameByDirection
#define RotationAnimationInterface_setFrameToAngle DirectionalInterface_setFrameToAngle
#define RotationAnimationInterface_adjustFrameToAngle DirectionalInterface_adjustFrameToAngle
#define RotationAnimationInterface_adjustFrame DirectionalInterface_adjustFrame

#if __has_include("org/allbinary/math/AngleInfo.h")
#include "org/allbinary/math/AngleInfo.h"
#endif

#endif // ORG_ALLBINARY_ANIMATION_ROTATIONANIMATIONINTERFACE_H
