#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H
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

typedef struct NoZBasicConstantVelocityMovement NoZBasicConstantVelocityMovement;
struct NoZBasicConstantVelocityMovement {
    Movement base;
    VelocityInterfaceCompositeInterface VelocityInterfaceCompositeInterface_interface;
    BasicVelocityProperties* velocityProperties;
    BasicDecimal* speedBasicDecimal;
    AxisMathVectorUtil* axisMathVectorUtil;
};


NoZBasicConstantVelocityMovement* NoZBasicConstantVelocityMovement_new(BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void NoZBasicConstantVelocityMovement_init(NoZBasicConstantVelocityMovement* this, BasicDecimal* basicDecimal, BasicVelocityProperties* velocityProperties);

void NoZBasicConstantVelocityMovement_initMethod(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal, int32_t angle, int32_t otherAngle);

void NoZBasicConstantVelocityMovement_moveOutsideRadius(NoZBasicConstantVelocityMovement* this, AllBinaryLayer* layer, int64_t radius, int32_t angle, int32_t otherAngle);

void NoZBasicConstantVelocityMovement_process(NoZBasicConstantVelocityMovement* this, AllBinaryGameLayer* layer);

const char* NoZBasicConstantVelocityMovement_toString(NoZBasicConstantVelocityMovement* this);

void NoZBasicConstantVelocityMovement_stop(NoZBasicConstantVelocityMovement* this);

BasicVelocityProperties* NoZBasicConstantVelocityMovement_getVelocityProperties(NoZBasicConstantVelocityMovement* this);

void NoZBasicConstantVelocityMovement_setVelocityProperties(NoZBasicConstantVelocityMovement* this, BasicVelocityProperties* velocityProperties);

void NoZBasicConstantVelocityMovement_setSpeedBasicDecimal(NoZBasicConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal);

BasicDecimal* NoZBasicConstantVelocityMovement_getSpeedBasicDecimal(NoZBasicConstantVelocityMovement* this);
#define NoZBasicConstantVelocityMovement_new2 NoZBasicConstantVelocityMovement_new
#define NoZBasicConstantVelocityMovement_init2 NoZBasicConstantVelocityMovement_init
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void NoZBasicConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void NoZBasicConstantVelocityMovement_register(void);

#if __has_include("org/allbinary/game/physics/velocity/BasicVelocityProperties.h")
#include "org/allbinary/game/physics/velocity/BasicVelocityProperties.h"
#endif
#if __has_include("org/allbinary/logic/math/BasicDecimal.h")
#include "org/allbinary/logic/math/BasicDecimal.h"
#endif

#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_NOZBASICCONSTANTVELOCITYMOVEMENT_H
