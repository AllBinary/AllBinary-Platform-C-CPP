#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H
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
// package org.allbinary.game.physics.velocity

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct BasicVelocityInterface BasicVelocityInterface;
#include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"

typedef struct VelocityInterface VelocityInterface;
struct VelocityInterface {
    int32_t (*getMaxForwardVelocity)(void* this);
    int32_t (*getMaxReverseVelocity)(void* this);
    void (*limitMaxXYForwardVelocity)(void* this);
    void (*limitMaxXYReverseVelocity)(void* this);
    void (*limitXYToForwardAndReverseMaxVelocity)(void* this);
    void (*limitMaxXYVelocity)(void* this, int32_t maxVelocity);
    void (*setMaxForwardVelocity)(void* this, int32_t maxForwardVelocity);
    void (*setMaxReverseVelocity)(void* this, int32_t maxReverseVelocity);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void VelocityInterface_staticInit(void);

static inline int32_t VelocityInterface_getMaxForwardVelocity(void* this) {
    return ((__typeof__(((VelocityInterface*) nullptr)->getMaxForwardVelocity)) java_method_of(this, "getMaxForwardVelocity"))(this);
}

static inline int32_t VelocityInterface_getMaxReverseVelocity(void* this) {
    return ((__typeof__(((VelocityInterface*) nullptr)->getMaxReverseVelocity)) java_method_of(this, "getMaxReverseVelocity"))(this);
}

static inline void VelocityInterface_limitMaxXYForwardVelocity(void* this) {
    ((__typeof__(((VelocityInterface*) nullptr)->limitMaxXYForwardVelocity)) java_method_of(this, "limitMaxXYForwardVelocity"))(this);
}

static inline void VelocityInterface_limitMaxXYReverseVelocity(void* this) {
    ((__typeof__(((VelocityInterface*) nullptr)->limitMaxXYReverseVelocity)) java_method_of(this, "limitMaxXYReverseVelocity"))(this);
}

static inline void VelocityInterface_limitXYToForwardAndReverseMaxVelocity(void* this) {
    ((__typeof__(((VelocityInterface*) nullptr)->limitXYToForwardAndReverseMaxVelocity)) java_method_of(this, "limitXYToForwardAndReverseMaxVelocity"))(this);
}

static inline void VelocityInterface_limitMaxXYVelocity(void* this, int32_t maxVelocity) {
    ((__typeof__(((VelocityInterface*) nullptr)->limitMaxXYVelocity)) java_method_of(this, "limitMaxXYVelocity"))(this, maxVelocity);
}

static inline void VelocityInterface_setMaxForwardVelocity(void* this, int32_t maxForwardVelocity) {
    ((__typeof__(((VelocityInterface*) nullptr)->setMaxForwardVelocity)) java_method_of(this, "setMaxForwardVelocity"))(this, maxForwardVelocity);
}

static inline void VelocityInterface_setMaxReverseVelocity(void* this, int32_t maxReverseVelocity) {
    ((__typeof__(((VelocityInterface*) nullptr)->setMaxReverseVelocity)) java_method_of(this, "setMaxReverseVelocity"))(this, maxReverseVelocity);
}
#define VelocityInterface_getVelocityXBasicDecimalP BasicVelocityInterface_getVelocityXBasicDecimalP
#define VelocityInterface_getVelocityYBasicDecimalP BasicVelocityInterface_getVelocityYBasicDecimalP
#define VelocityInterface_zero BasicVelocityInterface_zero
#define VelocityInterface_setVelocityWithBigDecimalAndDirection BasicVelocityInterface_setVelocityWithBigDecimalAndDirection
#define VelocityInterface_addVelocityWithBigDecimalAndDirection BasicVelocityInterface_addVelocityWithBigDecimalAndDirection
#define VelocityInterface_setVelocityWithDirection BasicVelocityInterface_setVelocityWithDirection
#define VelocityInterface_addVelocityWithDirection BasicVelocityInterface_addVelocityWithDirection
#define VelocityInterface_setVelocityWithBigDecimal BasicVelocityInterface_setVelocityWithBigDecimal
#define VelocityInterface_addVelocityWithBigDecimal BasicVelocityInterface_addVelocityWithBigDecimal
#define VelocityInterface_setVelocity BasicVelocityInterface_setVelocity
#define VelocityInterface_addVelocity BasicVelocityInterface_addVelocity
#define VelocityInterface_addVelocityi BasicVelocityInterface_addVelocityi


#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_VELOCITYINTERFACE_H
