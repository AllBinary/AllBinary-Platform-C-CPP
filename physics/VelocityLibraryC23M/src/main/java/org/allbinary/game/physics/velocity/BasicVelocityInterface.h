#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H
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
typedef struct Direction Direction;
typedef struct BasicDecimal BasicDecimal;
typedef struct Angle Angle;

typedef struct BasicVelocityInterface BasicVelocityInterface;
struct BasicVelocityInterface {
    BasicDecimal* (*getVelocityXBasicDecimalP)(void* this);
    BasicDecimal* (*getVelocityYBasicDecimalP)(void* this);
    void (*zero)(void* this);
    void (*setVelocityWithBigDecimalAndDirection)(void* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);
    void (*addVelocityWithBigDecimalAndDirection)(void* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);
    void (*setVelocityWithDirection)(void* this, int64_t magnitude, Direction* direction, Direction* otherDirection);
    void (*addVelocityWithDirection)(void* this, int64_t magnitude, Direction* direction, Direction* otherDirection);
    void (*setVelocityWithBigDecimal)(void* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);
    void (*addVelocityWithBigDecimal)(void* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);
    void (*setVelocity)(void* this, int64_t magnitude, Angle* angle, Angle* otherAngle);
    void (*addVelocity)(void* this, int64_t magnitude, Angle* angle, Angle* otherAngle);
    void (*addVelocityi)(void* this, int64_t magnitude, int32_t angle, int32_t otherAngle);
};

// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicVelocityInterface_staticInit(void);

static inline BasicDecimal* BasicVelocityInterface_getVelocityXBasicDecimalP(void* this) {
    return ((__typeof__(((BasicVelocityInterface*) nullptr)->getVelocityXBasicDecimalP)) java_method_of(this, "getVelocityXBasicDecimalP"))(this);
}

static inline BasicDecimal* BasicVelocityInterface_getVelocityYBasicDecimalP(void* this) {
    return ((__typeof__(((BasicVelocityInterface*) nullptr)->getVelocityYBasicDecimalP)) java_method_of(this, "getVelocityYBasicDecimalP"))(this);
}

static inline void BasicVelocityInterface_zero(void* this) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->zero)) java_method_of(this, "zero"))(this);
}

static inline void BasicVelocityInterface_setVelocityWithBigDecimalAndDirection(void* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->setVelocityWithBigDecimalAndDirection)) java_method_of(this, "setVelocityWithBigDecimalAndDirection"))(this, magnitudeBasicDecimal, direction, otherDirection);
}

static inline void BasicVelocityInterface_addVelocityWithBigDecimalAndDirection(void* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->addVelocityWithBigDecimalAndDirection)) java_method_of(this, "addVelocityWithBigDecimalAndDirection"))(this, magnitudeBasicDecimal, direction, otherDirection);
}

static inline void BasicVelocityInterface_setVelocityWithDirection(void* this, int64_t magnitude, Direction* direction, Direction* otherDirection) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->setVelocityWithDirection)) java_method_of(this, "setVelocityWithDirection"))(this, magnitude, direction, otherDirection);
}

static inline void BasicVelocityInterface_addVelocityWithDirection(void* this, int64_t magnitude, Direction* direction, Direction* otherDirection) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->addVelocityWithDirection)) java_method_of(this, "addVelocityWithDirection"))(this, magnitude, direction, otherDirection);
}

static inline void BasicVelocityInterface_setVelocityWithBigDecimal(void* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->setVelocityWithBigDecimal)) java_method_of(this, "setVelocityWithBigDecimal"))(this, magnitudeBasicDecimal, angle, otherAngle);
}

static inline void BasicVelocityInterface_addVelocityWithBigDecimal(void* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->addVelocityWithBigDecimal)) java_method_of(this, "addVelocityWithBigDecimal"))(this, magnitudeBasicDecimal, angle, otherAngle);
}

static inline void BasicVelocityInterface_setVelocity(void* this, int64_t magnitude, Angle* angle, Angle* otherAngle) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->setVelocity)) java_method_of(this, "setVelocity"))(this, magnitude, angle, otherAngle);
}

static inline void BasicVelocityInterface_addVelocity(void* this, int64_t magnitude, Angle* angle, Angle* otherAngle) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->addVelocity)) java_method_of(this, "addVelocity"))(this, magnitude, angle, otherAngle);
}

static inline void BasicVelocityInterface_addVelocityi(void* this, int64_t magnitude, int32_t angle, int32_t otherAngle) {
    ((__typeof__(((BasicVelocityInterface*) nullptr)->addVelocityi)) java_method_of(this, "addVelocityi"))(this, magnitude, angle, otherAngle);
}

#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYINTERFACE_H
