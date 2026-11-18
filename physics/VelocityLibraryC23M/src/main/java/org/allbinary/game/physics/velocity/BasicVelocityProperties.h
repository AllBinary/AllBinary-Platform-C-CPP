#ifndef ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H
#define ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H
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
typedef struct Direction Direction;
typedef struct DirectionUtil DirectionUtil;
typedef struct LogUtil LogUtil;
typedef struct BasicDecimal BasicDecimal;
typedef struct AxisMathVectorUtil AxisMathVectorUtil;
typedef struct StringMaker StringMaker;
typedef struct StringUtil StringUtil;
typedef struct Angle Angle;
typedef struct PositionStrings PositionStrings;
typedef struct CommonSeps CommonSeps;
#if __has_include("org/allbinary/direction/DirectionUtil.h")
#include "org/allbinary/direction/DirectionUtil.h"
#endif
#if __has_include("org/allbinary/logic/communication/log/LogUtil.h")
#include "org/allbinary/logic/communication/log/LogUtil.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/vector/AxisMathVectorUtil.h")
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#endif
#include "org/allbinary/game/physics/velocity/BasicVelocityInterface.h"

typedef struct BasicVelocityProperties BasicVelocityProperties;
struct BasicVelocityProperties {
    BasicVelocityInterface BasicVelocityInterface_interface;
    LogUtil* logUtil;
    BasicDecimal* velocityXBasicDecimal;
    BasicDecimal* velocityYBasicDecimal;
    BasicDecimal* velocityZBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
    DirectionUtil* directionUtil;
};


BasicVelocityProperties* BasicVelocityProperties_new(void);

void BasicVelocityProperties_init(BasicVelocityProperties* this);

void BasicVelocityProperties_zero(BasicVelocityProperties* this);

BasicDecimal* BasicVelocityProperties_getVelocityXBasicDecimalP(BasicVelocityProperties* this);

BasicDecimal* BasicVelocityProperties_getVelocityYBasicDecimalP(BasicVelocityProperties* this);

BasicDecimal* BasicVelocityProperties_getVelocityZBasicDecimalP(BasicVelocityProperties* this);

void BasicVelocityProperties_setVelocityWithBigDecimalAndDirection(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);

void BasicVelocityProperties_setVelocityWithDirection(BasicVelocityProperties* this, int64_t magnitude, Direction* direction, Direction* otherDirection);

void BasicVelocityProperties_addVelocityWithBigDecimalAndDirection(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Direction* direction, Direction* otherDirection);

void BasicVelocityProperties_addVelocityWithDirection(BasicVelocityProperties* this, int64_t magnitude, Direction* direction, Direction* otherDirection);

void BasicVelocityProperties_setVelocityWithBigDecimal(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);

void BasicVelocityProperties_addVelocityWithBigDecimal(BasicVelocityProperties* this, BasicDecimal* magnitudeBasicDecimal, Angle* angle, Angle* otherAngle);

void BasicVelocityProperties_setVelocity(BasicVelocityProperties* this, int64_t magnitude, Angle* angle, Angle* otherAngle);

void BasicVelocityProperties_addVelocity(BasicVelocityProperties* this, int64_t magnitude, Angle* angle, Angle* otherAngle);

void BasicVelocityProperties_setVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle);

void BasicVelocityProperties_addVelocityi(BasicVelocityProperties* this, int64_t magnitude, int32_t angle, int32_t otherAngle);

const char* BasicVelocityProperties_toString(BasicVelocityProperties* this);
#define BasicVelocityProperties_new0 BasicVelocityProperties_new
#define BasicVelocityProperties_init0 BasicVelocityProperties_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicVelocityProperties_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicVelocityProperties_register(void);

#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

#endif // ORG_ALLBINARY_GAME_PHYSICS_VELOCITY_BASICVELOCITYPROPERTIES_H
