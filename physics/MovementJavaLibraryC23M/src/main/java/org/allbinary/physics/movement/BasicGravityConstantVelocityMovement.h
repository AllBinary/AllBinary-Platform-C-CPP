#ifndef ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_H
#define ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_H
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
typedef struct BasicConstantVelocityMovement BasicConstantVelocityMovement;
typedef struct AllBinaryGameLayer AllBinaryGameLayer;
typedef struct GravityUtil GravityUtil;
typedef struct VelocityProperties VelocityProperties;
typedef struct BasicDecimal BasicDecimal;
#if __has_include("org/allbinary/game/physics/acceleration/GravityUtil.h")
#include "org/allbinary/game/physics/acceleration/GravityUtil.h"
#endif
#include "org/allbinary/physics/movement/BasicConstantVelocityMovement.h"

typedef struct BasicGravityConstantVelocityMovement BasicGravityConstantVelocityMovement;
struct BasicGravityConstantVelocityMovement {
    BasicConstantVelocityMovement base;
    GravityUtil* gravityUtil;
};


BasicGravityConstantVelocityMovement* BasicGravityConstantVelocityMovement_new(BasicDecimal* speedBasicDecimal);

void BasicGravityConstantVelocityMovement_init(BasicGravityConstantVelocityMovement* this, BasicDecimal* speedBasicDecimal);

void BasicGravityConstantVelocityMovement_process(BasicGravityConstantVelocityMovement* this, AllBinaryGameLayer* layer);
#define BasicGravityConstantVelocityMovement_new1 BasicGravityConstantVelocityMovement_new
#define BasicGravityConstantVelocityMovement_init1 BasicGravityConstantVelocityMovement_init
#ifndef BasicGravityConstantVelocityMovement_moveOutsideRadius
#define BasicGravityConstantVelocityMovement_moveOutsideRadius BasicConstantVelocityMovement_moveOutsideRadius
#endif
#ifndef BasicGravityConstantVelocityMovement_toString
#define BasicGravityConstantVelocityMovement_toString BasicConstantVelocityMovement_toString
#endif
#ifndef BasicGravityConstantVelocityMovement_stop
#define BasicGravityConstantVelocityMovement_stop BasicConstantVelocityMovement_stop
#endif
#ifndef BasicGravityConstantVelocityMovement_getVelocityProperties
#define BasicGravityConstantVelocityMovement_getVelocityProperties BasicConstantVelocityMovement_getVelocityProperties
#endif
#ifndef BasicGravityConstantVelocityMovement_setVelocityProperties
#define BasicGravityConstantVelocityMovement_setVelocityProperties BasicConstantVelocityMovement_setVelocityProperties
#endif
#ifndef BasicGravityConstantVelocityMovement_setSpeedBasicDecimal
#define BasicGravityConstantVelocityMovement_setSpeedBasicDecimal BasicConstantVelocityMovement_setSpeedBasicDecimal
#endif
#ifndef BasicGravityConstantVelocityMovement_getSpeedBasicDecimal
#define BasicGravityConstantVelocityMovement_getSpeedBasicDecimal BasicConstantVelocityMovement_getSpeedBasicDecimal
#endif
#ifndef BasicGravityConstantVelocityMovement_stop
#define BasicGravityConstantVelocityMovement_stop Movement_stop
#endif
// Runs the Java static initialization of the class once. Reads of its static fields call it first.
void BasicGravityConstantVelocityMovement_staticInit(void);
// Registers the class, its superclass, and its methods for the interface calls (java_register_method)
void BasicGravityConstantVelocityMovement_register(void);


#endif // ORG_ALLBINARY_PHYSICS_MOVEMENT_BASICGRAVITYCONSTANTVELOCITYMOVEMENT_H
