#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H
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
// package org.allbinary.physics.movement

#include <ctype.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <strings.h>
#include "allbinary_java.h"
typedef struct Movement Movement;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct BasicVelocityProperties BasicVelocityProperties;
typedef struct VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface;
typedef struct AllBinaryLayer AllBinaryLayer;
typedef struct BasicDecimal BasicDecimal;
typedef struct AxisMathVectorUtil AxisMathVectorUtil;
typedef struct AngleFactory AngleFactory;
#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#include "org/allbinary/game/physics/velocity/VelocityInterfaceCompositeInterface.h"
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif
#if __has_include("org/allbinary/logic/math/vector/AxisMathVectorUtil.h")
#include "org/allbinary/logic/math/vector/AxisMathVectorUtil.h"
#endif
#include "org/allbinary/physics/movement/Movement.h"

typedef struct BasicConstantVelocityMovement BasicConstantVelocityMovement;
struct BasicConstantVelocityMovement {
    Movement base;
    VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface_interface;
    BasicVelocityProperties* velocityProperties;
    BasicDecimal* speedBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
};


BasicConstantVelocityMovement* BasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void BasicConstantVelocityMovement_init(BasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void BasicConstantVelocityMovement_initMethod(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

void BasicConstantVelocityMovement_moveOutsideRadius(BasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);

void BasicConstantVelocityMovement_process(BasicConstantVelocityMovement* this, AllBinaryGameLayer* layer);

const char* BasicConstantVelocityMovement_toString(BasicConstantVelocityMovement* this);

void BasicConstantVelocityMovement_stop(BasicConstantVelocityMovement* this);

BasicVelocityProperties* BasicConstantVelocityMovement_getVelocityProperties(BasicConstantVelocityMovement* this);

void BasicConstantVelocityMovement_setVelocityProperties(BasicConstantVelocityMovement* this, BasicVelocityProperties* velocityProperties);

void BasicConstantVelocityMovement_setSpeedBasicDecimal(BasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal);

BasicDecimal* BasicConstantVelocityMovement_getSpeedBasicDecimal(BasicConstantVelocityMovement* this);
#define BasicConstantVelocityMovement_new2 BasicConstantVelocityMovement_new
#define BasicConstantVelocityMovement_init2 BasicConstantVelocityMovement_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicConstantVelocityMovement_register(void);

#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICCONSTANTVELOCITYMOVEMENT_H
